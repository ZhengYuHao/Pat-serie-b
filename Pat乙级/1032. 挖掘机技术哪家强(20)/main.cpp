#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*为了用事实说明挖掘机技术到底哪家强，PAT组织了一场挖掘机技能大赛。现请你根据比赛结果统计出技术最强的那个学校。

输入格式：

输入在第1行给出不超过105的正整数N，即参赛人数。随后N行，每行给出一位参赛者的信息和成绩，
包括其所代表的学校的编号（从1开始连续编号）、及其比赛成绩（百分制），中间以空格分隔。

输出格式：

在一行中给出总得分最高的学校的编号、及其总分，中间以空格分隔。题目保证答案唯一，没有并列。

输入样例：
6
3 65
2 80
1 100
2 70
3 40
3 0
输出样例：
2 150
*/
typedef struct worker
{
	int num;
	int score;
}Wker;
static int nu=1;//用于统计一共有多少个学校 
void sort(Wker w[],int n);//根据学校编号进行排序 
void store(Wker w[],int n);//用于统计一共有多少个学校
void Tell(Wker s[],int n);//求得最强学校并且输出 
int main(int argc, char** argv) {
	int n;
	cin>>n;
	Wker w[n];
	for(int i=0;i<n;i++)
	{
		cin>>w[i].num>>w[i].score;
	}
	sort(w,n);
	store(w,n);
	Wker s[nu];
	int index=0;
	s[index].num=w[0].num;
	s[index].score=0;
	for(int i=0;i<n;i++)
	{
		if(s[index].num==w[i].num)
		{
		s[index].score=s[index].score+w[i].score;	
		}
		else if(s[index].num!=w[i].num)
		{
			index++;
			s[index].num=w[i].num;
			s[index].score=0;
	        s[index].score=s[index].score+w[i].score;
		}
	}
	/*for(int i=0;i<nu;i++)
	{
		cout<<s[i].num<<" "<<s[i].score<<endl;
	}
	cout<<nu<<endl;
	*/
	Tell(s,nu);
	return 0;
}
void sort(Wker w[],int n)
{
	
	int term1,term2;
	 for(int i=0;i<n-1;i++)
	 {
	 	for(int j=0;j<n-1-i;j++)
	 	{
	 		if(w[j].num>w[j+1].num)
	 		{
	 			term1=w[j].num;
	 			term2=w[j].score;
	 			w[j].num=w[j+1].num;
	 			w[j].score=w[j+1].score;
	 			w[j+1].num=term1;
	 			w[j+1].score=term2;
			 }
		 }
	 }
} 
void store(Wker w[],int n)//用于统计一共有多少个学校
{
	for(int i=0;i<n-1;i++)
	{
		if(w[i].num!=w[i+1].num)
		nu++; 
	}
}
void Tell(Wker s[],int n)
{
	Wker a;
	a.num=s[0].num;
	a.score=s[0].score;
	for(int i=0;i<n;i++)
	{
		if(a.score<s[i].score)
		{
			a.num=s[i].num;
			a.score=s[i].score;
		}
	}
	cout<<a.num<<" "<<a.score<<endl;
} 

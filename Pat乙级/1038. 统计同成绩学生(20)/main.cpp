#include <iostream>
using namespace std;
/*本题要求读入N名学生的成绩，将获得某一给定分数的学生人数输出。

输入格式：

输入在第1行给出不超过105的正整数N，即学生总人数。随后1行给出N名学生的百分制整数成绩，
中间以空格分隔。最后1行给出要查询的分数个数K（不超过N的正整数），随后是K个分数，
中间以空格分隔。

输出格式：

在一行中按查询顺序给出得分等于指定分数的学生人数，中间以空格分隔，但行末不得有多余空格。

输入样例：
10
60 75 90 55 75 99 82 90 75 50
3 75 90 88
输出样例：
3 2 0 */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)//总学生成绩 
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	int c[m];
	for(int i=0;i<m;i++)//需要查询的学生成绩 
	{
		cin>>b[i]; 
		c[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				c[i]++;
			}
		}
		if(i!=m-1)
		cout<<c[i]<<" ";
		else if(i==m-1)
		cout<<c[i];
	}
	return 0;
}

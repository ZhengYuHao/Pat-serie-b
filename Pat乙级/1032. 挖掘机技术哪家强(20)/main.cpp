#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Ϊ������ʵ˵���ھ�����������ļ�ǿ��PAT��֯��һ���ھ�����ܴ�������������ݱ������ͳ�Ƴ�������ǿ���Ǹ�ѧУ��

�����ʽ��

�����ڵ�1�и���������105��������N�����������������N�У�ÿ�и���һλ�����ߵ���Ϣ�ͳɼ���
�������������ѧУ�ı�ţ���1��ʼ������ţ�����������ɼ����ٷ��ƣ����м��Կո�ָ���

�����ʽ��

��һ���и����ܵ÷���ߵ�ѧУ�ı�š������ܷ֣��м��Կո�ָ�����Ŀ��֤��Ψһ��û�в��С�

����������
6
3 65
2 80
1 100
2 70
3 40
3 0
���������
2 150
*/
typedef struct worker
{
	int num;
	int score;
}Wker;
static int nu=1;//����ͳ��һ���ж��ٸ�ѧУ 
void sort(Wker w[],int n);//����ѧУ��Ž������� 
void store(Wker w[],int n);//����ͳ��һ���ж��ٸ�ѧУ
void Tell(Wker s[],int n);//�����ǿѧУ������� 
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
void store(Wker w[],int n)//����ͳ��һ���ж��ٸ�ѧУ
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

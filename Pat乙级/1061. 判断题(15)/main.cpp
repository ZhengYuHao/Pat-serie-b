#include <iostream>
using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
�ж�������кܼ򵥣������Ҫ����д���򵥵ĳ��������ʦ���Ⲣͳ��ѧ�����ж���ĵ÷֡�

�����ʽ��

�����ڵ�һ�и�������������100��������N��M���ֱ���ѧ���������ж����������ڶ��и���M��������5����������
��ÿ���������ֵ�������и���ÿ�����Ӧ����ȷ�𰸣�0�����ǡ���1�����ǡ������N�У�ÿ�и���һ��ѧ���Ľ��
���ּ���Կո�ָ���

�����ʽ��

���������˳�����ÿ��ѧ���ĵ÷֣�ÿ������ռһ�С�

����������
3 6
2 1 3 3 4 5
0 0 1 0 1 1
0 1 1 0 0 1
1 0 1 0 1 0
1 1 0 0 1 1
���������
13
11
12
*/
int main(int argc, char** argv) {
	int people,title;//��Ա��������Ŀ���� 
	cin>>people>>title;
	int stdscore[title];//ÿ����Ŀ�ı�׼��
	int anwser[title];
	int score[people][title]; 
	int counter[people];
	for(int i=0;i<title;i++)
	{
		cin>>stdscore[i];
	}
	for(int i=0;i<title;i++)
	{
		cin>>anwser[i];
	}
	for(int j=0;j<people;j++)
	{
	   counter[j]=0;
	   for(int i=0;i<title;i++)
	   {
		cin>>score[j][i];
		if(score[j][i]==anwser[i])
		{
			counter[j]=counter[j]+stdscore[i];
		}
	  }
	  
	}
	for(int i=0;i<people;i++)
	{
		cout<<counter[i]<<endl;
	}
	return 0;
}

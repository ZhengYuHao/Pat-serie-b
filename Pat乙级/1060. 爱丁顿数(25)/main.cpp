#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Ӣ������ѧ�Ұ����ٺ�ϲ���ﳵ����˵��Ϊ����ҫ�Լ����ﳵ��������������һ��������������E��
��������E���ﳵ����EӢ����������E����˵�������Լ���E����87��

�ָ���ĳ��N����ﳵ���룬���������Ӧ�İ�������E��<=N����

�����ʽ��

�����һ�и���һ��������N��<=105�����������ﳵ���������ڶ��и���N���Ǹ�����������ÿ����ﳵ���롣

�����ʽ��

��һ���и���N��İ���������

����������
10
6 7 6 9 3 10 8 2 7 8
���������
6
*/
int Tel(int a[],int term,int N);//�ж������д���term������ 
int main(int argc, char** argv) {
	int N;cin>>N;int a[N];
	for(int i=0;i<N;i++)//��ʼ��ÿ������ 
	{
		cin>>a[i];
	}
	for(int i=0;i<N;i++)
	{
		if(a[i]==Tel(a,a[i],N))
		{
			cout<<a[i];
			break;
		}	
	}
	return 0;
}
int Tel(int a[],int term,int N)//�ж������д���term������
{
	int counter=0;//ͳ������ 
	for(int i=0;i<N;i++)
	{
		if(a[i]>term)
		counter++;
	}
	return counter;
} 

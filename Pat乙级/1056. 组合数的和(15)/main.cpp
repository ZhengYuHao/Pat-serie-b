#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
����N����0�ĸ�λ���֣�����������2�����ֶ�������ϳ�1��2λ�����֡�Ҫ�����п�����ϳ�����2λ���ֵĺ͡�
�������2��5��8���������ϳ���25��28��52��58��82��85�����ǵĺ�Ϊ330��

�����ʽ��

������һ�����ȸ���N��1<N<10���������N����ͬ�ķ�0��λ���֡����ּ��Կո�ָ���

�����ʽ��

������п�����ϳ�����2λ���ֵĺ͡�

����������
3 2 8 5
���������
330
*/
int main(int argc, char** argv) {
	int n;//һ����������
	cin>>n;
	int a[n];//��ų�ʼ���� 
	long int counter=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		counter=counter+a[i]*(n-1)*10+a[i]*(n-1);
	 } 
	 cout<<counter;
	return 0;
}

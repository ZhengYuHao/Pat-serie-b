#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*����������ĸB����ʾ���١�����ĸS��ʾ��ʮ�����á�12...n������ʾ��λ����n��<10����
������ʽ�������һ��������3λ��������������234Ӧ�ñ����ΪBBSSS1234��
��Ϊ����2�����١���3����ʮ�����Լ���λ��4��

�����ʽ��ÿ�������������1����������������������n��<1000����

�����ʽ��ÿ���������������ռһ�У��ù涨�ĸ�ʽ���n��

��������1��
234
�������1��
BBSSS1234
��������2��
23
�������2��
SS123*/
int main(int argc, char** argv) {
	int n;cin>>n;
	int b,s,g;//�ֱ��ʾ��λ��ʮλ����λ��
	{
	  g=n%10;//�õ���λ 
	} 
	{
		s=((n-g)/10)%10;//�õ�ʮλ 
	} 
	{
		b=(n-(s*10)-g)/100;//�õ���λ 
	} 
	int i;
	for(i=0;i<b;i++)
		cout<<"B";
	for(i=0;i<s;i++)
		cout<<"S";
	for(i=1;i<=g;i++)
	    cout<<i;
    return 0;
}

#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
������ͳ�°��������������˶�ѧϰ��̣��������������д���룬��Ϊ������ʷ����λ��д������������ͳ��
2014��ף�Ϊ��ף���������ѧ�����ܡ���ʽ�������°����д�˺ܼ򵥵ļ�������룺����Ļ�ϻ�һ�������Ρ�
������Ҳ����һ�𻭰ɣ�

�����ʽ��

������һ���и��������α߳�N��3<=N<=20������������αߵ�ĳ���ַ�C�����һ���ո�

�����ʽ��

����ɸ����ַ�C�����������Ρ�����ע�⵽�м����м�������Ϊ���ý������ȥ���������Σ�
�������������ʵ������������50%����������ȡ������


����������
10 a
���������
aaaaaaaaaa
a        a
a        a
a        a
aaaaaaaaaa
*/
int main(int argc, char** argv) {
	int len;//�����εĳ���
	int wid;
	char c;
	cin>>len>>c;
	wid=(len/2.0+0.5);//��������
	for(int i=0;i<wid;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(i==0||i==wid-1)
			{
				cout<<c;
			}
			else if(i!=0||i!=wid-1)
			     {
			     	if(j==0||j==len-1)
			     	cout<<c;
			     	else if(j!=0||j!=len-1)
			     	    cout<<' ';
				 }
		}
		cout<<endl;
	 } 
	return 0;
}

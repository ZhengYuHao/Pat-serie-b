#include <iostream>
#include <string.h>
#include <math.h> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*��ѧ�������ǿ�ѧ��������ʾ�ܴ���С�����ֵ�һ�ַ���ķ�����
������������ʽ[+-][1-9]"."[0-9]+E[+-][0-9]+�������ֵ���������ֻ��1λ��
С������������1λ�������ּ���ָ�����ֵ������ż�ʹ������Ҳ�ض���ȷ������

���Կ�ѧ�������ĸ�ʽ����ʵ��A�����д������ͨ���ֱ�ʾ�����A������֤������Чλ����������

�����ʽ��

ÿ���������1��������������һ���Կ�ѧ��������ʾ��ʵ��A�������ֵĴ洢���Ȳ�����9999�ֽڣ�
����ָ���ľ���ֵ������9999��

�����ʽ��

��ÿ��������������һ���а���ͨ���ֱ�ʾ�����A������֤������Чλ��������������ĩβ��0��

��������1��
+1.23400E-03
�������1��
0.00123400
��������2��
-1.2E+10
�������2�� 
-12000000000*/
static int n=0;//���ڱ���ڶ���E���ŵ��±� 
char letter1(string str);//��ȡ��һ��+-����
char letter2(string str);//��ȡ�ڶ���+-���� 
char* Get(string str);//���������ݵı�׼double���ͱ��char���� 
int getrear(string str);//���E�ļ��η� 
int main(int argc, char** argv) {
	
	string str;
	cin>>str;
	char c1=letter1(str);
	char c2=letter2(str);
	int e=getrear(str);
	string h=Get(str);//�����ַ��� 
	int num=n-3;//.���ŵ�E����֮������ָ���
	if(c2=='-') 
	{
		if(c1=='-')
		{
			cout<<'-';
			for(int i=0;i<e;i++)
			{
				if(i==0)
				cout<<'0'<<'.';
				else if(i!=0)
				cout<<'0';
			}
			for(int i=0;i<h.length();i++)
			{
				if(h[i]!='.')
				cout<<h[i];
			}
			cout<<endl;
		}
		else if(c1=='+')
		{
			for(int i=0;i<e;i++)
			{
				if(i==0)
				cout<<'0'<<'.';
				else if(i!=0)
				cout<<'0';
			}
			for(int i=0;i<h.length();i++)
			{
				if(h[i]!='.')
				cout<<h[i];
			}
			cout<<endl;
		}
		
	}
	else if(c2=='+')
	{
		if(c1=='-')
		{
			cout<<'-';
			if(e<num)
			{
				for(int i=0;i<h.length();i++)
			    {
				   if(h[i]!='.')
				   {
				   	if(i==e+1)
				   	cout<<h[i]<<'.';
				   	cout<<h[i];
				   }
				   
			    }
			 } 
			 else if(e>num)
			 {
			 	for(int i=0;i<h.length();i++)
			    {
				   if(h[i]!='.')
				   cout<<h[i];
			    }
			    for(int i=0;i<e-num;i++)
			    {
			    	cout<<'0';
				}
				cout<<endl;
			 }
			 else if(e==num)
			 {
			 	for(int i=0;i<h.length();i++)
			   {
				   if(h[i]!='.')
				   cout<<h[i];
		     	}
			     cout<<endl;
			 }
			
		}
		else if(c1=='+')
		{
			if(e<num)
			{
				for(int i=0;i<h.length();i++)
			    {
				   if(h[i]!='.')
				   {
				   	if(i==e+1)
				   	cout<<h[i]<<'.';
				   	cout<<h[i];
				   }
				   
			    }
			 } 
			 else if(e>num)
			 {
			 	for(int i=0;i<h.length();i++)
			    {
				   if(h[i]!='.')
				   cout<<h[i];
			    }
			    for(int i=0;i<e-num;i++)
			    {
			    	cout<<'0';
				}
				cout<<endl;
			 }
			 else if(e==num)
			 {
			 	for(int i=0;i<h.length();i++)
			   {
				   if(h[i]!='.')
				   cout<<h[i];
		     	}
			     cout<<endl;
			 }
		}
	}
	return 0;
}
char letter1(string str)//��ȡ��һ��+-����
{
	return str[0]; 

} 
char letter2(string str)//��ȡ�ڶ���+-���� 
{
	int i=0;
	while(str[i]!='E')
	{
		if(str[i+1]=='E')
		{
			n=i+1;
			return str[i+2];
		}
		i++;
	}
}
char*  Get(string str)////���������ݵı�׼double���ͱ��char���� 
{
	char *p=new char [10000000];
	int i;
	for(i=1;i<n;i++)
	{
		p[i-1]=str[i];
	}
	p[i]=NULL;
	return p;	 
 } 
 int getrear(string str)//���E�ļ��η� 
 {
 	int L=1;
 	int B=0;
	for(int i=str.length()-1;i>n+1;i--)
	{
		B=B+(str[i]-'0')*L;
		L=L*10;	
	}
	return B;
 } 

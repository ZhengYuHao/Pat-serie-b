#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*����Ҫ��ʵ��һ�����ּ��ܷ��������ȹ̶�һ��������������A������һ������B��
����ÿ1λ������A�Ķ�Ӧλ���ϵ����ֽ����������㣺������λ��
��Ӧλ��������Ӻ��13ȡ�ࡪ��������J����10��Q����11��K����12����ż��λ��
��B�����ּ�ȥA�����֣������Ϊ���������ټ�10���������λΪ��1λ��

�����ʽ��

������һ�������θ���A��B����Ϊ������100λ��������������Կո�ָ���

�����ʽ��

��һ����������ܺ�Ľ����

����������
1234567 368782971
���������
3695Q8118*/
int main(int argc, char** argv) {
	char a[100];//���ڱ��������ʽ 
	int counter=0;//��¼����a���±� 
	char  zz;//���ڱ���ÿ������ó����ַ���
	int shu,numB2;
	string strA,strB;
	cin>>strA>>strB;//��ʼ���������� 
	int A=strA.length();
	int B=strB.length();
	int tel;//���ڱ��������ż��
	int numA;
	if(A>=B)
	{
		numA=A-1;
	    tel=1; 
		for(int i=B-1;i>=0;i--,numA--)
		{
			if(tel==1)
			{
				shu=(((strA[numA]-'0')+(strB[i]-'0'))%13);
				if(shu==10)
				{
					a[counter]='J';
					counter++;
				}
				else if(shu==11)
				{
					a[counter]='Q';
					counter++;
				}
				else if(shu==12)
				{
					a[counter]='K';
					counter++;
				}
				else {
					a[counter]=shu+48;
					counter++;
				}
				tel=2;
			 } 
			 else if(tel==2)
			 {
			 	shu=(strB[i]-'0')-(strA[numA]-'0');
			 	if(shu<0)
			 	{
			 		shu=shu+10;
			 		a[counter]=shu+48;
					counter++;
				 }
				 else if(shu>=0)
				 {
				 	if(shu==10)
				   {
					a[counter]='J';
					counter++;
				  }
				    else if(shu==11)
				   {
				 	a[counter]='Q';
					counter++;
				   }
			     	else if(shu==12)
			    	{
					a[counter]='K';
					counter++;
				   }
				    else {
					a[counter]=shu+48;
					counter++;
				   }
				 }
				 tel=1;
			 }	 
		}
		for(int i=counter-1;i>=0;i--)
		{
			cout<<a[i];
		}
	}
	else if(B>A)
	{
		int numB=B-1;
		tel=1;
		     for(int i=A-1;i>=0;i--,numB--)	
		     {
			     if(tel==1)
			    { 
		     	shu=(((strA[i]-'0')+(strB[numB]-'0'))%13);
				if(shu==10)
				{
					a[counter]='J';
					counter++;
				}
				else if(shu==11)
				{
					a[counter]='Q';
					counter++;
				}
				else if(shu==12)
				{
					a[counter]='K';
					counter++;
				}
				else {
					a[counter]=shu+48;
					counter++;
				}
				tel=2;
			 }
		else if(tel==2)
		{
			shu=(strB[numB]-'0')-(strA[i]-'0');
			 	if(shu<0)
			 	{
			 		shu=shu+10;
			 		a[counter]=shu+48;
					counter++;
				 }
				 else if(shu>=0)
				 {
				 	if(shu==10)
				   {
					a[counter]='J';
					counter++;
				  }
				    else if(shu==11)
				   {
				 	a[counter]='Q';
					counter++;
				   }
			     	else if(shu==12)
			    	{
					a[counter]='K';
					counter++;
				   }
				    else {
					a[counter]=shu+48;
					counter++;
				   }
				 }
				 tel=1;	 
		}
		}
		numB2=numB;	
		for(int i=0;i<=numB2;i++)
		{
			cout<<strB[i];
		}
		for(int i=counter-1;i>=0;i--)
		{
			cout<<a[i];
		}
	}
	return 0;
}

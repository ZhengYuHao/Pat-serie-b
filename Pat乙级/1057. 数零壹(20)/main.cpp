#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
����һ�����Ȳ�����105���ַ���������Ҫ���㽫��������Ӣ����ĸ����ţ���ĸa-z��Ӧ���1-26�����ִ�Сд����ӣ�
�õ�����N��Ȼ���ٷ���һ��N�Ķ����Ʊ�ʾ���ж���0������1����������ַ�����PAT (Basic)��������ĸ���֮��Ϊ��
16+1+20+2+1+19+9+3=71����71�Ķ�������1000111������3��0��4��1��

�����ʽ��

������һ���и������Ȳ�����105���Իس��������ַ�����

�����ʽ��

��һ�����Ⱥ����0�ĸ�����1�ĸ���������Կո�ָ���

����������
PAT (Basic)
���������
3 4
*/
int sum(char *str);//���ڷ����ַ����֮�� 
int main(int argc, char** argv) {
	char str[100000];
	gets(str);
	int c=sum(str);//�ַ����к�֮�� //���ڱ���ת��������ʱ��ı�����
	int L=0,Y=0;//���ڱ��������������0��1�ĸ��� 
	int yu;//��ʱ�������� 
	while(c!=0)
	{
		yu=c%2;
		c=c/2;
		if(yu==1)
		  Y++;
		  else if(yu==0)
		     L++;
		}	
		cout<<L<<" "<<Y;
	return 0;
}
//==========
int sum(char *str)//���ڷ����ַ����֮�� 
{
	int num=0;
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		num=num+(str[i]-96);	
		}
		else if(str[i]>='A'&&str[i]<='Z')
		{
			num=num+(str[i]-64);
		}
	}
	return num;
}

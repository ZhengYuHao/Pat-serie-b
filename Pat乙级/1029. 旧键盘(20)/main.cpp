#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
�ɼ����ϻ��˼���������������һ�����ֵ�ʱ�򣬶�Ӧ���ַ��Ͳ�����֡�
���ڸ���Ӧ�������һ�����֡��Լ�ʵ�ʱ���������֣������г��϶���������Щ����

�����ʽ��

������2���зֱ����Ӧ����������֡��Լ�ʵ�ʱ���������֡�ÿ�������ǲ�����80���ַ��Ĵ���
����ĸA-Z��������Сд��������0-9���Լ��»��ߡ�_��������ո���ɡ���Ŀ��֤2���ַ������ǿա�

�����ʽ��

���շ���˳����һ������������ļ�������Ӣ����ĸֻ�����д��ÿ������ֻ���һ�Ρ���Ŀ��֤������1��������

����������
7_This_is_a_test
_hs_s_a_es
���������
7TI
*/
void SetToBig(char a[]);//��Сд��ĸȫ��ת���ɴ�д��ĸ 
bool Tell(char a[],char x);//�ж���ĸ�Ƿ��ظ� 
int main(int argc, char** argv) {
	char a[80];
	char b[80];
	char c[80];
	cin>>a;
	cin>>b;
	SetToBig(a);
	SetToBig(b);
	int i,j;
	i=0;
    int m=0;
	while(a[i]!='\0')
	{
	    j=0;
		while(b[j]!='\0')
		{
			if(a[i]==b[j])
			goto loop;
			j++;
		}
		if(Tell(c,a[i])==false)
		{
			cout<<a[i];
		}
		c[m]=a[i];
		m++;
		c[m]='/0';
		loop:;
		i++;
	}
	return 0;
}
//===========
void SetToBig(char a[])//��Сд��ĸȫ��ת���ɴ�д��ĸ
{
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]>=97&&a[i]<122)
		{
			a[i]=a[i]-32;
		}
		i++;
	}
}
//============
bool Tell(char a[],char x)//�ж���ĸ�Ƿ��ظ� 
{
	int i=0;
	int num=0;
	while(a[i]!='\0')
	{
		if(a[i]==x)
		num++;
	    i++;
	}
	if(num>0)
	return true;
	else return false;

}

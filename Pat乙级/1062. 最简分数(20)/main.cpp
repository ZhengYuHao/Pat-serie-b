#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
һ������һ��д�����������������ʽ��N/M������M��Ϊ0����������ָ���Ӻͷ�ĸû�й�Լ���ķ�����ʾ��ʽ��

�ָ�����������ȵ������� N1/M1 �� N2/M2��Ҫ���㰴��С�����˳���г�����֮���ĸΪK����������

�����ʽ��

������һ���а�N/M�ĸ�ʽ���������������������һ����������ĸK������Կո�ָ�����Ŀ��֤����������������������1000��

�����ʽ��

��һ���а�N/M�ĸ�ʽ�г�������������֮���ĸΪK������������������С�����˳�������1���ո�ָ���
����β�����ж���ո���Ŀ��֤������1�������

����������
7/18 13/20 12
���������
5/12 7/12
*/
void getint(string str1,string str2,int *n1,int *n2,int *m1,int *m2);//��string�еķ��ӷ�ĸ��ȡ���� 
int main(int argc, char** argv) {
	int n1,n2,m1,m2,m;
	string str1,str2;
	cin>>str1>>str2>>m;
	getint(str1,str2,&n1,&n2,&m1,&m2);
	int counter=0;
	if((n1*1.0)/m1>(n2*1.0)/m2)
	{
		int i,j,k,l;
		i=n1;
		j=m1;
		k=n2;
		l=m2;
		n1=k;
		m1=l;
		n2=i;
		m2=j;
	}
	for(int i=1;i<m;i++)//��2��ʼ����Ѱ��������� 
	{
		if((i*1.0)/m>(n1*1.0)/m1&&(i*1.0)/m<(n2*1.0)/m2) //��С�Ƿ����� 
		{
			if(i==1)
			{
				if(counter==0)
				{
						cout<<i<<"/"<<m;
						counter++;
				}
				else if(counter!=0)
				{
					cout<<" "<<i<<"/"<<m;
					counter++;
				}	
			 } 
			 else if(i!=1&&m%i!=0)
			 {
			 	if(counter==0)
				{
						cout<<i<<"/"<<m;
						counter++;
				}
				else if(counter!=0)
				{
					cout<<" "<<i<<"/"<<m;
					counter++;
				}	
			 }
		}
	}	
	return 0;
} 
//========
void getint(string str1,string str2,int *n1,int *n2,int *m1,int *m2)//��string�еķ��ӷ�ĸ��ȡ����  
{
	int term=0;
	for(int i=0;i<str1.length();i++)
	{
		if(str1[i]!='/')
		{
			term=term*10+(str1[i]-'0');
		}
		else if(str1[i]=='/')
		{
			*n1=term;
			term=0;
		}
	}
	*m1=term;
	term=0;
	for(int i=0;i<str2.length();i++)
	{
		if(str2[i]!='/')
		{
			term=term*10+(str2[i]-'0');
		}
		else if(str2[i]=='/')
		{
			*n2=term;
			term=0;
		}
	}
	*m2=term;
}

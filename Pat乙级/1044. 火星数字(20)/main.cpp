#include <iostream>
#include <string.h>
#include <sstream>
using namespace std; 
string marword1[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string marword2[12]={ "tam","hel", "maa","huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void slove(char *);//�Ƚ�������ת���������д�ӡ 
int main(int argc, char** argv) {
	//���ڴ洢�����Ļ�������
	int n;
	cin>>n;
	getchar();
	char *str[n]; 
	for(int i=0;i<n;i++)
	{
		str[i]=new char[10];
		gets(str[i]);
	}
	for(int i=0;i<n;i++)
	{
		slove(str[i]);
	}
	return 0;
}
//=========
void slove(char *str)//�Ƚ�������ת���������д�ӡ
{
	if(str[0]>=48&&str[0]<=57)//��ʾ���������Ϊʮ���� 
	{  
	     int num;
		 stringstream ss;
		 ss<<str;
		 ss>>num; 
		 int zz,bb;//���ڽ�int�����ݲ�ֳɻ�����
		 if(num<=12) 
		 {
		 	cout<<marword1[num]<<endl;
		 }
		 else 
		 {
		 	zz=num%13;
		    bb=num/13;
		    if(zz==0)
		    {
		    	cout<<marword2[bb-1]<<endl;
			}
			else if(zz!=0)
			{
				cout<<marword2[bb-1]<<" "<<marword1[zz]<<endl;
			}
		 }			
	}
	else if(str[0]>=97&&str[0]<=122) //��ʾ���������Ϊ������ 
	{
		string zz=str;
		int h=zz.length();
		if(h>5)//�����ķ����� 
		{
			string a="abc";a[0]=zz[0];a[1]=zz[1];a[2]=zz[2];
			string b="abc";b[0]=zz[4];b[1]=zz[5];b[2]=zz[6];
			int cc=0;
			for(int i=0;i<12;i++)
			{
				if(a==marword2[i])
				cc=(i+1)*13;
			}
			for(int i=0;i<13;i++)
			{
				if(b==marword1[i])
				{
					cout<<cc+i<<endl;
				}
			}
		}
		else //������Ϊ���� 
		{
			string a="abc";a[0]=zz[0];a[1]=zz[1];a[2]=zz[2];
			for(int i=0;i<13;i++)
			{
				if(a==marword1[i])
				{
					cout<<i<<endl;
					return;
				}				
			}
			for(int i=0;i<12;i++)
			{
				if(a==marword2[i])
				{
					cout<<(i+1)*13<<endl;
					return;
				}
				
			}
		}	
	}
  }  

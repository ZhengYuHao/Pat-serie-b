#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�
//�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10��100�η���
//�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո�
//��һ�������һ��ƴ�����ֺ�û�пո�
//����������
//1234567890987654321123456789
//���������
//yi san wu
int main(int argc, char** argv) {
	string  n;cin>>n;
	int l=n.length();
	int num=0;
	for(int i=0;i<l;i++)
	{
		num=num+(n[i]-'0');
	}
	char zz[10];
	sprintf(zz,"%d",num);
	int i=0;
	while(zz[i]!=NULL)
	{
		if(zz[i]=='1')
		{
			if(zz[i+1]==NULL) 
		cout<<"yi";
		else cout<<"yi ";
		}
		if(zz[i]=='2')
		{
			if(zz[i+1]==NULL) 
		cout<<"er";
		else cout<<"er ";
		}
		if(zz[i]=='3')
		{
			if(zz[i+1]==NULL) 
		cout<<"san";
		else cout<<"san ";
		}
		if(zz[i]=='4')
		{
			if(zz[i+1]==NULL) 
		cout<<"si";
		else cout<<"si ";
		}
		if(zz[i]=='5')
		{
			if(zz[i+1]==NULL) 
		cout<<"wu";
		else cout<<"wu ";
		}
		if(zz[i]=='6')
		{
			if(zz[i+1]==NULL) 
		cout<<"liu";
		else cout<<"liu ";
		}
		if(zz[i]=='7')
		{
			if(zz[i+1]==NULL) 
		cout<<"qi";
		else cout<<"qi ";
		}
		if(zz[i]=='8')
		{
			if(zz[i+1]==NULL) 
		cout<<"ba";
		else cout<<"ba ";
		}
		if(zz[i]=='9')
		{
			if(zz[i+1]==NULL) 
		cout<<"jiu";
		else cout<<"jiu ";
		}
		if(zz[i]=='0')
		{
			if(zz[i+1]==NULL) 
		cout<<"ling";
		else cout<<"ling ";
		}
		i++;
	}	
	return 0;
}

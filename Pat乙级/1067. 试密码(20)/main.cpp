#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
������ͼ��¼ĳ��ϵͳȴ��������ʱ��ϵͳһ��ֻ�������㳢�����޶�Σ��������������ʱ���˺žͻᱻ���������������ʵ�����С���ܡ�

�����ʽ��

�����ڵ�һ�и���һ�����루���Ȳ�����20�ġ��������ո�Tab���س��ķǿ��ַ�������һ��������N��<= 10�����ֱ�����ȷ�������ϵͳ�����ԵĴ��������ÿ�и���һ���Իس������ķǿ��ַ��������û�������������롣���뱣֤������һ�γ��ԡ�������һ��ֻ�е���#�ַ�ʱ�����������������һ�в����û������롣

�����ʽ��

���û���ÿ�����룬�������ȷ�������ҳ��Դ���������N������һ���������Welcome in����
��������������Ǵ���ģ�����һ���а���ʽ�����Wrong password: �û�����Ĵ������롱��
�������ԴﵽN��ʱ�������һ�С�Account locked��������������

��������1��
Correct%pw 3
correct%pw
Correct@PW
whatisthepassword!
Correct%pw
#
�������1��
Wrong password: correct%pw
Wrong password: Correct@PW
Wrong password: whatisthepassword!
Account locked
��������2��
cool@gplt 3
coolman@gplt
coollady@gplt
cool@gplt
try again
#
�������2��
Wrong password: coolman@gplt
Wrong password: coollady@gplt
Welcome in

*/
int main(int argc, char** argv) {
	int N;//���Դ��� 
	string password;//��ȷ���� 
	cin>>password>>N;
	vector <string> ivec;
	string str;
	cin>>str;	
	while(str!="#")
	{
		ivec.push_back(str);
		cin>>str;
	}
	int num=0;
	for(vector <string>::size_type i=0;i!=ivec.size();i++)
	{
		if(num<N)
	{	
		if(ivec[i]==password)
		{
			cout<<"Welcome in";
			break;
		}
		else if(ivec[i]!=password)
		{
			cout<<"Wrong password: "<<ivec[i]<<endl;
			num++;
		}
	}
	if(num>=N)
	{
		//cout<<"Wrong password: "<<ivec[i]<<endl;
		cout<<"Account locked";
		break;
	}	
	}
	return 0;
}

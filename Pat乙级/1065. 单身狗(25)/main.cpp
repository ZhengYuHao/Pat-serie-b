#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm> 
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
�������������Ķ��ڵ�����ʿ��һ�ְ��ơ���������������˵Ĵ����ɶ����ҳ��䵥�Ŀ��ˣ��Ա��������ذ���

�����ʽ��

�����һ�и���һ��������N��<=50000��������֪����/���µĶ��������N�У�ÿ�и���һ�Է���/���¡���Ϊ���������
ÿ�˶�Ӧһ��ID�ţ�Ϊ5λ���֣���00000��99999����ID���Կո�ָ���֮�����һ��������M��<=10000����Ϊ�μ��ɶԵ���������
���һ�и�����Mλ���˵�ID���Կո�ָ�����Ŀ��֤�����ػ��Ų���������

�����ʽ��

���ȵ�һ������䵥���˵������������ڶ��а�ID����˳���г��䵥�Ŀ��ˡ�ID����1���ո�ָ����е���β�����ж���ո�

����������
3
11111 22222
33333 44444
55555 66666
7
55555 44444 10000 88888 22222 11111 23333
���������
5
10000 23333 44444 55555 88888
*/
bool Tel(string str,string s[][2],string s2[],int M,int N);//�ж��Ƿ�����֪�ĵ�����ʿ֮��
bool Tel2(string str,string s2[],int M);//�ж���һ���Ƿ�Ҳ��party���� 
int main(int argc, char** argv) {
	int N;cin>>N;//��֪�ķǵ�����ʿ 
	string couple[N][2];
	for(int i=0;i<N;i++)
	{
		cin>>couple[i][0]>>couple[i][1];
	}
	int M;cin>>M;//�μ�party������
    string party[M];
    for(int i=0;i<M;i++)
    {
    	cin>>party[i];
	}
	vector <string> ivec;//��ŵ�����ʿ
	int num=M; 
	for(int i=0;i<M;i++)
	{
		if(Tel(party[i],couple,party,M,N)==true)
		{
			num=num-1;
		}
		else if(Tel(party[i],couple,party,M,N)==false)
		{
			ivec.push_back(party[i]);
		}
	}
	cout<<num<<endl;
	sort(ivec.begin(),ivec.end());
	for(int i=0;i<ivec.size();i++)
	{
		if(i==0)
		{
			cout<<ivec[i];
		}
		else if(i!=0)
		{
			cout<<" "<<ivec[i];
		}
		
	}
	return 0;
}
//
bool Tel(string str,string s[][2],string s2[],int M,int N)//�ж��Ƿ�����֪�ĵ�����ʿ֮��
{
	for(int i=0;i<N;i++)
	{
		if(str==s[i][0]||str==s[i][1])
		{
			if(str==s[i][0])
			{
				if(Tel2(s[i][1],s2,M)==true)
				return true;
			}
			else if(str==s[i][1])
			{
				if(Tel2(s[i][0],s2,M)==true)
				return true;
			}
		}
	}
	return false;
}
bool Tel2(string str,string s2[],int M)//�ж���һ���Ƿ�Ҳ��party���� 
{
	for(int i=0;i<M;i++)
	{
		if(str==s2[i])
		return true;
	}
	return false;
 } 

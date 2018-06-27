#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm> 
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
“单身狗”是中文对于单身人士的一种爱称。本题请你从上万人的大型派对中找出落单的客人，以便给予特殊关爱。

输入格式：

输入第一行给出一个正整数N（<=50000），是已知夫妻/伴侣的对数；随后N行，每行给出一对夫妻/伴侣——为方便起见，
每人对应一个ID号，为5位数字（从00000到99999），ID间以空格分隔；之后给出一个正整数M（<=10000），为参加派对的总人数；
随后一行给出这M位客人的ID，以空格分隔。题目保证无人重婚或脚踩两条船。

输出格式：

首先第一行输出落单客人的总人数；随后第二行按ID递增顺序列出落单的客人。ID间用1个空格分隔，行的首尾不得有多余空格。

输入样例：
3
11111 22222
33333 44444
55555 66666
7
55555 44444 10000 88888 22222 11111 23333
输出样例：
5
10000 23333 44444 55555 88888
*/
bool Tel(string str,string s[][2],string s2[],int M,int N);//判断是否在已知的单身人士之中
bool Tel2(string str,string s2[],int M);//判断另一半是否也在party里面 
int main(int argc, char** argv) {
	int N;cin>>N;//已知的非单身人士 
	string couple[N][2];
	for(int i=0;i<N;i++)
	{
		cin>>couple[i][0]>>couple[i][1];
	}
	int M;cin>>M;//参加party的人数
    string party[M];
    for(int i=0;i<M;i++)
    {
    	cin>>party[i];
	}
	vector <string> ivec;//存放单身人士
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
bool Tel(string str,string s[][2],string s2[],int M,int N)//判断是否在已知的单身人士之中
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
bool Tel2(string str,string s2[],int M)//判断另一半是否也在party里面 
{
	for(int i=0;i<M;i++)
	{
		if(str==s2[i])
		return true;
	}
	return false;
 } 

#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
一个分数一般写成两个整数相除的形式：N/M，其中M不为0。最简分数是指分子和分母没有公约数的分数表示形式。

现给定两个不相等的正分数 N1/M1 和 N2/M2，要求你按从小到大的顺序列出它们之间分母为K的最简分数。

输入格式：

输入在一行中按N/M的格式给出两个正分数，随后是一个正整数分母K，其间以空格分隔。题目保证给出的所有整数都不超过1000。

输出格式：

在一行中按N/M的格式列出两个给定分数之间分母为K的所有最简分数，按从小到大的顺序，其间以1个空格分隔。
行首尾不得有多余空格。题目保证至少有1个输出。

输入样例：
7/18 13/20 12
输出样例：
5/12 7/12
*/
void getint(string str1,string str2,int *n1,int *n2,int *m1,int *m2);//将string中的分子分母提取出来 
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
	for(int i=1;i<m;i++)//从2开始遍历寻找满足的数 
	{
		if((i*1.0)/m>(n1*1.0)/m1&&(i*1.0)/m<(n2*1.0)/m2) //大小是否满足 
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
void getint(string str1,string str2,int *n1,int *n2,int *m1,int *m2)//将string中的分子分母提取出来  
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

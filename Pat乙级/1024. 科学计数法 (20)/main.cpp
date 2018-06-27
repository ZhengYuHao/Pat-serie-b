#include <iostream>
#include <string.h>
#include <math.h> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*科学计数法是科学家用来表示很大或很小的数字的一种方便的方法，
其满足正则表达式[+-][1-9]"."[0-9]+E[+-][0-9]+，即数字的整数部分只有1位，
小数部分至少有1位，该数字及其指数部分的正负号即使对正数也必定明确给出。

现以科学计数法的格式给出实数A，请编写程序按普通数字表示法输出A，并保证所有有效位都被保留。

输入格式：

每个输入包含1个测试用例，即一个以科学计数法表示的实数A。该数字的存储长度不超过9999字节，
且其指数的绝对值不超过9999。

输出格式：

对每个测试用例，在一行中按普通数字表示法输出A，并保证所有有效位都被保留，包括末尾的0。

输入样例1：
+1.23400E-03
输出样例1：
0.00123400
输入样例2：
-1.2E+10
输出样例2： 
-12000000000*/
static int n=0;//用于保存第二个E符号的下标 
char letter1(string str);//获取第一个+-符号
char letter2(string str);//获取第二个+-符号 
char* Get(string str);//将输入数据的标准double类型变成char数组 
int getrear(string str);//获得E的几次方 
int main(int argc, char** argv) {
	
	string str;
	cin>>str;
	char c1=letter1(str);
	char c2=letter2(str);
	int e=getrear(str);
	string h=Get(str);//数字字符串 
	int num=n-3;//.符号到E符号之间的数字个数
	if(c2=='-') 
	{
		if(c1=='-')
		{
			cout<<'-';
			for(int i=0;i<e;i++)
			{
				if(i==0)
				cout<<'0'<<'.';
				else if(i!=0)
				cout<<'0';
			}
			for(int i=0;i<h.length();i++)
			{
				if(h[i]!='.')
				cout<<h[i];
			}
			cout<<endl;
		}
		else if(c1=='+')
		{
			for(int i=0;i<e;i++)
			{
				if(i==0)
				cout<<'0'<<'.';
				else if(i!=0)
				cout<<'0';
			}
			for(int i=0;i<h.length();i++)
			{
				if(h[i]!='.')
				cout<<h[i];
			}
			cout<<endl;
		}
		
	}
	else if(c2=='+')
	{
		if(c1=='-')
		{
			cout<<'-';
			if(e<num)
			{
				for(int i=0;i<h.length();i++)
			    {
				   if(h[i]!='.')
				   {
				   	if(i==e+1)
				   	cout<<h[i]<<'.';
				   	cout<<h[i];
				   }
				   
			    }
			 } 
			 else if(e>num)
			 {
			 	for(int i=0;i<h.length();i++)
			    {
				   if(h[i]!='.')
				   cout<<h[i];
			    }
			    for(int i=0;i<e-num;i++)
			    {
			    	cout<<'0';
				}
				cout<<endl;
			 }
			 else if(e==num)
			 {
			 	for(int i=0;i<h.length();i++)
			   {
				   if(h[i]!='.')
				   cout<<h[i];
		     	}
			     cout<<endl;
			 }
			
		}
		else if(c1=='+')
		{
			if(e<num)
			{
				for(int i=0;i<h.length();i++)
			    {
				   if(h[i]!='.')
				   {
				   	if(i==e+1)
				   	cout<<h[i]<<'.';
				   	cout<<h[i];
				   }
				   
			    }
			 } 
			 else if(e>num)
			 {
			 	for(int i=0;i<h.length();i++)
			    {
				   if(h[i]!='.')
				   cout<<h[i];
			    }
			    for(int i=0;i<e-num;i++)
			    {
			    	cout<<'0';
				}
				cout<<endl;
			 }
			 else if(e==num)
			 {
			 	for(int i=0;i<h.length();i++)
			   {
				   if(h[i]!='.')
				   cout<<h[i];
		     	}
			     cout<<endl;
			 }
		}
	}
	return 0;
}
char letter1(string str)//获取第一个+-符号
{
	return str[0]; 

} 
char letter2(string str)//获取第二个+-符号 
{
	int i=0;
	while(str[i]!='E')
	{
		if(str[i+1]=='E')
		{
			n=i+1;
			return str[i+2];
		}
		i++;
	}
}
char*  Get(string str)////将输入数据的标准double类型变成char数组 
{
	char *p=new char [10000000];
	int i;
	for(i=1;i<n;i++)
	{
		p[i-1]=str[i];
	}
	p[i]=NULL;
	return p;	 
 } 
 int getrear(string str)//获得E的几次方 
 {
 	int L=1;
 	int B=0;
	for(int i=str.length()-1;i>n+1;i--)
	{
		B=B+(str[i]-'0')*L;
		L=L*10;	
	}
	return B;
 } 

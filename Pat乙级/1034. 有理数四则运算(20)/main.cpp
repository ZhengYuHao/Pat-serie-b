#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
题要求编写程序，计算2个有理数的和、差、积、商。

输入格式：

输入在一行中按照“a1/b1 a2/b2”的格式给出两个分数形式的有理数，其中分子和分母全是整型范围内的整数，
负号只可能出现在分子前，分母不为0。

输出格式：

分别在4行中按照“有理数1 运算符 有理数2 = 结果”的格式顺序输出2个有理数的和、差、积、商。
注意输出的每个有理数必须是该有理数的最简形式“k a/b”，其中k是整数部分，a/b是最简分数部分；
若为负数，则须加括号；若除法分母为0，则输出“Inf”。题目保证正确的输出中没有超过整型范围的整数。

输入样例1：
2/3 -4/2
输出样例1：
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
输入样例2：
5/3 0/6
输出样例2：
1 2/3 + 0 = 1 2/3
1 2/3 - 0 = 1 2/3
1 2/3 * 0 = 0
1 2/3 / 0 = Inf
*/
int gcd(int x,int y);//求两个数的最大公约数 
void Get(string A,int *a1,int *a2);//用于得到输入字符串的整数部分
void add(int a1,int a2,int b1,int b2,int *c1,int *c2);//得到加法的结果 
void del(int a1,int a2,int b1,int b2,int *c1,int *c2);//得到减法的结果
void mutiplate(int a1,int a2,int b1,int b2,int *c1,int *c2);//得到乘法的结果
void division(int a1,int a2,int b1,int b2,int *c1,int *c2);//得到除法的结果
int display(int x,int y);//以标准形式打印形参 
int main(int argc, char** argv) {
	string A,B;
	cin>>A>>B;
	int a1,a2,b1,b2,c1,c2;
	Get(A,&a1,&a2);
	Get(B,&b1,&b2);
	add(a1,a2,b1,b2,&c1,&c2);
	display(a1,a2);cout<<' '<<'+'<<' ';display(b1,b2);cout<<" "<<'='<<" ";display(c1,c2);cout<<endl;
	del(a1,a2,b1,b2,&c1,&c2);
	display(a1,a2);cout<<' '<<'-'<<' ';display(b1,b2);cout<<" "<<'='<<" ";display(c1,c2);cout<<endl;
	mutiplate(a1,a2,b1,b2,&c1,&c2);
	display(a1,a2);cout<<' '<<'*'<<' ';display(b1,b2);cout<<" "<<'='<<" ";display(c1,c2);cout<<endl;
	division(a1,a2,b1,b2,&c1,&c2);
	display(a1,a2);cout<<' '<<'/'<<' ';display(b1,b2);cout<<" "<<'='<<" ";display(c1,c2);cout<<endl;
	return 0;
}
//===========
void Get(string A,int *a1,int *a2)//用于得到输入字符串的整数部分
{
	int n=A.length();
	int x=0;
	int i;
	if(A[0]=='-')
	{
	     i=1;
		while(i!=n)
		{
			if(A[i]=='/')
			{
				*a1=-1*x;
				x=0;
				goto loop;
			}
			x=(x*10)+(A[i]-'0');
			loop:;
			i++;
		}
		*a2=x;
	}
	     else if(A[0]!='-')
      	{
	         i=0;
	    	while(i!=n)
		    {
			  if(A[i]=='/')
			 {
				*a1=x;
				x=0;
				goto loop2;
			 }
			 x=(x*10)+(A[i]-'0');
			 loop2:;
			 i++;
		   }
		   *a2=x;
	  }
} 
void add(int a1,int a2,int b1,int b2,int *c1,int *c2)//得到加法的结果 
{
	a1=a1*b2;
	b1=b1*a2;
	*c2=a2*b2;
	*c1=a1+b1; 
} 
void del(int a1,int a2,int b1,int b2,int *c1,int *c2)//得到减法的结果
{
	a1=a1*b2;
	b1=b1*a2;
	*c2=a2*b2;
	*c1=a1-b1;
}
void mutiplate(int a1,int a2,int b1,int b2,int *c1,int *c2)//得到乘法的结果
{
	*c2=a2*b2;
	*c1=a1*b1;
}
void division(int a1,int a2,int b1,int b2,int *c1,int *c2)//得到除法的结果
{
	*c2=a2*b1;
	*c1=a1*b2;
}
int display(int x,int y)//以标准形式打印形参
{
	if(x==0)
	{	
	cout<<0;
	return 0;
	}
	else if(y==0)
	{
	cout<<"Inf";
	return 0;
	}
	int gcdnum; 
	int num1;
	if((x>0&&y<0)||(x<0&&y>0))
	{
	if(x<0)
	{
		x=-x;
	}
	if(y<0)
	{
		y=-y;
	}
	if(x>y)
	{
		if(x%y==0)
		{
		cout<<"("<<-1*x/y<<")";	
		}
		else if (x%y!=0)
		{
		num1=x/y;
		x=x%y;
		gcdnum=gcd(x,y);
		x=x/gcdnum;
		y=y/gcdnum;	
		cout<<"("<<-1*num1<<' '<<x<<'/'<<y<<")";
		}
	}
	  else if(x<=y)
	  {
	  	gcdnum=gcd(x,y);
		x=x/gcdnum;
		y=y/gcdnum;	
		cout<<"("<<-1*x<<'/'<<y<<")";
	  }
	  }
	  else 
	{	
	if(x>y)
	{
		if(x%y==0)
		{
		cout<<x/y;	
		}
		else if (x%y!=0)
		{
		num1=x/y;
		x=x%y;
		gcdnum=gcd(x,y);
		x=x/gcdnum;
		y=y/gcdnum;	
		cout<<num1<<' '<<x<<'/'<<y;
     	}
	}
	  else if(x<=y)
	  {
	  	gcdnum=gcd(x,y);
		x=x/gcdnum;
		y=y/gcdnum;	
		cout<<x<<'/'<<y;
	  }
	  }
	return 0;
}
int gcd(int x,int y)//求两个数的最大公约数 
{
	if(x<0)
	{
		x=-x;
	}
	if(y<0)
	{
		y=-y;
	}
    int min=(x<y)?x:y;
    for (;min>0;min--)
    {
    	if(x%min==0&&y%min==0)
    	return min;
	}		
} 

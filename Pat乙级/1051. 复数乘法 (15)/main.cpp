#include <iostream>
#include <math.h>
using namespace std;  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
复数可以写成(A + Bi)的常规形式，其中A是实部，B是虚部，i是虚数单位，满足i2 = -1；
也可以写成极坐标下的指数形式(R*e(Pi))，其中R是复数模，P是辐角，i是虚数单位，
其等价于三角形式 R(cos(P) + isin(P))。

现给定两个复数的R和P，要求输出两数乘积的常规形式。

输入格式：

输入在一行中依次给出两个复数的R1, P1, R2, P2，数字间以空格分隔。

输出格式：

在一行中按照“A+Bi”的格式输出两数乘积的常规形式，实部和虚部均保留2位小数。注意：如果B是负数，
则应该写成“A-|B|i”的形式。

输入样例：
2.3 3.5 5.2 0.4
输出样例：
-8.68-8.23i
*/
double fun(double n);//用于四舍五入保存两位小数 
int main(int argc, char** argv) {
	double r1,p1,r2,p2;
	cin>>r1>>p1>>r2>>p2;
	double A,B;//用于保存标准形式的实部和虚部
	A=r1*r2*cos(p1+p2);
	B=r1*r2*sin(p1+p2);
	A=fun(A);
	B=fun(B);
	if(B<0)
	{
		printf("%.2f%.2fi",A,B); 
	} 
	else {
		printf("%.2f-%.2fi",A,B);
	}
	return 0;
}
double fun(double n)//用于四舍五入保存两位小数
{
	int i=0;	
	n=n*1000;
	n=(int)n;
	int j=n;
	if(j<0)
	{
		j=j*-1;
	  
	   if(j%10>=5)
	  {
		i=j+1;
	  }
	    else if(j%10<5)
	        {
	  	       i=j;
	        }
	double  hh=(double)i;
	return -1*(hh/1000);
	}
	else {
		 if(j%10>=5)
	  {
		i=j+1;
	  }
	    else if(j%10<5)
	        {
	  	       i=j;
	        }
	double  hh=(double)i;cout<<hh<<endl;
	return (hh/1000);
	}
} 

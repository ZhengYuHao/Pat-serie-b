#include <iostream>
using namespace std;
/*
给定一个正数数列，我们可以从中截取任意的连续的几个数，称为片段。例如，给定数列{0.1, 0.2, 0.3, 0.4}，
我们有(0.1) (0.1, 0.2) (0.1, 0.2, 0.3) (0.1, 0.2, 0.3, 0.4) (0.2) (0.2, 0.3) (0.2, 0.3, 0.4) (0.3) 
(0.3, 0.4) (0.4) 这10个片段。

给定正整数数列，求出全部片段包含的所有的数之和。如本例中10个片段总和是
0.1 + 0.3 + 0.6 + 1.0 + 0.2 + 0.5 + 0.9 + 0.3 + 0.7 + 0.4 = 5.0。

输入格式：

输入第一行给出一个不超过105的正整数N，表示数列中数的个数，第二行给出N个不超过1.0的正数，是数列中的数，
其间以空格分隔。

输出格式：

在一行中输出该序列所有片段包含的数之和，精确到小数点后2位。

输入样例：
4
0.1 0.2 0.3 0.4 
输出样例：
5.00

*/
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	double a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int num=n;
	int yum=1;
	int x,y;
	double counter=0;
	for(x=0,y=n-1;x<=y;x++,y--)
	{  
	    if(x==y)
		{
			if(n==1)
			{
			counter=a[0];
			break;
			}
			counter=counter+a[y]*(y+1)*yum;
			break;
		 } 
		 else if(x<y)
	    { 
	    counter=counter+a[y]*(y+1)*yum;
		counter=counter+a[x]*(x+1)*num;
		num--;
		yum++;
		}
	}
	printf("%0.2f",counter);
	return 0;
}

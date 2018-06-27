#include <iostream>
#include <string>
#include <cmath>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。
例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。

现给定A、DA、B、DB，请编写程序计算PA + PB。

输入格式：

输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。

输出格式：

在一行中输出PA + PB的值。

输入样例1：
3862767 6 13530293 3
输出样例1：
399
输入样例2：
3862767 1 13530293 8
输出样例2：
0*/
int main(int argc, char** argv) {
	string A,B;
	char pa,pb;
	cin>>A>>pa>>B>>pb;
	int i=0,j=0;
	int num=0;
	while(A[i]!=NULL)
	{
		if(A[i]==pa)
		num++;
		i++;
	}
	int a=0;
	for(i=0;i<num;i++)
	{
		a=(a*10)+(pa-'0');
	}
	num=0;
	i=0;
	while(B[i]!=NULL)
	{
		if(B[i]==pb)
		num++;
		i++;
	}
	int b=0;
	for(i=0;i<num;i++)
	{
		b=(b*10)+(pb-'0');
	}
	cout<<a+b<<endl;
	return 0;
}

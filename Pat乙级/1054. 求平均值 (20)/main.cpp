#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
本题的基本要求非常简单：给定N个实数，计算它们的平均值。但复杂的是有些输入数据可能是非法的。
一个“合法”的输入是[-1000，1000]区间内的实数，并且最多精确到小数点后2位。当你计算平均值的时候，
不能把那些非法的数据算在内。

输入格式：

输入第一行给出正整数N（<=100）。随后一行给出N个实数，数字间以一个空格分隔。

输出格式：

对每个非法输入，在一行中输出“ERROR: X is not a legal number”，其中X是输入。最后在一行中输出结果：
“The average of K numbers is Y”，其中K是合法输入的个数，Y是它们的平均值，精确到小数点后2位。
如果平均值无法计算，则用“Undefined”替换Y。如果K为1，则输出“The average of 1 number is Y”。

输入样例1：
7
5 -3.2 aaa 9999 2.3.4 7.123 2.35
输出样例1：
ERROR: aaa is not a legal number
ERROR: 9999 is not a legal number
ERROR: 2.3.4 is not a legal number
ERROR: 7.123 is not a legal number
The average of 3 numbers is 1.38
输入样例2：
2
aaa -9999
输出样例2：
ERROR: aaa is not a legal number
ERROR: -9999 is not a legal number
The average of 0 numbers is Undefined
*/
bool Tel(char *a);//判断是否是合法的输入 
int main(int argc, char** argv) {
	int N;cin>>N;
	char a[N][10];//用于保存初始数据
	double sum=0;//用于保存总和 
	int counter=0;//用于保存满足的数 
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
		if(Tel(a[i])==true)
		{
			sum=sum+atof(a[i]);
			counter++; 
		}
		else if(Tel(a[i])==false)
		{
			printf("ERROR: %s is not a legal number\n",a[i]);
		}		
	}	 
	if(counter==1)
        printf("The average of 1 number is %.2lf",sum);
    else if(counter==0)
        printf("The average of 0 numbers is Undefined");
    else
        printf("The average of %d numbers is %.2lf",counter,sum/counter);	
	return 0;
}
//======
bool Tel(char *a)//判断是否是合法的输入 
{
	int zz=0;
	for(int i=0;i<strlen(a);i++)
	{
		if((*(a+i)<='0'||*(a+i)>='9')&&*(a+i)!='-'&&*(a+i)!='.')//出现-和.之外的符号时 
		{
			return false;
		}
		if(*(a+i)=='.')
		{
			zz++;
			if(zz>=2||(zz==1&&i==0)||(zz==1&&*(a+0)=='-'&&*(a+1)=='.')||((i+2)<strlen(a)-1))//.号超过1个，并且在首的情况 
			return false;
		}
	}
	double j=atof(a);
	if(j<-1000||j>1000)
	return false;
	return true; 
}

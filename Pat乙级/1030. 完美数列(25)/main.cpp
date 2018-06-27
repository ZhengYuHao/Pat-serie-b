#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*给定一个正整数数列，和正整数p，设这个数列中的最大值是M，最小值是m，如果M <= m * p，则称这个数列是完美数列。

现在给定参数p和一些正整数，请你从中选择尽可能多的数构成一个完美数列。

输入格式：

输入第一行给出两个正整数N和p，其中N（<= 105）是输入的正整数的个数，p（<= 109）是给定的参数。
第二行给出N个正整数，每个数不超过109。

输出格式：

在一行中输出最多可以选择多少个数可以用它们组成一个完美数列。

输入样例：
10 8
2 3 20 4 5 1 6 7 8 9
输出样例：
8*/
void sort(long int a[],int n);//对原始数据进行由大到小的排序 
int main(int argc, char** argv) {
	int n,p;
	cin>>n>>p;
	long int a[n];
	for(int i=0;i<n;i++)//初始化原始数据 
	{
		cin>>a[i];
	}
	sort(a,n);
	long int counter=0;
	long int b[10000]; 
	for(int i=0;i<n;i++)//最小数从a[0]开始从前到后遍历，最大数从a[n-1]开始从后向前遍历 
	{
		for(int j=n-1;j>=i;j--)
		{
			if(a[i]*p>=a[j])
			{
				b[counter]=j-i+1;
				counter++;
			}
		}
	}
	sort(b,counter);
	cout<<b[counter-1]<<endl;
	return 0;
}
//=========
void sort(long int a[],int n)//对原始数据进行由大到小的排序  
{
	long trem=0;
	for(int i=0;i<n-1;i++)//冒泡排序 
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				trem=a[j];
				a[j]=a[j+1];
				a[j+1]=trem;
			 } 
		}
	}
}

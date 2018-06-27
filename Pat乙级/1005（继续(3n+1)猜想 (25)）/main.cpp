#include <iostream>
using namespace std;
/*卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。
当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。
例如对n=3进行验证的时候，我们需要计算3、5、8、4、2、1，
则当我们对n=5、8、4、2进行验证的时候，就可以直接判定卡拉兹猜想的真伪，
而不需要重复计算，因为这4个数已经在验证3的时候遇到过了，
我们称5、8、4、2是被3“覆盖”的数。我们称一个数列中的某个数n为“关键数”，
如果n不能被数列中的其他数字所覆盖。

现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，
就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，
并按从大到小的顺序输出它们。

输入格式：每个测试输入包含1个测试用例，第1行给出一个正整数K(<100)，
第2行给出K个互不相同的待验证的正整数n(1<n<=100)的值，数字间用空格隔开。

输出格式：每个测试用例的输出占一行，按从大到小的顺序输出关键数字。
数字间用1个空格隔开，但一行中最后一个数字后没有空格。

输入样例：
6
3 5 6 7 8 11
输出样例：
7 6*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;cin>>n;
	int a[n];
	int i,j;
	for(i=0;i<n;i++)//初始化列表 
	{
		cin>>a[i];
	}
	int num[n][100];//用于储存列表中每个数的序列
	for(i=0;i<n;i++)//求出列表中每个数的序列 
	{
		j=0;
		num[i][j]=a[i];	
		while(num[i][j]!=1) 
		{
			if ((num[i][j]+ 1) % 2 == 0)//判断为奇数
		{
			num[i][j+1]= (3 * num[i][j] + 1) / 2;
			j++;
			
		}
		else if((num[i][j] + 1) % 2 != 0)//判断为偶数
		{
		    num[i][j+1]=num[i][j] / 2;
			j++;
		}	 
		}
	}
	//=====阶段性
	int zz=0;
	int z[n];
	int ss=0; 
		for(i=0;i<n;i++)//用于找出覆盖数 
		{
			
			for(j=0;j<n;j++)
			{
				zz=0;
				if(a[i]!=num[j][zz])
				{
					while(num[j][zz]>1)
					{
						if(a[i]==num[j][zz])//找到了覆盖数 
						{
							
							z[ss]=a[i];
							ss++;
							goto loop;
						}
						zz++;
					}
				}
			}
			loop:;
		}
		//阶段性 
	/*for(i=0;i<ss;i++)
	{
		cout<<z[i]<<" ";
	}*/
	int dd=n-ss;
	int g[dd];
	int sb;
	int k=0;
	for(i=0;i<n;i++)
	{
		sb=0;
		for(j=0;j<ss;j++)
		{
			if(a[i]!=z[j])
			sb++;
		}
		if(sb==ss)
		{
			g[k]=a[i];
			k++;
		 } 
	}
	//阶段性(进行最后的排序'冒泡')
	int laji;
	for(i=0;i<dd-1;i++)
	{
		for(j=0;j<dd-i-1;j++)
		{
			if(g[j]<g[j+1])
			{
				laji=g[j];
				g[j]=g[j+1];
				g[j+1]=laji;
			}
		 } 
	 } 
	 for(i=0;i<dd;i++)
	 {
	 	if(i==dd-1)
	 	cout<<g[i];
	 	else if(i!=dd-1)
	 	cout<<g[i]<<" ";
	 }
	
	return 0;
}

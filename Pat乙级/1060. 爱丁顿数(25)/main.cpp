#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
英国天文学家爱丁顿很喜欢骑车。据说他为了炫耀自己的骑车功力，还定义了一个“爱丁顿数”E，
即满足有E天骑车超过E英里的最大整数E。据说爱丁顿自己的E等于87。

现给定某人N天的骑车距离，请你算出对应的爱丁顿数E（<=N）。

输入格式：

输入第一行给出一个正整数N（<=105），即连续骑车的天数；第二行给出N个非负整数，代表每天的骑车距离。

输出格式：

在一行中给出N天的爱丁顿数。

输入样例：
10
6 7 6 9 3 10 8 2 7 8
输出样例：
6
*/
int Tel(int a[],int term,int N);//判断数组中大于term的天数 
int main(int argc, char** argv) {
	int N;cin>>N;int a[N];
	for(int i=0;i<N;i++)//初始化每天的里程 
	{
		cin>>a[i];
	}
	for(int i=0;i<N;i++)
	{
		if(a[i]==Tel(a,a[i],N))
		{
			cout<<a[i];
			break;
		}	
	}
	return 0;
}
int Tel(int a[],int term,int N)//判断数组中大于term的天数
{
	int counter=0;//统计天数 
	for(int i=0;i<N;i++)
	{
		if(a[i]>term)
		counter++;
	}
	return counter;
} 

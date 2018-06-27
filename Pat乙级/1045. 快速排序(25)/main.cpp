#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*著名的快速排序算法里有一个经典的划分过程：我们通常采用某种方法取一个元素作为主元，通过交换，
把比主元小的元素放到它的左边，比主元大的元素放到它的右边。 给定划分后的N个互不相同的正整数的排列，
请问有多少个元素可能是划分前选取的主元？

例如给定N = 5, 排列是1、3、2、4、5。则：

1的左边没有元素，右边的元素都比它大，所以它可能是主元；
尽管3的左边元素都比它小，但是它右边的2它小，所以它不能是主元；
尽管2的右边元素都比它大，但其左边的3比它大，所以它不能是主元；
类似原因，4和5都可能是主元。
因此，有3个元素可能是主元。

输入格式：

输入在第1行中给出一个正整数N（<= 105）； 第2行是空格分隔的N个不同的正整数，每个数不超过109。

输出格式：

在第1行中输出有可能是主元的元素个数；在第2行中按递增顺序输出这些元素，其间以1个空格分隔，行末不得有多余空格。

输入样例：
5
1 3 2 4 5
输出样例：
3
1 4 5
*/
int min(int a[],int now,int n);//求最小值
int max(int a[],int now);//求最大值 
int main(int argc, char** argv) {
	int counter=0;//记录一共几个满足主员
	
	int n;cin>>n;//一共几个数
	int a[n];
	int c[n];
	for(int i=0;i<n;i++)//初始化 
	{
		cin>>a[i];
	 } 
	 for(int i=0;i<n;i++)//判断是否为主员 
	 {
	 	if(i==0)//第一个元素 
	 	{
	 		if(a[i]<min(a,i,n))
	 		{
	 			c[counter]=a[i];
	 			counter++;
			 }
		 }
		 else if(i==n-1)//最后一个元素 
		 {
		 	if(a[i]>max(a,i))
	 		{
	 			c[counter]=a[i];
	 			counter++;
			 }
		  } 
		  else //其他元素 
		  {
		  		if(a[i]>max(a,i)&&a[i]<min(a,i,n))
		  		{
		  			c[counter]=a[i];
	 			    counter++;
		  			
				  }
		  }
	  } 
	  cout<<counter<<endl;
	  for(int i=0;i<counter;i++)
	  {
	  	if(i==counter-1)
	  	{
	  		cout<<c[i];
			  break; 
		  }
	  	cout<<c[i]<<" ";
	  }
	return 0;
}
int min(int a[],int now,int n)//求最小值
{
	int min=a[now+1];
	for(int i=now+1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		
	}
    return min;
} 
int max(int a[],int now)//求最大值 
{
	int max=a[0];
	for(int i=0;i<now;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;

}

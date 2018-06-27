#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
拍集体照时队形很重要，这里对给定的N个人K排的队形设计排队规则如下：

每排人数为N/K（向下取整），多出来的人全部站在最后一排；
后排所有人的个子都不比前排任何人矮；
每排中最高者站中间（中间位置为m/2+1，其中m为该排人数，除法向下取整）；
每排其他人以中间人为轴，按身高非增序，先右后左交替入队站在中间人的两侧
（例如5人身高为190、188、186、175、170，则队形为175、188、190、186、170。
这里假设你面对拍照者，所以你的左边是中间人的右边）；
若多人身高相同，则按名字的字典序升序排列。这里保证无重名。
现给定一组拍照人，请编写程序输出他们的队形。

输入格式：

每个输入包含1个测试用例。每个测试用例第1行给出两个正整数N（<=10000，总人数）和K（<=10，总排数）。
随后N行，每行给出一个人的名字（不包含空格、长度不超过8个英文字母）和身高（[30, 300]区间内的整数）。

输出格式：

输出拍照的队形。即K排人名，其间以空格分隔，行末不得有多余空格。注意：假设你面对拍照者，
后排的人输出在上方，前排输出在下方。

输入样例：
10 3
Tom 188
Mike 170
Eva 168
Tim 160
Joe 190
Ann 168
Bob 175
Nick 186
Amy 160
John 159
输出样例：
Bob Tom Joe Nick
Ann Mike Eva
Tim Amy John
*/
void sort(int a[],string b[],int n);//对集体的身高进行排序 
int main(int argc, char** argv) {
	int N,K;
	cin>>N>>K;//初始化
	string name[N];
	int tall[N];//用于保存 
	for(int i=0;i<N;i++)
	{
		cin>>name[i]>>tall[i];
	 }
	 sort(tall,name,N);//进行排序
	 int people=N/K;//没排的人数
	 int last=people+(N%K); //最后一排得人数 
	 string sum[last];
	 int mid;
	 int counter=0;//用于遍历数组下标 
	 int st=0;	
	for(int j=0;j<K;j++)
	{
		st=0;
	 	if(j==0)//最上面一排 
	 	{
	 		if(last%2==0)
			 {
			 mid=(last/2);
			 sum[mid]=name[counter];
			 counter++;
			 st++;
			 for(int i=1;i<=mid;i++)
			 {
			 	sum[mid-i]=name[counter];
			 	counter++;
			 	 st++;
			 	if(mid-i==0)
			 	break;
			 	sum[mid+i]=name[counter];
			 	counter++;
			 	 st++;
			 }	
			  } 
			  else {
			  	mid=last/2;
			 sum[mid]=name[counter];
			 counter++;
			  st++;
			 for(int i=1;i<=mid;i++)
			 {
			 	sum[mid-i]=name[counter];
			 	counter++;
			 	st++;
			 	sum[mid+i]=name[counter];
			 	counter++;
			 	 st++;
			 }	
			  }	
			  
		}
		else//最后一排之外的其他排 
		{
			if(people%2==0)
			 {
			 mid=people/2;
			 sum[mid]=name[counter];
			 counter++;
			 st++;
			 for(int i=1;i<=mid;i++)
			 {
			 	sum[mid-i]=name[counter];
			 	counter++;
			 	 st++;
			 	if(mid-i==0)
			 	break;
			 	sum[mid+i]=name[counter];
			 	counter++;
			 	 st++;
			 }	
			  } 
			  else {
			  	mid=people/2;
			 sum[mid]=name[counter];
			 counter++;
			  st++;
			 for(int i=1;i<=mid;i++)
			 {
			 	sum[mid-i]=name[counter];
			 	counter++;
			 	st++;
			 	sum[mid+i]=name[counter];
			 	counter++;
			 	 st++;
			 }	
			  }		
		} 
		for(int i=0;i<st;i++)
		{
			if(i!=st-1)
			cout<<sum[i]<<" ";
			else
			cout<<sum[i]<<endl;
		 } 
	}
	return 0;
}
//=======
void sort(int a[],string b[],int n)//对集体的身高进行排序 (冒泡排序)
{
	string x=b[0];
	int y=a[0];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				x=b[j+1];
				y=a[j+1];
				b[j+1]=b[j];
				a[j+1]=a[j];
				b[j]=x;
				a[j]=y;
			}
			else if(a[j]==a[j+1]) 
			{
				if(b[j][0]>b[j+1][0])
				{
				x=b[j+1];
				y=a[j+1];
				b[j+1]=b[j];
				a[j+1]=a[j];
				b[j]=x;
				a[j]=y;
				}
			}
		}
	}
}

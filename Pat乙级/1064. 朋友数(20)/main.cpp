#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
如果两个整数各位数字的和是一样的，则被称为是“朋友数”，而那个公共的和就是它们的“朋友证号”。
例如123和51就是朋友数，因为1+2+3 = 5+1 = 6，而6就是它们的朋友证号。给定一些整数，
要求你统计一下它们中有多少个不同的朋友证号。注意：我们默认一个整数自己是自己的朋友。

输入格式：

输入第一行给出正整数N。随后一行给出N个正整数，数字间以空格分隔。题目保证所有数字小于104。

输出格式：

首先第一行输出给定数字中不同的朋友证号的个数；随后一行按递增顺序输出这些朋友证号，数字间隔一个空格，且行末不得有多余空格。

输入样例：
8
123 899 51 998 27 33 36 12
123 899 51 998 27 33 36 12
输出样例：
4
3 6 9 26
*/
int GetNum(int n);//返回各位之和 
int main(int argc, char** argv) {
	int N;cin>>N;
	int a[N][2];
	vector <int> ivec;
	int num=0;
	for(int i=0;i<N;i++)
	{
		cin>>a[i][0];
		a[i][1]=9; 
		if(a[i][0]<0)//如果为负数 
		{
			a[i][0]=-a[i][0];
		}
	}
	for(int i=0;i<N;i++)
	{
	  num=0;
	  if(a[i][1]==9)//确保不重复计算
	  {	
	     for(int j=i;j<N;j++)
		   {
		       //cout<<GetNum(a[i][0])<<" "<<GetNum(a[j][0])<<endl;
				if(GetNum(a[i][0])==GetNum(a[j][0]))
				{	
					num++;
					a[j][1]=1; 
				 } 
			}
	}
		if(num!=0)
		ivec.push_back(GetNum(a[i][0]));	
	}
	cout<<ivec.size()<<endl;
	int M=ivec.size();
	sort(ivec.begin(),ivec.end());
	for (vector<int>::size_type   ix = 0; ix != ivec.size(); ++ix)
	{
		if(ix==0)
		cout<<ivec[ix]; 
		else if(ix!=0)
		{
			cout<<" "<<ivec[ix];
		}
	}
	
	return 0;
}
int GetNum(int n)//返回各位之和
{
	int a1,a2,a3,a4;//个十百千位 
	a1=n/1000;
	a2=n/100-(a1*10);
	a3=n/10-(a1*100)-(a2*10);
	a4=n-(a1*1000)-(a2*100)-(a3*10);
	//cout<<n<<" "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a1+a2+a3+a4<<endl;
	//cout<<a1+a2+a3+a4<<endl;
	return (a1+a2+a3+a4);
} 

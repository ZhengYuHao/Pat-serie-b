#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int n;cin>>n;
	int a[n];
	double b[5]={0,0,0,0,0};
	int i,j;//用于遍历 
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	for(i=0;i<n;i++)//分类1 
	{
		if(a[i]%2==0&&a[i]%5==0)//判断偶数 
		{
			b[0]=b[0]+a[i];
		}
	}
	int jj=0;
	for(i=0;i<n;i++)//分类2
	{
		if(a[i]%5==1) 
		{
			if(jj==0)
		{
			b[1]=b[1]+a[i];
			jj++;
		}
		else if(jj!=0)
		{
			b[1]=b[1]-a[i];
			jj--;
		}
		}		
	}
	for(i=0;i<n;i++)//分类3 
	{
		if(a[i]%5==2) 
		{
			b[2]++;
		}
	}
	int c=0;
	for(i=0;i<n;i++)//分类4 
	{
		if(a[i]%5==3) 
		{
			b[3]=b[3]+a[i];
			c++;
		}
	}
	if(c!=0)
	b[3]=b[3]/(c*1.0);
	for(i=0;i<n;i++)//分类4 
	{	
		if(a[i]%5==4) 
		{
			if(b[4]<a[i])
			b[4]=a[i];
		}
	}
	for(i=0;i<5;i++)
	{
		
		if(b[i]==0)
		{
			cout<<'N';
		}
		else
		 if(i==3)
		 {
		 printf("%.1f",b[i]);
		 }
		 else
		  cout<<b[i];
		if((i+1)!=5)
		cout<<" ";
	}
	return 0;
}

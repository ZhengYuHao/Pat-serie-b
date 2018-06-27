#include <iostream>
#include <string.h> 
using namespace std;
void StringToInt (string str,int *a,int n);//将string变成int 
int main(int argc, char** argv) {
	int n;cin>>n;//要初始化的成绩记录个数 	
	string str[n];int a[n][3];
	for(int i=0;i<n;i++)//初始化比赛信息 
	{
		cin>>str[i]>>a[i][2];
		StringToInt(str[i],&a[0][0],i);
	 } 
	 int x=a[0][0],y=a[0][2];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i][0]!=0)
			{	
			if(a[i][0]==a[j][0])
			{
				a[i][2]=a[i][2]+a[j][2];
				a[j][0]=0;
			}
			}
		}
		if(a[i][2]>y)
		{
			x=a[i][0];
			y=a[i][2];
		}
	}
	cout<<x<<" "<<y;
	return 0;
}
void StringToInt (string str,int *a,int n)
{
	int x=0;
	int lon=str.length();
	for(int i=0;i<lon;i++)
	{
		if(str[i]!='-')
		{
			x=x*10+(str[i]-'0');
		}
		else if(str[i]=='-')
		{	
			*((a+n*3)+0)=x;
			x=0;
		}
	 }
	 *((a+n*3)+1)=x;	 
}

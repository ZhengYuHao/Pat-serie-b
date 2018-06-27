#include <iostream>
#include <string.h>
using namespace std; 
static int j;//用于计算还剩多少个符号没有使用 
int GetNum(int n);//得到图形最顶层多少个图形 
int main(int argc, char** argv) {
	int num;
	string letter;
	cin>>num>>letter;
	int x=GetNum((num-1)/2);//得到最顶88层多少个字母
	int sum=2*j+1;//一共用了多少个字母 
	int y=x;
	int u=0;
	while(y>0)
	{
		for(int i=0;i<u;i++)//用于控制每一行图形前面的空格
		{
			cout<<' ';
		 }
		 for(int i=0;i<y;i++)
		 {
		 	cout<<letter;
		 }
		 cout<<endl;
		 y=y-2;
		 u++;
	 }
	 y=3;
	 u=u-1;
	 while(y<=x)
	{
	    u--;
		for(int i=0;i<u;i++)//用于控制每一行图形前面的空格
		{
			cout<<' ';
		 }
		 for(int i=0;i<y;i++)
		 {
		 	cout<<letter;
		 }
		 cout<<endl;
		 y=y+2;
		 
	 }
	 if(j!=0)  
	 cout<<num-sum<<endl;
	return 0;
}
int GetNum(int n)//得到图形最顶层多少个图形 
{
	int i=3;
	j=0;
	while(j<=n){
		if(j+i<=n)
		j=j+i;
		else break;
		i=i+2;
	};
	if(j!=0)
	return i-2;
	else return 0;	
}

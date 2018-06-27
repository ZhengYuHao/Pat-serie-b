#include <iostream>
#include <string.h> 
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	string a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)//对n个数进行判断 
	{
	    int c=0;
		int length=a[i].length();
		for(j=0;j<length;j++)
		{
			if(a[i][j]!='P'&&a[i][j]!='A'&&a[i][j]!='T')//条件1 
		      {
			  cout<<"NO"<<endl;
			 goto L;
			  } 	
		 } 
		 if(length%2!=0)//条件2 
		 {
		 int A=(length-3)/2;
		 for(j=0;j<A;j++)
		 {
		 	if(a[i][j]==a[i][length-1-j]&&a[i][j]=='A')
		 	c++;
		 }
		 if(c==A&&a[i][(length/2)-1]=='P'&&a[i][(length/2)]=='A'&&a[i][(length/2)+1]=='T')
		 {
		 cout<<"YES"<<endl;
		 goto L;
		 }
		 else if(length==3&&a[i][(length/2)-1]=='P'&&a[i][(length/2)]=='A'&&a[i][(length/2)+1]=='T')
		 {
		 cout<<"YES"<<endl;
		 goto L;
		 } 
		 }
		 {//第三种情况
		 j=0;
		 length=a[i].length();
		 if(1==1)
		 { 
		 int c1=0;
		 int c2=0;
		   while(a[i][j]!='P')//P前面的A的个数 
		   {
		   	c1++;
		   	j++;
			}
			j=length-1;
		  while(a[i][j]!='T')//T后面的A的个数 
		  {
		  	c2++;
		  	j--;
		  }
		  		  
		 j=0;
		 int coutA=0;
		  
		 while(j<=length-1)
		 {
		 	if(a[i][j]=='A')
		 	coutA++;
		 	j++;
		 }
		 
		 if(c1!=0||c2!=0)
		 {
		 if((coutA==length-2)&&a[i][c1]=='P'&&a[i][length-1-c2]=='T'&&(c2-c1)==(c2/c1))
		 {
		 	cout<<"YES"<<endl;
		 	goto L;
		 }
		 }
		 else
		 if((coutA==length-2)&&a[i][c1]=='P'&&a[i][length-1-c2]=='T'&&length!=2)
		 {
		 	cout<<"YES"<<endl;
		 	goto L;
		 } 
		 }
		 cout<<"NO"<<endl;
		 L:continue;		  
	}	
	return 0;
}}

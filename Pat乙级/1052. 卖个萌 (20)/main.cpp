#include <iostream>
#include <memory.h>
#include <string.h>
using namespace std;
int main(int argc, char** argv) {
	char str[3][100];
	for(int i=0;i<3;i++)//可以使用的字符 
	{
	    gets(str[i]);
	}
	char let[3][10][6];
	char term[6];
	int k=0; 
	int counter[3]={0,0,0};
	for(int i=0;i<3;i++)
	{
		int f=0;
	    int j=0;	
		int un=strlen(str[i]);
		while(true)
					{
						if(str[i][j]==' ')
					j++;
					else break;
					}				
		while(j<un)
		{
			if(str[i][j]!='[')
			{
				if(str[i][j]==']')
				{	
				    strcpy(let[i][f],term);
				    memset(term,0x00,sizeof(term));
				    f++; k=0;
				    counter[i]++;
					j++;
					while(true)
					{
						if(str[i][j]==' ')
					j++;
					else break;
					}
					j--;	
				}
				else
				{
				term[k]=str[i][j];
				k++;
				}
			}
			j++;
		}	    
    }
    int N;cin>>N;
    int a[N][5];
	for(int i=0;i<N;i++)//声明表情组合矩阵 
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	 } 
	 for(int i=0;i<N;i++)
	 {
	 	if(a[i][0]>counter[0]||a[i][1]>counter[1]||a[i][2]>counter[2]||a[i][3]>counter[1]||a[i][4]>counter[0]||a[i][0]<=0||a[i][1]<=0||a[i][2]<=0||a[i][3]<=0||a[i][4]<=0)//越界不满足的踢出 
	 	{
	 		cout<<"Are you kidding me? @\\/@"<<endl;
		 }
		 else if(a[i][0]<=counter[0]&&a[i][1]<=counter[1]&&a[i][2]<=counter[2]&&a[i][3]<=counter[1]&&a[i][4]<=counter[0])
		 {
		 	cout<<let[0][a[i][0]-1]<<"("<<let[1][a[i][1]-1]<<let[2][a[i][2]-1]<<let[1][a[i][3]-1]<<")"<<let[0][a[i][4]-1]<<endl;
		 }
	  } 
	return 0;
}

#include <iostream>
using namespace std; 
int main(int argc, char** argv) {
	int a[10];
	for(int i=0;i<10;i++)//³õÊ¼»¯²âÊÔÑùÀý 
	{
		cin>>a[i];
	}
	for(int i=1;i<10;i++)
	{
		if(a[i]!=0)
		{
			cout<<i;
			a[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<a[i];j++)
		{
			cout<<i;	
		}
	}
	return 0;
}

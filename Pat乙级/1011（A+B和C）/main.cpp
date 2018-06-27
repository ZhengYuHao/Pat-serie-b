#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int n;cin>>n;
	long int a[n][3];
	int i; 
	for(i=0;i<n;i++)//ÊäÈë²âÊÔÊý¾Ý 
	{
		cin>>a[i][0];
		cin>>a[i][1];
		cin>>a[i][2];
	}
	for(i=0;i<n;i++)
	{
		if(a[i][0]+a[i][1]>a[i][2])
		cout<<"Case #"<<i<<": true"<<endl;
		else cout<<"Case #"<<i<<": false"<<endl;	
	 } 	
	return 0;
}

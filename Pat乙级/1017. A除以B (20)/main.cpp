#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char** argv) {
	char Q[100]; 
	char *t;t=Q;//用于保存商
	string A;
	int B;
	cin>>A>>B;
	int N=A.length();
	int i=0,j=0;
	int w,r=0;
	while(i<N)
	{
		w=A[i]-'0'+r*10;
	    if(w/B!=0||i!=0)
		{
		t[j]=(w/B)+48;
		j++;
		}
		r=w%B;		
		i++;
	}
	cout<<t<<" "<<r<<endl;
	return 0;
}

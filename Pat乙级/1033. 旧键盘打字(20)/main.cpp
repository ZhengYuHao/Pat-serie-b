#include <iostream>
#include <string.h>
using namespace std;
bool Tell(string str,char a,bool T);//判断该字符是否是可以输出 
bool Tell2(string str);//判断上档键是否已坏 
int main(int argc, char** argv) {
	string str1,str2;//分别用于存储坏键和应该输出的字符串
	cin>>str1>>str2;
	bool T=Tell2(str1);
	int n=str2.length();
	for(int i=0;i<n;i++)
	{
		if(Tell(str1,str2[i],T)==false)
		cout<<str2[i];
	}
	 cout<<endl;
	return 0;
}
//=====
 bool Tell(string str,char a,bool T)
 {
 	int n=str.length();
 	if(a>=65&&a<=90&&T==true)
 	return true;
 	 for(int i=0;i<n;i++)
 	{
 		if(str[i]==a)
 		   return true;
	    if(str[i]==a+32||str[i]==a-32)
		return true;		 
    }
    return false;
}
 //========== 
bool Tell2(string str) 
{
	int n=str.length();
	for(int i=0;i<n;i++)
	{
		if(str[i]=='+')
		return true;
	}
	return false;
}

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
//输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10的100次方。
//输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，
//但一行中最后一个拼音数字后没有空格。
//输入样例：
//1234567890987654321123456789
//输出样例：
//yi san wu
int main(int argc, char** argv) {
	string  n;cin>>n;
	int l=n.length();
	int num=0;
	for(int i=0;i<l;i++)
	{
		num=num+(n[i]-'0');
	}
	char zz[10];
	sprintf(zz,"%d",num);
	int i=0;
	while(zz[i]!=NULL)
	{
		if(zz[i]=='1')
		{
			if(zz[i+1]==NULL) 
		cout<<"yi";
		else cout<<"yi ";
		}
		if(zz[i]=='2')
		{
			if(zz[i+1]==NULL) 
		cout<<"er";
		else cout<<"er ";
		}
		if(zz[i]=='3')
		{
			if(zz[i+1]==NULL) 
		cout<<"san";
		else cout<<"san ";
		}
		if(zz[i]=='4')
		{
			if(zz[i+1]==NULL) 
		cout<<"si";
		else cout<<"si ";
		}
		if(zz[i]=='5')
		{
			if(zz[i+1]==NULL) 
		cout<<"wu";
		else cout<<"wu ";
		}
		if(zz[i]=='6')
		{
			if(zz[i+1]==NULL) 
		cout<<"liu";
		else cout<<"liu ";
		}
		if(zz[i]=='7')
		{
			if(zz[i+1]==NULL) 
		cout<<"qi";
		else cout<<"qi ";
		}
		if(zz[i]=='8')
		{
			if(zz[i+1]==NULL) 
		cout<<"ba";
		else cout<<"ba ";
		}
		if(zz[i]=='9')
		{
			if(zz[i+1]==NULL) 
		cout<<"jiu";
		else cout<<"jiu ";
		}
		if(zz[i]=='0')
		{
			if(zz[i+1]==NULL) 
		cout<<"ling";
		else cout<<"ling ";
		}
		i++;
	}	
	return 0;
}

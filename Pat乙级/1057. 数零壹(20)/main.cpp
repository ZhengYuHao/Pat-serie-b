#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
给定一串长度不超过105的字符串，本题要求你将其中所有英文字母的序号（字母a-z对应序号1-26，不分大小写）相加，
得到整数N，然后再分析一下N的二进制表示中有多少0、多少1。例如给定字符串“PAT (Basic)”，其字母序号之和为：
16+1+20+2+1+19+9+3=71，而71的二进制是1000111，即有3个0、4个1。

输入格式：

输入在一行中给出长度不超过105、以回车结束的字符串。

输出格式：

在一行中先后输出0的个数和1的个数，其间以空格分隔。

输入样例：
PAT (Basic)
输出样例：
3 4
*/
int sum(char *str);//用于返回字符序号之和 
int main(int argc, char** argv) {
	char str[100000];
	gets(str);
	int c=sum(str);//字符序列号之和 //用于保存转换二进制时候的被除数
	int L=0,Y=0;//用于保存二进制数当中0和1的个数 
	int yu;//暂时保存余数 
	while(c!=0)
	{
		yu=c%2;
		c=c/2;
		if(yu==1)
		  Y++;
		  else if(yu==0)
		     L++;
		}	
		cout<<L<<" "<<Y;
	return 0;
}
//==========
int sum(char *str)//用于返回字符序号之和 
{
	int num=0;
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		num=num+(str[i]-96);	
		}
		else if(str[i]>='A'&&str[i]<='Z')
		{
			num=num+(str[i]-64);
		}
	}
	return num;
}

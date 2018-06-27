#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。
现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉的那些键。

输入格式：

输入在2行中分别给出应该输入的文字、以及实际被输入的文字。每段文字是不超过80个字符的串，
由字母A-Z（包括大、小写）、数字0-9、以及下划线“_”（代表空格）组成。题目保证2个字符串均非空。

输出格式：

按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键只输出一次。题目保证至少有1个坏键。

输入样例：
7_This_is_a_test
_hs_s_a_es
输出样例：
7TI
*/
void SetToBig(char a[]);//将小写字母全部转换成大写字母 
bool Tell(char a[],char x);//判断字母是否重复 
int main(int argc, char** argv) {
	char a[80];
	char b[80];
	char c[80];
	cin>>a;
	cin>>b;
	SetToBig(a);
	SetToBig(b);
	int i,j;
	i=0;
    int m=0;
	while(a[i]!='\0')
	{
	    j=0;
		while(b[j]!='\0')
		{
			if(a[i]==b[j])
			goto loop;
			j++;
		}
		if(Tell(c,a[i])==false)
		{
			cout<<a[i];
		}
		c[m]=a[i];
		m++;
		c[m]='/0';
		loop:;
		i++;
	}
	return 0;
}
//===========
void SetToBig(char a[])//将小写字母全部转换成大写字母
{
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]>=97&&a[i]<122)
		{
			a[i]=a[i]-32;
		}
		i++;
	}
}
//============
bool Tell(char a[],char x)//判断字母是否重复 
{
	int i=0;
	int num=0;
	while(a[i]!='\0')
	{
		if(a[i]==x)
		num++;
	    i++;
	}
	if(num>0)
	return true;
	else return false;

}

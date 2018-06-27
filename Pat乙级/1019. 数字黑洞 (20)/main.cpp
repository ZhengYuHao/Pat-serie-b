#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*给定任一个各位数字不完全相同的4位正整数，如果我们先把4个数字按非递增排序，
再按非递减排序，然后用第1个数字减第2个数字，将得到一个新的数字。
一直重复这样做，我们很快会停在有“数字黑洞”之称的6174，这个神奇的数字也叫Kaprekar常数。

例如，我们从6767开始，将得到

7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...

现给定任意4位正整数，请编写程序演示到达黑洞的过程。

输入格式：

输入给出一个(0, 10000)区间内的正整数N。

输出格式：

如果N的4位数字全相等，则在一行内输出“N - N = 0000”；
否则将计算的每一步在一行内输出，直到6174作为差出现，输出格式见样例。注意每个数字按4位数格式输出。

输入样例1：
6767
输出样例1：
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
输入样例2：
2222
输出样例2：
2222 - 2222 = 0000*/
//=====
int set(char *str);//实现将四个数值组合成一个数 
//========
char *setBack(int cout);//将数字转换成字符数组
//======== 
int sortMax(char *str);//实现由大到小排序
//========
int sortMin(char *str);//实现由小到大排序
//======== 
int main(int argc, char** argv) {
	char str[4];
	for(int i=0;i<4;i++)//输入初始值 
	{
		cin>>str[i];
	}
	char *z=str;
	if(str[0]==str[1]&&str[1]==str[2]&&str[2]==str[3]) 
	cout<<set(str)<<" - "<<set(str)<<" = 0000"<<endl;
	else if(set(z)==6174) 
	{
		cout<<setBack(sortMax(z))<<" - "<<setBack(sortMin(z))<<" = "<<setBack(sortMax(z)-sortMin(z))<<endl;
	}
	else while(set(z)!=6174)
	{
		cout<<setBack(sortMax(z))<<" - "<<setBack(sortMin(z))<<" = "<<setBack(sortMax(z)-sortMin(z))<<endl;
		z=setBack(sortMax(z)-sortMin(z));
	}
	return 0;
}
//========
int set(char *str)//实现将四个数值组合成一个数 
{
	int cout=0;
	cout=(str[0]-'0')*1000+(str[1]-'0')*100+(str[2]-'0')*10+(str[3]-'0'); 
	return cout;
}
//============
char *setBack(int cou)//将数字转换成字符数组
{
	char *str=new char[4]; 
	str[3]=cou%10+48;
	str[2]=(cou%100-(str[3]-48))/10+48;
	str[1]=(cou%1000-(str[2]-48)*10-(str[3]-48))/100+48;
	str[0]=(cou-(str[1]-48)*100-(str[2]-48)*10-(str[3]-48))/1000+48;//<<str[1]<<str[2]<<str[3]<<endl
    return str;
}
//=========== 
int sortMax(char *str)//实现由大到小排序
{
	char term;
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(str[i]<str[j])
			{
				term=str[i];
				str[i]=str[j];
				str[j]=term;
							}
		}
	}
	return set(str);
}
//========
int sortMin(char *str)//实现由小到大排序
{
	char term;
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(str[i]>str[j])
			{
				term=str[i];
				str[i]=str[j];
				str[j]=term;
							}
		}
	}
	return set(str);
}

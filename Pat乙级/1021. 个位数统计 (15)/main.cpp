#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*给定一个k位整数N = dk-1*10k-1 + ... + d1*101 + d0 (0<=di<=9, i=0,...,k-1, dk-1>0)，
请编写程序统计每种不同的个位数字出现的次数。例如：给定N = 100311，则有2个0，3个1，和1个3。

输入格式：

每个输入包含1个测试用例，即一个不超过1000位的正整数N。

输出格式：

对N中每一种不同的个位数字，以D:M的格式在一行中输出该位数字D及其在N中出现的次数M。要求按D的升序输出。

输入样例：
100311
输出样例：
0:2
1:3
3:1*/
int main(int argc, char** argv) {
	string str;
	cin>>str;
	int a[10][2]={0,0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0};
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='0')
		    a[0][1]++;
		    else if(str[i]=='1')
		         a[1][1]++;
		        else if(str[i]=='2')
		             a[2][1]++;
		             else if(str[i]=='3')
		                   a[3][1]++;
		                  else if(str[i]=='4')
		                      a[4][1]++;
		                      else if(str[i]=='5')
		                            a[5][1]++;
		                           else if(str[i]=='6')
		                               a[6][1]++;
		                                 else if(str[i]=='7')
		                                       a[7][1]++;
		                                       else if(str[i]=='8')
		                                            a[8][1]++;
		                                            else if(str[i]=='9')
		                                                   a[9][1]++;
	}
	for(int i=0;i<10;i++)
	{
		if(a[i][1]>0)
		{
			cout<<a[i][0]<<":"<<a[i][1]<<endl;
		}
	}
	return 0;
}

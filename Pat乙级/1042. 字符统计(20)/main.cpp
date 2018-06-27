#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
请编写程序，找出一段给定文字中出现最频繁的那个英文字母。

输入格式：

输入在一行中给出一个长度不超过1000的字符串。字符串由ASCII码表中任意可见字符及空格组成，至少包含1个英文字母，
以回车结束（回车不算在内）。

输出格式：

在一行中输出出现频率最高的那个英文字母及其出现次数，其间以空格分隔。如果有并列，则输出按字母序最小的那个字母。
统计时不区分大小写，输出小写字母。

输入样例：
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
输出样例：
e 7
*/
int main(int argc, char** argv) {
	char a[1000];
	char *str=a;
	gets(str);
	int num[128]={0};
	int i;
	while(*str!='\0')
	{
		i=*str;
		if(i>=65&&i<=90)
		{
			num[i+32]++;
		}
		else num[i]++;
		str++;
	 } 
	 int node=97;
	 int sum=num[97];
	for(i=97;i<122;i++)
	{
		if(sum<num[i])
		{
			node=i;
			sum=num[i];
		}
	}
	cout<<(char)node<<" "<<sum;
	return 0;
}
  

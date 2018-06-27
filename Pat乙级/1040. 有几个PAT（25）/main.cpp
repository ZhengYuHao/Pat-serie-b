#include <iostream>
#include <string.h> 
using namespace std;
/*
 字符串APPAPT中包含了两个单词“PAT”，其中第一个PAT是第2位(P),第4位(A),第6位(T)；
 第二个PAT是第3位(P),第4位(A),第6位(T)。

现给定字符串，问一共可以形成多少个PAT？

输入格式：

输入只有一行，包含一个字符串，长度不超过105，只包含P、A、T三种字母。

输出格式：

在一行中输出给定字符串中包含多少个PAT。由于结果可能比较大，只输出对1000000007取余数的结果。

输入样例：
APPAPT
输出样例：
2
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str;
	cin>>str;
	int lengthstr=str.length();
	int SumNum=0;
	for(int i=0;i<lengthstr;i++)
	{
		if(str[i]=='P')
		{
			for(int j=i+1;j<lengthstr;j++)
			{
				if(str[j]=='A')
				{
					for(int k=j+1;k<lengthstr;k++)
					{
						if(str[k]=='T')
						{
							SumNum++;
						}
					}
				}
			}
		}
	 }
	 cout<<SumNum%1000000007; 
	return 0;
}

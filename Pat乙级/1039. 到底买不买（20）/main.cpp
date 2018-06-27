#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
小红想买些珠子做一串自己喜欢的珠串。卖珠子的摊主有很多串五颜六色的珠串，但是不肯把任何一串拆散了卖。
于是小红要你帮忙判断一下，某串珠子里是否包含了全部自己想要的珠子？如果是，那么告诉她有多少多余的珠子；
如果不是，那么告诉她缺了多少珠子。

为方便起见，我们用[0-9]、[a-z]、[A-Z]范围内的字符来表示颜色。例如在图1中，第3串是小红想做的珠串；
那么第1串可以买，因为包含了全部她想要的珠子，还多了8颗不需要的珠子；第2串不能买，因为没有黑色珠子，并且少了一颗红色的珠子。


图 1
输入格式：

每个输入包含1个测试用例。每个测试用例分别在2行中先后给出摊主的珠串和小红想做的珠串，
两串都不超过1000个珠子。

输出格式：

如果可以买，则在一行中输出“Yes”以及有多少多余的珠子；如果不可以买，则在一行中输出“No”
以及缺了多少珠子。其间以1个空格分隔。

输入样例1：
ppRYYGrrYBR2258
YrR8RrY
输出样例1：
Yes 8
输入样例2：
ppRYYGrrYB225
YrR8RrY
输出样例2：
No 2
*/
int main(int argc, char** argv) {
	string str1,str2;
	cin>>str1>>str2;
	int n1,n2,n3;
	n1=str1.length();
	n2=str2.length();
	n3=0;
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n1;j++)
		{
			if(str2[i]==str1[j])
			{
				str1[j]='/';
				n3++;
				break;
			}
		}
	}
	if(n3==n2)
	{
		cout<<"Yes"<<' '<<n1-n3<<endl;
	}
	else if(n3<n2)
	{
		cout<<"No"<<' '<<n2-n3<<endl;
	}
	return 0;
}

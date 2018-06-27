#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），
换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，
因为它有2个“百”、3个“十”、以及个位的4。

输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。

输出格式：每个测试用例的输出占一行，用规定的格式输出n。

输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123*/
int main(int argc, char** argv) {
	int n;cin>>n;
	int b,s,g;//分别表示百位，十位，个位。
	{
	  g=n%10;//得到个位 
	} 
	{
		s=((n-g)/10)%10;//得到十位 
	} 
	{
		b=(n-(s*10)-g)/100;//得到百位 
	} 
	int i;
	for(i=0;i<b;i++)
		cout<<"B";
	for(i=0;i<s;i++)
		cout<<"S";
	for(i=1;i<=g;i++)
	    cout<<i;
    return 0;
}

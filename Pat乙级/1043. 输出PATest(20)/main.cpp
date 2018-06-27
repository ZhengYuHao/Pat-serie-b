#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按“PATestPATest....”
这样的顺序输出，并忽略其它字符。当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，
则余下的字符仍按PATest的顺序打印，直到所有字符都被输出。

输入格式：

输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。

输出格式：

在一行中按题目要求输出排序后的字符串。题目保证输出非空。

输入样例：
redlesPayBestPATTopTeePHPereatitAPPT
输出样例：
PATestPATestPTetPTePePee 

*/
int main(int argc, char** argv) {
	string str;
	cin>>str;
    int P=0;
	int A=0;
	int T=0;
	int e=0;
	int s=0;
	int t=0;
	for(int i=0;i<str.length();i++)//统计各个字母出现的个数 
	{
		if(str[i]=='P')
		P++;
		else if(str[i]=='A')
		     A++;
		     else if(str[i]=='T')
		          T++;
		          else if(str[i]=='e')
		               e++;
		               else if(str[i]=='s')
		                     s++;
		                     else if(str[i]=='t')
		                          t++;
	}
	 while(true)
	 {
	 	if(P>0)
	 	{
		 cout<<'P';
		 P--;		
		 }
	 	if(A>0)
	 	{
		 cout<<'A';
		 A--;		
		 }
	 	if(T>0)
	 	{
		 cout<<'T';
		 T--;		
		 }
	 	if(e>0)
	 	{
		 cout<<'e';
		 e--;		
		 }
		 if(s>0)
	 	{
		 cout<<'s';
		 s--;		
		 }
	 	if(t>0)
	 	{
		 cout<<'t';
		 t--;		
		 }
		 if(P==A&&A==T&&T==e&&e==s&&s==t&&t==0)
		 break;
	  } 
	
	return 0;
}

#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
����һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵ��ַ������뽫�ַ����µ���˳�򣬰���PATestPATest....��
������˳������������������ַ�����Ȼ�������ַ��ĸ�����һ����һ����ģ���ĳ���ַ��Ѿ�����꣬
�����µ��ַ��԰�PATest��˳���ӡ��ֱ�������ַ����������

�����ʽ��

������һ���и���һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵķǿ��ַ�����

�����ʽ��

��һ���а���ĿҪ������������ַ�������Ŀ��֤����ǿա�

����������
redlesPayBestPATTopTeePHPereatitAPPT
���������
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
	for(int i=0;i<str.length();i++)//ͳ�Ƹ�����ĸ���ֵĸ��� 
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

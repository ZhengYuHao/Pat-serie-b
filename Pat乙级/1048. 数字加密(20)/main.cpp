#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*本题要求实现一种数字加密方法。首先固定一个加密用正整数A，对任一正整数B，
将其每1位数字与A的对应位置上的数字进行以下运算：对奇数位，
对应位的数字相加后对13取余——这里用J代表10、Q代表11、K代表12；对偶数位，
用B的数字减去A的数字，若结果为负数，则再加10。这里令个位为第1位。

输入格式：

输入在一行中依次给出A和B，均为不超过100位的正整数，其间以空格分隔。

输出格式：

在一行中输出加密后的结果。

输入样例：
1234567 368782971
输出样例：
3695Q8118*/
int main(int argc, char** argv) {
	char a[100];//用于保存输出样式 
	int counter=0;//记录数组a的下标 
	char  zz;//用于保存每次运算得出的字符的
	int shu,numB2;
	string strA,strB;
	cin>>strA>>strB;//初始化两段密文 
	int A=strA.length();
	int B=strB.length();
	int tel;//用于标记奇数和偶数
	int numA;
	if(A>=B)
	{
		numA=A-1;
	    tel=1; 
		for(int i=B-1;i>=0;i--,numA--)
		{
			if(tel==1)
			{
				shu=(((strA[numA]-'0')+(strB[i]-'0'))%13);
				if(shu==10)
				{
					a[counter]='J';
					counter++;
				}
				else if(shu==11)
				{
					a[counter]='Q';
					counter++;
				}
				else if(shu==12)
				{
					a[counter]='K';
					counter++;
				}
				else {
					a[counter]=shu+48;
					counter++;
				}
				tel=2;
			 } 
			 else if(tel==2)
			 {
			 	shu=(strB[i]-'0')-(strA[numA]-'0');
			 	if(shu<0)
			 	{
			 		shu=shu+10;
			 		a[counter]=shu+48;
					counter++;
				 }
				 else if(shu>=0)
				 {
				 	if(shu==10)
				   {
					a[counter]='J';
					counter++;
				  }
				    else if(shu==11)
				   {
				 	a[counter]='Q';
					counter++;
				   }
			     	else if(shu==12)
			    	{
					a[counter]='K';
					counter++;
				   }
				    else {
					a[counter]=shu+48;
					counter++;
				   }
				 }
				 tel=1;
			 }	 
		}
		for(int i=counter-1;i>=0;i--)
		{
			cout<<a[i];
		}
	}
	else if(B>A)
	{
		int numB=B-1;
		tel=1;
		     for(int i=A-1;i>=0;i--,numB--)	
		     {
			     if(tel==1)
			    { 
		     	shu=(((strA[i]-'0')+(strB[numB]-'0'))%13);
				if(shu==10)
				{
					a[counter]='J';
					counter++;
				}
				else if(shu==11)
				{
					a[counter]='Q';
					counter++;
				}
				else if(shu==12)
				{
					a[counter]='K';
					counter++;
				}
				else {
					a[counter]=shu+48;
					counter++;
				}
				tel=2;
			 }
		else if(tel==2)
		{
			shu=(strB[numB]-'0')-(strA[i]-'0');
			 	if(shu<0)
			 	{
			 		shu=shu+10;
			 		a[counter]=shu+48;
					counter++;
				 }
				 else if(shu>=0)
				 {
				 	if(shu==10)
				   {
					a[counter]='J';
					counter++;
				  }
				    else if(shu==11)
				   {
				 	a[counter]='Q';
					counter++;
				   }
			     	else if(shu==12)
			    	{
					a[counter]='K';
					counter++;
				   }
				    else {
					a[counter]=shu+48;
					counter++;
				   }
				 }
				 tel=1;	 
		}
		}
		numB2=numB;	
		for(int i=0;i<=numB2;i++)
		{
			cout<<strB[i];
		}
		for(int i=counter-1;i>=0;i--)
		{
			cout<<a[i];
		}
	}
	return 0;
}

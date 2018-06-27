#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。

输入格式：

输入在一行中依次给出3个整数A、B和D。

输出格式：

输出A+B的D进制数。

输入样例：
123 456 8
输出样例：
1103
*/
 typedef struct Num
{
	int i;
	struct Num *next;
}Num;
int main(int argc, char** argv) {
	long long int a;
	long long int b;
	int n;
	cin>>a>>b>>n;
	long long trade;
	trade=a+b;
	Num *head,*p;
	head=NULL;
	do
	{
		
		p = new Num;
		p->i=trade%n;
		p->next=head;
		head=p;
		trade=trade/n;
	}while(trade!=0);
	while(head)
	{
	cout<<head->i;	
	head=head->next;
	}
	return 0;
}

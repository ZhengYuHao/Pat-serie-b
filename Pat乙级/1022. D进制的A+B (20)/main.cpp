#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
���������Ǹ�10��������A��B(<=230-1)�����A+B��D (1 < D <= 10)��������

�����ʽ��

������һ�������θ���3������A��B��D��

�����ʽ��

���A+B��D��������

����������
123 456 8
���������
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

#include <iostream>
using namespace std;
typedef struct numble{//将0到n的素数链接成链表 
	int n;
	struct numble *next;
}Num;
bool Tell(int n);//用于判断整数是否是素数 
int main(int argc, char** argv) {
	int n;cin>>n;
	Num *p=NULL;
	Num *head=NULL;
	for(int i=1;i<n;i++)//将素数链接成链表 
	{
		if(Tell(i))
		{
			Num *q=new Num();
			q->n=i;
			if(head==NULL)
			   head=q;
			   else
			   	p->next=q;
			p=q;  	
		}
	}
	if(p) p->next=NULL;
	Num *zz=head;
	 int N=0;
	 while(zz->next)
	{
		if((zz->next->n)-zz->n==2)
		N++;
		zz=zz->next;
	 }
	 cout<<N<<endl;	
	return 0;
}
//===============
bool Tell(int n)//用于判断整数是否是素数 
{
    
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}

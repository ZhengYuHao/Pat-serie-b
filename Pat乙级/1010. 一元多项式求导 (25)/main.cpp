#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*设计函数求一元多项式的导数。（注：xn（n为整数）的一阶导数为n*xn-1。）
输入格式：以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过1000的整数）。
数字间以空格分隔。
输出格式：以与输入相同的格式输出导数多项式非零项的系数和指数。
数字间以空格分隔，但结尾不能有多余空格。注意“零多项式”的指数和系数都是0，但是表示为“0 0”。
输入样例：
3 4 -5 2 6 1 -2 0
输出样例：
12 3 -10 1 6 0*/
typedef struct numble
{
	int zs;
	int xs;
	struct numble *next;
}Num;
int main(int argc, char** argv) {
	int i,j;	
	Num *head,*p,*q;
	head=p=NULL;
	do{
		q=new Num();
	    cin>>i;
	    cin>>j;
		q->xs=i;
		q->zs=j;
		if(head==NULL)
		head=q;
		else 
		p->next=q;
		p=q;				
	}while(j>0);
	if(p)
	p->next=NULL;
	Num *u=head;
	while(u)//实现功能区 
	{
		u->xs=u->xs*u->zs;
		u->zs=u->zs-1;
		u=u->next;
	}
	u=head; 
	while(u)//实现功能区 
	{
		if(u->xs!=0&&u->zs!=-1&&u->next==NULL)
        cout<<u->xs<<" "<<u->zs;
        else if(u->xs!=0&&u->zs!=-1&&u->next!=NULL)
        cout<<u->xs<<" "<<u->zs<<" ";
		u=u->next;
	}
	return 0;
}

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*��ƺ�����һԪ����ʽ�ĵ�������ע��xn��nΪ��������һ�׵���Ϊn*xn-1����
�����ʽ����ָ���ݽ���ʽ�������ʽ������ϵ����ָ��������ֵ��Ϊ������1000����������
���ּ��Կո�ָ���
�����ʽ������������ͬ�ĸ�ʽ�����������ʽ�������ϵ����ָ����
���ּ��Կո�ָ�������β�����ж���ո�ע�⡰�����ʽ����ָ����ϵ������0�����Ǳ�ʾΪ��0 0����
����������
3 4 -5 2 6 1 -2 0
���������
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
	while(u)//ʵ�ֹ����� 
	{
		u->xs=u->xs*u->zs;
		u->zs=u->zs-1;
		u=u->next;
	}
	u=head; 
	while(u)//ʵ�ֹ����� 
	{
		if(u->xs!=0&&u->zs!=-1&&u->next==NULL)
        cout<<u->xs<<" "<<u->zs;
        else if(u->xs!=0&&u->zs!=-1&&u->next!=NULL)
        cout<<u->xs<<" "<<u->zs<<" ";
		u=u->next;
	}
	return 0;
}

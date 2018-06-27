#include <iostream>
#include <stdlib.h>
using namespace std;
//===========
typedef struct student {
	int num;
	int dsco;
	int csco;
	int totsco;
	struct student *next;
}stu;
//==================
stu *set(int N);//ʵ�ֳ�ʼ���ݵ�����
//==============
stu * G(stu *head, int L);//ɾ���˵²ŷ���û�дﵽҪ���ѧ����Ϣ 
//====================
void Dis(stu *head);//���ѧ����Ϣ
//===============
stu *sort(stu *head);//��ÿһ�����͵�ѧ����������
//=============== 
stu *get(stu *head, int H);//�õ���һ������
//=========
stu *get2(stu *head, int H);//�õ��ڶ�������
//===================
stu *get3(stu *head, int H);//�õ�����������
//===================
stu *get4(stu *head,int H);//�õ�����������
//===================== 
static int i=0;
int main(int argc, char** argv) {
	int N, L, H;
	cin >> N >> L >> H;
	stu *head = set(N);
	stu *head2 = G(head, L);//head2���ڱ�������ﵽ�����ߵ�ѧ����Ϣ
	stu *head3=get(head2,H); //�õ���һ������
	stu *head4=get2(head2,H);//�õ��ڶ�������
	stu *head5=get3(head2,H);//�õ�����������
	stu *head6=get4(head2,H);//�õ�����������
	cout<<i<<endl;
	Dis(head3);
	Dis(head4);
	Dis(head5);
	Dis(head6);
	return 0;
}
//============
stu *set(int N)//ʵ�ֳ�ʼ���ݵ�����
{
	stu *head, *p, *q;
	head = p = q = NULL;
	while (N>0)
	{
		q =(stu *) malloc (sizeof(stu));
		cin >> q->num >> q->dsco >> q->csco;//��ʼ��ѧ�ţ��²ŵķ��� 
		q->totsco = q->csco + q->dsco;//���ѧ���ܷ�
		if (head == NULL)
		{
			head = q;
		}
		else
		{
			p->next = q;
		}
		p = q;
		N--;
	}
	if (p) p->next = NULL;
	return head;
}
//===================
stu * G(stu *head, int L)//��ȡ�²Ŷ�����ѧ���ĳɼ� 
{
	stu *head1;
	stu *p,*q;
	head1=p=NULL;
	while(head)
	{
		if(head->csco>=L&&head->dsco>=L)
		{
			i++;
			q=new stu();
			q->csco=head->csco;
			q->dsco=head->dsco;
			q->num=head->num;
			q->totsco=head->totsco;
			if(head1==NULL)
			{
				head1=q;
			}
			else
			{
				p->next=q;
			 } 
		    p=q;
		}
		
		head=head->next;
	}
	if(p) p->next=NULL;
	return head1;
}
//===========
stu *get(stu *head, int H)//�õ���һ������
{
	stu *head1;
	stu *p,*q;
	head1=p=NULL;
	while(head)
	{
		if(head->csco>=H&&head->dsco>=H)
		{
			q=new stu();
			q->csco=head->csco;
			q->dsco=head->dsco;
			q->num=head->num;
			q->totsco=head->totsco;
			if(head1==NULL)
			{
				head1=q;
			}
			else
			{
				p->next=q;
			 } 
		    p=q;
		}
		
		head=head->next;
	}
	if(p) p->next=NULL;
	return sort(head1);
}
//=======================
stu *get2(stu *head, int H)//�õ��ڶ�������
{
	stu *head1;
	stu *p,*q;
	head1=p=NULL;
	while(head)
	{
		if(head->csco<H&&head->dsco>=H)
		{
			q=new stu();
			q->csco=head->csco;
			q->dsco=head->dsco;
			q->num=head->num;
			q->totsco=head->totsco;
			if(head1==NULL)
			{
				head1=q;
			}
			else
			{
				p->next=q;
			 } 
		    p=q;
		}
		
		head=head->next;
	}
	if(p) p->next=NULL;
	 return sort(head1);
	}
//========================
stu *get3(stu *head, int H)//�õ�����������
{
	stu *head1;
	stu *p,*q;
	head1=p=NULL;
	while(head)
	{
		if(head->csco<H&&head->dsco<H&&head->dsco>head->csco)
		{
			q=new stu();
			q->csco=head->csco;
			q->dsco=head->dsco;
			q->num=head->num;
			q->totsco=head->totsco;
			if(head1==NULL)
			{
				head1=q;
			}
			else
			{
				p->next=q;
			 } 
		    p=q;
		}
		
		head=head->next;
	}
	if(p) p->next=NULL;
	return sort(head1);
}
//======================== 
stu *get4(stu *head,int H)//�õ�����������
{
	stu *head1;
	stu *p,*q;
	head1=p=NULL;
	while(head)
	{
		if(head->dsco<H&&head->dsco<head->csco)
		{
			q=new stu();
			q->csco=head->csco;
			q->dsco=head->dsco;
			q->num=head->num;
			q->totsco=head->totsco;
			if(head1==NULL)
			{
				head1=q;
			}
			else
			{
				p->next=q;
			 } 
		    p=q;
		}
		
		head=head->next;
	}
	if(p) p->next=NULL;
	 return sort(head1);
}
//==========================
stu *sort(stu *head)//��ÿһ�����͵�ѧ����������(ѡ������)
{
	stu *p=head;
	stu *q;
	int i,j,k,l;//ѡ���������õ��ĵ£��ţ��ܷ֣�����ѧ�� 
	while(head)
	{
		q=head->next;
	while(q)
	{
		if((head->totsco<q->totsco)||(head->totsco==q->totsco&&head->dsco<q->dsco)||(head->totsco==q->totsco&&head->dsco==q->dsco&&head->num>q->num))
		{
			i=head->csco;
			j=head->dsco;
			k=head->num;
			l=head->totsco;
			head->csco=q->csco;
			head->dsco=q->dsco;
			head->num=q->num;
			head->totsco=q->totsco;
			q->csco=i;
			q->dsco=j;
			q->num=k;
			q->totsco=l;
		 } 
		q=q->next;
	 } 
	 head=head->next;
	}
	return p;
 } 
	
//======================
void Dis(stu *head)//���ѧ����Ϣ
{
	while (head)
	{
		cout << head->num << " " << head->dsco << " " << head->csco<<endl;
		
		head = head->next;
	}
}


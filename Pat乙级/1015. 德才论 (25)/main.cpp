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
stu *set(int N);//实现初始数据的输入
//==============
stu * G(stu *head, int L);//删除了德才分数没有达到要求的学生信息 
//====================
void Dis(stu *head);//输出学生信息
//===============
stu *sort(stu *head);//给每一种类型的学生进行排序
//=============== 
stu *get(stu *head, int H);//得到第一种类型
//=========
stu *get2(stu *head, int H);//得到第二种类型
//===================
stu *get3(stu *head, int H);//得到第三种类型
//===================
stu *get4(stu *head,int H);//得到第四种类型
//===================== 
static int i=0;
int main(int argc, char** argv) {
	int N, L, H;
	cin >> N >> L >> H;
	stu *head = set(N);
	stu *head2 = G(head, L);//head2用于保存分数达到及格线的学生信息
	stu *head3=get(head2,H); //得到第一种类型
	stu *head4=get2(head2,H);//得到第二种类型
	stu *head5=get3(head2,H);//得到第三种类型
	stu *head6=get4(head2,H);//得到第四种类型
	cout<<i<<endl;
	Dis(head3);
	Dis(head4);
	Dis(head5);
	Dis(head6);
	return 0;
}
//============
stu *set(int N)//实现初始数据的输入
{
	stu *head, *p, *q;
	head = p = q = NULL;
	while (N>0)
	{
		q =(stu *) malloc (sizeof(stu));
		cin >> q->num >> q->dsco >> q->csco;//初始化学号，德才的分数 
		q->totsco = q->csco + q->dsco;//求得学生总分
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
stu * G(stu *head, int L)//获取德才都及格学生的成绩 
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
stu *get(stu *head, int H)//得到第一种类型
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
stu *get2(stu *head, int H)//得到第二种类型
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
stu *get3(stu *head, int H)//得到第三种类型
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
stu *get4(stu *head,int H)//得到第四种类型
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
stu *sort(stu *head)//给每一种类型的学生进行排序(选择排序)
{
	stu *p=head;
	stu *q;
	int i,j,k,l;//选择排序中用到的德，才，总分，还有学号 
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
void Dis(stu *head)//输出学生信息
{
	while (head)
	{
		cout << head->num << " " << head->dsco << " " << head->csco<<endl;
		
		head = head->next;
	}
}


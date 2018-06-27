#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
��Ҫ���д���򣬼���2���������ĺ͡�������̡�

�����ʽ��

������һ���а��ա�a1/b1 a2/b2���ĸ�ʽ��������������ʽ�������������з��Ӻͷ�ĸȫ�����ͷ�Χ�ڵ�������
����ֻ���ܳ����ڷ���ǰ����ĸ��Ϊ0��

�����ʽ��

�ֱ���4���а��ա�������1 ����� ������2 = ������ĸ�ʽ˳�����2���������ĺ͡�������̡�
ע�������ÿ�������������Ǹ��������������ʽ��k a/b��������k���������֣�a/b�����������֣�
��Ϊ��������������ţ���������ĸΪ0���������Inf������Ŀ��֤��ȷ�������û�г������ͷ�Χ��������

��������1��
2/3 -4/2
�������1��
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
��������2��
5/3 0/6
�������2��
1 2/3 + 0 = 1 2/3
1 2/3 - 0 = 1 2/3
1 2/3 * 0 = 0
1 2/3 / 0 = Inf
*/
int gcd(int x,int y);//�������������Լ�� 
void Get(string A,int *a1,int *a2);//���ڵõ������ַ�������������
void add(int a1,int a2,int b1,int b2,int *c1,int *c2);//�õ��ӷ��Ľ�� 
void del(int a1,int a2,int b1,int b2,int *c1,int *c2);//�õ������Ľ��
void mutiplate(int a1,int a2,int b1,int b2,int *c1,int *c2);//�õ��˷��Ľ��
void division(int a1,int a2,int b1,int b2,int *c1,int *c2);//�õ������Ľ��
int display(int x,int y);//�Ա�׼��ʽ��ӡ�β� 
int main(int argc, char** argv) {
	string A,B;
	cin>>A>>B;
	int a1,a2,b1,b2,c1,c2;
	Get(A,&a1,&a2);
	Get(B,&b1,&b2);
	add(a1,a2,b1,b2,&c1,&c2);
	display(a1,a2);cout<<' '<<'+'<<' ';display(b1,b2);cout<<" "<<'='<<" ";display(c1,c2);cout<<endl;
	del(a1,a2,b1,b2,&c1,&c2);
	display(a1,a2);cout<<' '<<'-'<<' ';display(b1,b2);cout<<" "<<'='<<" ";display(c1,c2);cout<<endl;
	mutiplate(a1,a2,b1,b2,&c1,&c2);
	display(a1,a2);cout<<' '<<'*'<<' ';display(b1,b2);cout<<" "<<'='<<" ";display(c1,c2);cout<<endl;
	division(a1,a2,b1,b2,&c1,&c2);
	display(a1,a2);cout<<' '<<'/'<<' ';display(b1,b2);cout<<" "<<'='<<" ";display(c1,c2);cout<<endl;
	return 0;
}
//===========
void Get(string A,int *a1,int *a2)//���ڵõ������ַ�������������
{
	int n=A.length();
	int x=0;
	int i;
	if(A[0]=='-')
	{
	     i=1;
		while(i!=n)
		{
			if(A[i]=='/')
			{
				*a1=-1*x;
				x=0;
				goto loop;
			}
			x=(x*10)+(A[i]-'0');
			loop:;
			i++;
		}
		*a2=x;
	}
	     else if(A[0]!='-')
      	{
	         i=0;
	    	while(i!=n)
		    {
			  if(A[i]=='/')
			 {
				*a1=x;
				x=0;
				goto loop2;
			 }
			 x=(x*10)+(A[i]-'0');
			 loop2:;
			 i++;
		   }
		   *a2=x;
	  }
} 
void add(int a1,int a2,int b1,int b2,int *c1,int *c2)//�õ��ӷ��Ľ�� 
{
	a1=a1*b2;
	b1=b1*a2;
	*c2=a2*b2;
	*c1=a1+b1; 
} 
void del(int a1,int a2,int b1,int b2,int *c1,int *c2)//�õ������Ľ��
{
	a1=a1*b2;
	b1=b1*a2;
	*c2=a2*b2;
	*c1=a1-b1;
}
void mutiplate(int a1,int a2,int b1,int b2,int *c1,int *c2)//�õ��˷��Ľ��
{
	*c2=a2*b2;
	*c1=a1*b1;
}
void division(int a1,int a2,int b1,int b2,int *c1,int *c2)//�õ������Ľ��
{
	*c2=a2*b1;
	*c1=a1*b2;
}
int display(int x,int y)//�Ա�׼��ʽ��ӡ�β�
{
	if(x==0)
	{	
	cout<<0;
	return 0;
	}
	else if(y==0)
	{
	cout<<"Inf";
	return 0;
	}
	int gcdnum; 
	int num1;
	if((x>0&&y<0)||(x<0&&y>0))
	{
	if(x<0)
	{
		x=-x;
	}
	if(y<0)
	{
		y=-y;
	}
	if(x>y)
	{
		if(x%y==0)
		{
		cout<<"("<<-1*x/y<<")";	
		}
		else if (x%y!=0)
		{
		num1=x/y;
		x=x%y;
		gcdnum=gcd(x,y);
		x=x/gcdnum;
		y=y/gcdnum;	
		cout<<"("<<-1*num1<<' '<<x<<'/'<<y<<")";
		}
	}
	  else if(x<=y)
	  {
	  	gcdnum=gcd(x,y);
		x=x/gcdnum;
		y=y/gcdnum;	
		cout<<"("<<-1*x<<'/'<<y<<")";
	  }
	  }
	  else 
	{	
	if(x>y)
	{
		if(x%y==0)
		{
		cout<<x/y;	
		}
		else if (x%y!=0)
		{
		num1=x/y;
		x=x%y;
		gcdnum=gcd(x,y);
		x=x/gcdnum;
		y=y/gcdnum;	
		cout<<num1<<' '<<x<<'/'<<y;
     	}
	}
	  else if(x<=y)
	  {
	  	gcdnum=gcd(x,y);
		x=x/gcdnum;
		y=y/gcdnum;	
		cout<<x<<'/'<<y;
	  }
	  }
	return 0;
}
int gcd(int x,int y)//�������������Լ�� 
{
	if(x<0)
	{
		x=-x;
	}
	if(y<0)
	{
		y=-y;
	}
    int min=(x<y)?x:y;
    for (;min>0;min--)
    {
    	if(x%min==0&&y%min==0)
    	return min;
	}		
} 

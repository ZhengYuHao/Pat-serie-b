#include <iostream>
#include <math.h>
using namespace std;  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
��������д��(A + Bi)�ĳ�����ʽ������A��ʵ����B���鲿��i��������λ������i2 = -1��
Ҳ����д�ɼ������µ�ָ����ʽ(R*e(Pi))������R�Ǹ���ģ��P�Ƿ��ǣ�i��������λ��
��ȼ���������ʽ R(cos(P) + isin(P))��

�ָ�������������R��P��Ҫ����������˻��ĳ�����ʽ��

�����ʽ��

������һ�������θ�������������R1, P1, R2, P2�����ּ��Կո�ָ���

�����ʽ��

��һ���а��ա�A+Bi���ĸ�ʽ��������˻��ĳ�����ʽ��ʵ�����鲿������2λС����ע�⣺���B�Ǹ�����
��Ӧ��д�ɡ�A-|B|i������ʽ��

����������
2.3 3.5 5.2 0.4
���������
-8.68-8.23i
*/
double fun(double n);//�����������뱣����λС�� 
int main(int argc, char** argv) {
	double r1,p1,r2,p2;
	cin>>r1>>p1>>r2>>p2;
	double A,B;//���ڱ����׼��ʽ��ʵ�����鲿
	A=r1*r2*cos(p1+p2);
	B=r1*r2*sin(p1+p2);
	A=fun(A);
	B=fun(B);
	if(B<0)
	{
		printf("%.2f%.2fi",A,B); 
	} 
	else {
		printf("%.2f-%.2fi",A,B);
	}
	return 0;
}
double fun(double n)//�����������뱣����λС��
{
	int i=0;	
	n=n*1000;
	n=(int)n;
	int j=n;
	if(j<0)
	{
		j=j*-1;
	  
	   if(j%10>=5)
	  {
		i=j+1;
	  }
	    else if(j%10<5)
	        {
	  	       i=j;
	        }
	double  hh=(double)i;
	return -1*(hh/1000);
	}
	else {
		 if(j%10>=5)
	  {
		i=j+1;
	  }
	    else if(j%10<5)
	        {
	  	       i=j;
	        }
	double  hh=(double)i;cout<<hh<<endl;
	return (hh/1000);
	}
} 

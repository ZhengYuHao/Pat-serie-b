#include <iostream>
using namespace std;
/*
����һ���������У����ǿ��Դ��н�ȡ����������ļ���������ΪƬ�Ρ����磬��������{0.1, 0.2, 0.3, 0.4}��
������(0.1) (0.1, 0.2) (0.1, 0.2, 0.3) (0.1, 0.2, 0.3, 0.4) (0.2) (0.2, 0.3) (0.2, 0.3, 0.4) (0.3) 
(0.3, 0.4) (0.4) ��10��Ƭ�Ρ�

�������������У����ȫ��Ƭ�ΰ��������е���֮�͡��籾����10��Ƭ���ܺ���
0.1 + 0.3 + 0.6 + 1.0 + 0.2 + 0.5 + 0.9 + 0.3 + 0.7 + 0.4 = 5.0��

�����ʽ��

�����һ�и���һ��������105��������N����ʾ���������ĸ������ڶ��и���N��������1.0���������������е�����
����Կո�ָ���

�����ʽ��

��һ�����������������Ƭ�ΰ�������֮�ͣ���ȷ��С�����2λ��

����������
4
0.1 0.2 0.3 0.4 
���������
5.00

*/
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	double a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int num=n;
	int yum=1;
	int x,y;
	double counter=0;
	for(x=0,y=n-1;x<=y;x++,y--)
	{  
	    if(x==y)
		{
			if(n==1)
			{
			counter=a[0];
			break;
			}
			counter=counter+a[y]*(y+1)*yum;
			break;
		 } 
		 else if(x<y)
	    { 
	    counter=counter+a[y]*(y+1)*yum;
		counter=counter+a[x]*(x+1)*num;
		num--;
		yum++;
		}
	}
	printf("%0.2f",counter);
	return 0;
}

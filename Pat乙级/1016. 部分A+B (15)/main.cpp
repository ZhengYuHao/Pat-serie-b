#include <iostream>
#include <string>
#include <cmath>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA��
���磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��

�ָ���A��DA��B��DB�����д�������PA + PB��

�����ʽ��

������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��

�����ʽ��

��һ�������PA + PB��ֵ��

��������1��
3862767 6 13530293 3
�������1��
399
��������2��
3862767 1 13530293 8
�������2��
0*/
int main(int argc, char** argv) {
	string A,B;
	char pa,pb;
	cin>>A>>pa>>B>>pb;
	int i=0,j=0;
	int num=0;
	while(A[i]!=NULL)
	{
		if(A[i]==pa)
		num++;
		i++;
	}
	int a=0;
	for(i=0;i<num;i++)
	{
		a=(a*10)+(pa-'0');
	}
	num=0;
	i=0;
	while(B[i]!=NULL)
	{
		if(B[i]==pb)
		num++;
		i++;
	}
	int b=0;
	for(i=0;i<num;i++)
	{
		b=(b*10)+(pb-'0');
	}
	cout<<a+b<<endl;
	return 0;
}

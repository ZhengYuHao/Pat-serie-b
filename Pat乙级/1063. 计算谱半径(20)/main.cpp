#include <iostream>
#include <math.h> 
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
����ѧ�У�����ġ��װ뾶����ָ������ֵ��ģ���ϵ���ȷ�硣����֮�����ڸ�����n�������ռ������ֵ{a1+b1i, ..., an+bni}��
���ǵ�ģΪʵ�����鲿��ƽ���͵Ŀ����������װ뾶���������ģ��

���ڸ���һЩ�����ռ������ֵ��������㲢�����Щ����ֵ���װ뾶��

�����ʽ��

�����һ�и���������N��<= 10000�������������ֵ�ĸ��������N�У�ÿ�и���1������ֵ��ʵ�����鲿������Կո�ָ���
ע�⣺��Ŀ��֤ʵ�����鲿��Ϊ����ֵ������1000��������

�����ʽ��

��һ��������װ뾶���������뱣��С�����2λ��

����������
5
0 1
2 0
-1 0
3 3
0 -3
���������
4.24

*/
int main(int argc, char** argv) {
	int N;cin>>N;
	double a[N][3];
	double Max=0;//�װ뾶 
	for(int i=0;i<N;i++)
	{
		cin>>a[i][0]>>a[i][1];
		a[i][2]=sqrt((a[i][0]*a[i][0]+a[i][1]*a[i][1]));
		if(a[i][2]>Max)
		{
			Max=a[i][2];
		}	
	}
	printf("%.2f",Max);
	return 0;
}

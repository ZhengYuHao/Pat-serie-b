#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
����Ļ���Ҫ��ǳ��򵥣�����N��ʵ�����������ǵ�ƽ��ֵ�������ӵ�����Щ�������ݿ����ǷǷ��ġ�
һ�����Ϸ�����������[-1000��1000]�����ڵ�ʵ����������ྫȷ��С�����2λ���������ƽ��ֵ��ʱ��
���ܰ���Щ�Ƿ������������ڡ�

�����ʽ��

�����һ�и���������N��<=100�������һ�и���N��ʵ�������ּ���һ���ո�ָ���

�����ʽ��

��ÿ���Ƿ����룬��һ���������ERROR: X is not a legal number��������X�����롣�����һ������������
��The average of K numbers is Y��������K�ǺϷ�����ĸ�����Y�����ǵ�ƽ��ֵ����ȷ��С�����2λ��
���ƽ��ֵ�޷����㣬���á�Undefined���滻Y�����KΪ1���������The average of 1 number is Y����

��������1��
7
5 -3.2 aaa 9999 2.3.4 7.123 2.35
�������1��
ERROR: aaa is not a legal number
ERROR: 9999 is not a legal number
ERROR: 2.3.4 is not a legal number
ERROR: 7.123 is not a legal number
The average of 3 numbers is 1.38
��������2��
2
aaa -9999
�������2��
ERROR: aaa is not a legal number
ERROR: -9999 is not a legal number
The average of 0 numbers is Undefined
*/
bool Tel(char *a);//�ж��Ƿ��ǺϷ������� 
int main(int argc, char** argv) {
	int N;cin>>N;
	char a[N][10];//���ڱ����ʼ����
	double sum=0;//���ڱ����ܺ� 
	int counter=0;//���ڱ���������� 
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
		if(Tel(a[i])==true)
		{
			sum=sum+atof(a[i]);
			counter++; 
		}
		else if(Tel(a[i])==false)
		{
			printf("ERROR: %s is not a legal number\n",a[i]);
		}		
	}	 
	if(counter==1)
        printf("The average of 1 number is %.2lf",sum);
    else if(counter==0)
        printf("The average of 0 numbers is Undefined");
    else
        printf("The average of %d numbers is %.2lf",counter,sum/counter);	
	return 0;
}
//======
bool Tel(char *a)//�ж��Ƿ��ǺϷ������� 
{
	int zz=0;
	for(int i=0;i<strlen(a);i++)
	{
		if((*(a+i)<='0'||*(a+i)>='9')&&*(a+i)!='-'&&*(a+i)!='.')//����-��.֮��ķ���ʱ 
		{
			return false;
		}
		if(*(a+i)=='.')
		{
			zz++;
			if(zz>=2||(zz==1&&i==0)||(zz==1&&*(a+0)=='-'&&*(a+1)=='.')||((i+2)<strlen(a)-1))//.�ų���1�����������׵���� 
			return false;
		}
	}
	double j=atof(a);
	if(j<-1000||j>1000)
	return false;
	return true; 
}

#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*����һ�����������У���������p������������е����ֵ��M����Сֵ��m�����M <= m * p���������������������С�

���ڸ�������p��һЩ���������������ѡ�񾡿��ܶ��������һ���������С�

�����ʽ��

�����һ�и�������������N��p������N��<= 105����������������ĸ�����p��<= 109���Ǹ����Ĳ�����
�ڶ��и���N����������ÿ����������109��

�����ʽ��

��һ�������������ѡ����ٸ����������������һ���������С�

����������
10 8
2 3 20 4 5 1 6 7 8 9
���������
8*/
void sort(long int a[],int n);//��ԭʼ���ݽ����ɴ�С������ 
int main(int argc, char** argv) {
	int n,p;
	cin>>n>>p;
	long int a[n];
	for(int i=0;i<n;i++)//��ʼ��ԭʼ���� 
	{
		cin>>a[i];
	}
	sort(a,n);
	long int counter=0;
	long int b[10000]; 
	for(int i=0;i<n;i++)//��С����a[0]��ʼ��ǰ����������������a[n-1]��ʼ�Ӻ���ǰ���� 
	{
		for(int j=n-1;j>=i;j--)
		{
			if(a[i]*p>=a[j])
			{
				b[counter]=j-i+1;
				counter++;
			}
		}
	}
	sort(b,counter);
	cout<<b[counter-1]<<endl;
	return 0;
}
//=========
void sort(long int a[],int n)//��ԭʼ���ݽ����ɴ�С������  
{
	long trem=0;
	for(int i=0;i<n-1;i++)//ð������ 
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				trem=a[j];
				a[j]=a[j+1];
				a[j+1]=trem;
			 } 
		}
	}
}

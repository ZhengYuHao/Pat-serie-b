#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*һ������A�д���N��N>0�����������ڲ�����ʹ�����������ǰ���£�
��ÿ������ѭ��������M��M>=0����λ�ã�
����A�е������ɣ�A0 A1����AN-1���任Ϊ��AN-M ���� AN-1 A0 A1����AN-M-1��
�����M����ѭ��������ǰ���M��λ�ã��������Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����
�����ʽ��ÿ���������һ������������
��1������N ( 1<=N<=100)��M��M>=0������2������N��������֮���ÿո�ָ���
�����ʽ����һ�������ѭ������Mλ�Ժ���������У�֮���ÿո�ָ������н�β�����ж���ո�
����������
6 2
1 2 3 4 5 6
���������
5 6 1 2 3 4*/
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	if(m>n)
	m=m%n;
	int a[n];
	int i,j,term;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		term=a[0];
		for(j=n-1;j>=0;j--)
		{
			a[(j+1)%n]=a[j];			
		}
		a[1]=term;
	}
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		cout<<a[i]<<endl;
		else 
		cout<<a[i]<<" ";
	}	
	return 0;
}

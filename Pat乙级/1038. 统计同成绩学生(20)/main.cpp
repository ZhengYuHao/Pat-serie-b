#include <iostream>
using namespace std;
/*����Ҫ�����N��ѧ���ĳɼ��������ĳһ����������ѧ�����������

�����ʽ��

�����ڵ�1�и���������105��������N����ѧ�������������1�и���N��ѧ���İٷ��������ɼ���
�м��Կո�ָ������1�и���Ҫ��ѯ�ķ�������K��������N�����������������K��������
�м��Կո�ָ���

�����ʽ��

��һ���а���ѯ˳������÷ֵ���ָ��������ѧ���������м��Կո�ָ�������ĩ�����ж���ո�

����������
10
60 75 90 55 75 99 82 90 75 50
3 75 90 88
���������
3 2 0 */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)//��ѧ���ɼ� 
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	int c[m];
	for(int i=0;i<m;i++)//��Ҫ��ѯ��ѧ���ɼ� 
	{
		cin>>b[i]; 
		c[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				c[i]++;
			}
		}
		if(i!=m-1)
		cout<<c[i]<<" ";
		else if(i==m-1)
		cout<<c[i];
	}
	return 0;
}

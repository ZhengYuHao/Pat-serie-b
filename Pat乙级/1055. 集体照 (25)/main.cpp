#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
�ļ�����ʱ���κ���Ҫ������Ը�����N����K�ŵĶ�������Ŷӹ������£�

ÿ������ΪN/K������ȡ���������������ȫ��վ�����һ�ţ�
���������˵ĸ��Ӷ�����ǰ���κ��˰���
ÿ���������վ�м䣨�м�λ��Ϊm/2+1������mΪ������������������ȡ������
ÿ�����������м���Ϊ�ᣬ����߷��������Һ��������վ���м��˵�����
������5�����Ϊ190��188��186��175��170�������Ϊ175��188��190��186��170��
�����������������ߣ��������������м��˵��ұߣ���
�����������ͬ�������ֵ��ֵ����������С����ﱣ֤��������
�ָ���һ�������ˣ����д����������ǵĶ��Ρ�

�����ʽ��

ÿ���������1������������ÿ������������1�и�������������N��<=10000������������K��<=10������������
���N�У�ÿ�и���һ���˵����֣��������ո񡢳��Ȳ�����8��Ӣ����ĸ������ߣ�[30, 300]�����ڵ���������

�����ʽ��

������յĶ��Ρ���K������������Կո�ָ�����ĩ�����ж���ո�ע�⣺��������������ߣ�
���ŵ���������Ϸ���ǰ��������·���

����������
10 3
Tom 188
Mike 170
Eva 168
Tim 160
Joe 190
Ann 168
Bob 175
Nick 186
Amy 160
John 159
���������
Bob Tom Joe Nick
Ann Mike Eva
Tim Amy John
*/
void sort(int a[],string b[],int n);//�Լ������߽������� 
int main(int argc, char** argv) {
	int N,K;
	cin>>N>>K;//��ʼ��
	string name[N];
	int tall[N];//���ڱ��� 
	for(int i=0;i<N;i++)
	{
		cin>>name[i]>>tall[i];
	 }
	 sort(tall,name,N);//��������
	 int people=N/K;//û�ŵ�����
	 int last=people+(N%K); //���һ�ŵ����� 
	 string sum[last];
	 int mid;
	 int counter=0;//���ڱ��������±� 
	 int st=0;	
	for(int j=0;j<K;j++)
	{
		st=0;
	 	if(j==0)//������һ�� 
	 	{
	 		if(last%2==0)
			 {
			 mid=(last/2);
			 sum[mid]=name[counter];
			 counter++;
			 st++;
			 for(int i=1;i<=mid;i++)
			 {
			 	sum[mid-i]=name[counter];
			 	counter++;
			 	 st++;
			 	if(mid-i==0)
			 	break;
			 	sum[mid+i]=name[counter];
			 	counter++;
			 	 st++;
			 }	
			  } 
			  else {
			  	mid=last/2;
			 sum[mid]=name[counter];
			 counter++;
			  st++;
			 for(int i=1;i<=mid;i++)
			 {
			 	sum[mid-i]=name[counter];
			 	counter++;
			 	st++;
			 	sum[mid+i]=name[counter];
			 	counter++;
			 	 st++;
			 }	
			  }	
			  
		}
		else//���һ��֮��������� 
		{
			if(people%2==0)
			 {
			 mid=people/2;
			 sum[mid]=name[counter];
			 counter++;
			 st++;
			 for(int i=1;i<=mid;i++)
			 {
			 	sum[mid-i]=name[counter];
			 	counter++;
			 	 st++;
			 	if(mid-i==0)
			 	break;
			 	sum[mid+i]=name[counter];
			 	counter++;
			 	 st++;
			 }	
			  } 
			  else {
			  	mid=people/2;
			 sum[mid]=name[counter];
			 counter++;
			  st++;
			 for(int i=1;i<=mid;i++)
			 {
			 	sum[mid-i]=name[counter];
			 	counter++;
			 	st++;
			 	sum[mid+i]=name[counter];
			 	counter++;
			 	 st++;
			 }	
			  }		
		} 
		for(int i=0;i<st;i++)
		{
			if(i!=st-1)
			cout<<sum[i]<<" ";
			else
			cout<<sum[i]<<endl;
		 } 
	}
	return 0;
}
//=======
void sort(int a[],string b[],int n)//�Լ������߽������� (ð������)
{
	string x=b[0];
	int y=a[0];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				x=b[j+1];
				y=a[j+1];
				b[j+1]=b[j];
				a[j+1]=a[j];
				b[j]=x;
				a[j]=y;
			}
			else if(a[j]==a[j+1]) 
			{
				if(b[j][0]>b[j+1][0])
				{
				x=b[j+1];
				y=a[j+1];
				b[j+1]=b[j];
				a[j+1]=a[j];
				b[j]=x;
				a[j]=y;
				}
			}
		}
	}
}

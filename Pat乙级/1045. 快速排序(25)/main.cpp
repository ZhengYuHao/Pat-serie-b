#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*�����Ŀ��������㷨����һ������Ļ��ֹ��̣�����ͨ������ĳ�ַ���ȡһ��Ԫ����Ϊ��Ԫ��ͨ��������
�ѱ���ԪС��Ԫ�طŵ�������ߣ�����Ԫ���Ԫ�طŵ������ұߡ� �������ֺ��N��������ͬ�������������У�
�����ж��ٸ�Ԫ�ؿ����ǻ���ǰѡȡ����Ԫ��

�������N = 5, ������1��3��2��4��5����

1�����û��Ԫ�أ��ұߵ�Ԫ�ض���������������������Ԫ��
����3�����Ԫ�ض�����С���������ұߵ�2��С����������������Ԫ��
����2���ұ�Ԫ�ض������󣬵�����ߵ�3��������������������Ԫ��
����ԭ��4��5����������Ԫ��
��ˣ���3��Ԫ�ؿ�������Ԫ��

�����ʽ��

�����ڵ�1���и���һ��������N��<= 105���� ��2���ǿո�ָ���N����ͬ����������ÿ����������109��

�����ʽ��

�ڵ�1��������п�������Ԫ��Ԫ�ظ������ڵ�2���а�����˳�������ЩԪ�أ������1���ո�ָ�����ĩ�����ж���ո�

����������
5
1 3 2 4 5
���������
3
1 4 5
*/
int min(int a[],int now,int n);//����Сֵ
int max(int a[],int now);//�����ֵ 
int main(int argc, char** argv) {
	int counter=0;//��¼һ������������Ա
	
	int n;cin>>n;//һ��������
	int a[n];
	int c[n];
	for(int i=0;i<n;i++)//��ʼ�� 
	{
		cin>>a[i];
	 } 
	 for(int i=0;i<n;i++)//�ж��Ƿ�Ϊ��Ա 
	 {
	 	if(i==0)//��һ��Ԫ�� 
	 	{
	 		if(a[i]<min(a,i,n))
	 		{
	 			c[counter]=a[i];
	 			counter++;
			 }
		 }
		 else if(i==n-1)//���һ��Ԫ�� 
		 {
		 	if(a[i]>max(a,i))
	 		{
	 			c[counter]=a[i];
	 			counter++;
			 }
		  } 
		  else //����Ԫ�� 
		  {
		  		if(a[i]>max(a,i)&&a[i]<min(a,i,n))
		  		{
		  			c[counter]=a[i];
	 			    counter++;
		  			
				  }
		  }
	  } 
	  cout<<counter<<endl;
	  for(int i=0;i<counter;i++)
	  {
	  	if(i==counter-1)
	  	{
	  		cout<<c[i];
			  break; 
		  }
	  	cout<<c[i]<<" ";
	  }
	return 0;
}
int min(int a[],int now,int n)//����Сֵ
{
	int min=a[now+1];
	for(int i=now+1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		
	}
    return min;
} 
int max(int a[],int now)//�����ֵ 
{
	int max=a[0];
	for(int i=0;i<now;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;

}

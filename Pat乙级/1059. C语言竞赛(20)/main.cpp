#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
C���Ծ������㽭��ѧ�����ѧԺ���ֵ�һ�����ֵľ�������Ȼ������ּ��Ϊ�˺��棬�佱����Ҳ���ƶ��úܻ�����

0. �ھ���Ӯ��һ�ݡ����ش󽱡�������ܾ޴��һ��ѧ���о����ļ���������
1. ����Ϊ������ѧ����Ӯ����õĽ�Ʒ ���� С������ż��
2. �����˽��õ��ɿ�����

�������������������Լ�һϵ�в����ߵ�ID����Ҫ������Щ������Ӧ�û�õĽ�Ʒ��

�����ʽ��

�����һ�и���һ��������N��<=10000�����ǲ��������������N�и�������������
ÿ�а�����˳�����һλ�����ߵ�ID��4λ������ɣ�������������һ��������K�Լ�K����Ҫ��ѯ��ID��

�����ʽ��

��ÿ��Ҫ��ѯ��ID����һ���������ID: ��Ʒ�������н�Ʒ�����ǡ�Mystery Award��
�����ش󽱣��������ǡ�Minion����С���ˣ��������ǡ�Chocolate�����ɿ�������
�������ID���������������ӡ��Are you kidding?����ˣ���أ�����
�����ID�Ѿ�����ˣ�����Ʒ�Ѿ�����ˣ�����ӡ��ID: Checked�������ܶ�Զ�ռ����

����������
6
1111
6666
8888
1234
5555
0001
6
8888
0001
1111
2222
8888
2222
���������
8888: Minion
0001: Chocolate
1111: Mystery Award
2222: Are you kidding?
8888: Checked
2222: Are you kidding?
*/ 
bool Tel(int N);//�ж��Ƿ������� 
int main(int argc, char** argv) {
	int N;cin>>N;
	int a[10003][2];//���ڱ���ѧ���ɼ��Լ��ж��Ƿ��Ѿ���ȡ����Ʒ
	int term;
	for(int i=0;i<N;i++)//��ʼ��ѧ���ɼ� 
	{
		cin>>term;
		a[term][0]=i+1;
	 }
	 int M;cin>>M;
	 int b[M];
	 for(int i=0;i<M;i++)
	 {
	 	cin>>b[i];
	  } 
	 for(int i=0;i<M;i++)
	 {
	 	if(a[b[i]][0]==0)//�����ڸ�ѧ�� 
	 	{
	 		printf("%04d",b[i]);
	 		cout<<':'<<" "<<"Are you kidding?"<<endl;
		 }
	 	else if(a[b[i]][1]==1)//����� 
	 	{
	 		printf("%04d",b[i]);
	 		cout<<':'<<" "<<"Checked"<<endl;
		 }
	 	else if(a[b[i]][1]!=1&&a[b[i]][0]!=0)//û������� 
	 	{
	 		if(a[b[i]][0]==1)//��һ�� 
	 		{
	 			printf("%04d",b[i]);
	 		    cout<<':'<<" "<<"Mystery Award"<<endl;
	 		    a[b[i]][1]=1;			 
				 }
			 else if(Tel(a[b[i]][0])==true) 
			 {
			 	printf("%04d",b[i]);
	 		    cout<<':'<<" "<<"Minion"<<endl;
	 		    a[b[i]][1]=1;	
			 }
			 else 
			 {
			 	printf("%04d",b[i]);
	 		    cout<<':'<<" "<<"Chocolate"<<endl;
	 		    a[b[i]][1]=1;
			 }
	 		
		 }
	  } 	
	return 0;
} 
//=======
bool Tel(int N)//�ж��Ƿ������� 
{
	int l=N/2;
	for(int i=2;i<l;i++)
	{
		if(N%i==0)
		return false;
	}
	if(N<=1)
	return false;
	return true;
}

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
���Ķ�ѡ���ǱȽ��鷳�����飬���������д�����������ʦ���Ķ�ѡ�⣬����ָ���ĵ���������ࡣ

�����ʽ��

�����ڵ�һ�и�������������N��<=1000����M��<=100�����ֱ���ѧ�������Ͷ�ѡ��ĸ��������M�У�
ÿ��˳�θ���һ���������ֵ��������5������������ѡ�������������2�Ҳ�����5������������

�����ʽ��

���������˳�����ÿ��ѧ���ĵ÷֣�ÿ������ռһ�С�ע������ʱֻ��ѡ��ȫ����ȷ���ܵõ�����ķ�����
���һ��������������Ŀ�Ĵ�������ͱ�ţ���Ŀ���������˳���1��ʼ��ţ���
����в��У��򰴱�ŵ���˳����������ּ��ÿո�ָ�������β�����ж���ո�
���������Ŀ��û���˴��������һ�������Too simple����

����������
3 4 
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c)
(2 b d)
(2 a c)
(3 a b e)
(2 a c)
(1 b)
(2 a b)
(4 a b d e)
(2 b d)
(1 e)
(2 b c)
(4 a b c d)

3 4 
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c) (2 b d) (2 a c) (3 a b e)
(2 a c) (1 b) (2 a b) (4 a b d e)
(2 b d) (1 e) (2 b c) (4 a b c d)
���������
3
6
5
2 2 3 4

*/ 
int main(int argc, char** argv) {
	int N,M;
	cin>>N>>M;
	char anw[N][M][200];//���ڱ���ѧ���������
	char que[M][200];//���ڱ���ÿ�������Ϣ
	for(int i=0;i<M;i++)//��ʼ�� 
	{	
	    fflush(stdin);
		gets(que[i]);
	
	 } 
	 for(int i=0;i<N;i++)//��ʼ�� 
	 {
	 	for(int j=0;j<M;j++)
	 	{
		    fflush(stdin);
	 		gets(anw[i][j]);
	 		
		 }
	 }
	 int score=0;//ѧ���ķ���
	 int tel=0;//�����ж��Ƿ�ȫ��
	 vector <int> ivec;
	 int telN[M];//���ڱ���ÿ�������Ĵ���
	 memset(telN,0,sizeof(telN[M]));
	 int zz=0;
	 for(int i=0;i<N;i++)
	 {
	 	for(int j=0;j<M;j++)
		 {
	 		if(que[j][4]==anw[i][j][1])//�жϴ��Ƿ���ȷ 
	 		{
	 			
	 			int f=0;
	 			for(int k=1;k<=(que[j][4]-'0');k++)
	 			{
	 				if(que[j][4+(k*2)]==anw[i][j][1+(k*2)])
	 				{
	 					f++;
	 				tel++; 
					 }	 
				 } 
				 if(f==(que[j][4]-'0'))
				 score=score+(que[j][0]-'0');
				 else
					 {
					 	telN[j]++;
					 }	
			 }
			 else if(que[j][4]!=anw[i][j][1])
			 {
			 	telN[j]++;
			 }
		 }
		 cout<<score<<endl;
		 score=0;
	 }
	 int max=telN[0];
	 for(int i=0;i<M;i++)
	 {
	 	if(max<telN[i])
		 max=telN[i]; 
	 }
	 cout<<max;
	 for(int i=0;i<M;i++)
	 {
	 	if(telN[i]==max)
	 	cout<<' '<<i+1;
	 }
	return 0;
}

#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
����һ������K�Լ�һ��������L�����д����L��ÿK����㷴ת��
���磺����LΪ1��2��3��4��5��6��KΪ3�������Ӧ��Ϊ3��2��1��6��5��4��
���KΪ4�������Ӧ��Ϊ4��3��2��1��5��6������󲻵�K��Ԫ�ز���ת��

�����ʽ��

ÿ���������1������������ÿ������������1�и�����1�����ĵ�ַ��
����ܸ���������N(<= 105)���Լ�������K(<=N)����Ҫ��ת���������ĸ�����
���ĵ�ַ��5λ�Ǹ�������NULL��ַ��-1��ʾ��

��������N�У�ÿ�и�ʽΪ��

Address Data Next

����Address�ǽ���ַ��Data�Ǹý�㱣����������ݣ�Next����һ���ĵ�ַ��

�����ʽ��

��ÿ������������˳�������ת�����������ÿ�����ռһ�У���ʽ��������ͬ��

����������
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
���������
00000 4 33218
33218 3 12309
12309 2 00100
00100 1 99999
99999 5 68237
68237 6 -1
*/
int main(int argc, char** argv) {
	int FirstAddress,N,K;
	cin>>FirstAddress>>N>>K;//��ʼ����һ����Ϣ
	int node,tail; 
	int FirstArry[100000][2];
	for(int i=0;i<N;i++)//��ʼ���������� 
	{
		cin>>node;cin>>FirstArry[node][0]>>FirstArry[node][1];
		//cout<<node<<"  "<<FirstArry[node][0]<<" "<<FirstArry[node][1]<<endl;
	}
	tail=FirstAddress;
	int SecondArry[N][3];
	for(int i=0;i<N;i++)//���������� 
	{
		if(tail==-1)
		break;
		SecondArry[i][0]=tail;
		SecondArry[i][1]=FirstArry[tail][0];
		SecondArry[i][2]=FirstArry[tail][1];
		tail=FirstArry[tail][1];		 	
	}
	/*for(int i=0;i<N;i++)
	{
	printf("%.5d %.5d %.5d\n",SecondArry[i][0],SecondArry[i][1],SecondArry[i][2]);
	//cout<<SecondArry[i][0]<<"  "<<SecondArry[i][1]<<" "<<SecondArry[i][2]<<endl;
	}*/ 
	int num=N;//numΪʣ���ת���� 
	int ThirdArry[N][3];
	int Numble=0; 
	while(true)//��ת����������K 
	{
		if(num>=K)
		{
			int counter=0;
		tail=SecondArry[K+Numble-1][2];
	    for(int i=Numble;i<K+Numble;i++)
	    {
	    	ThirdArry[i][0]=SecondArry[K+Numble-1-counter][0];
	    	ThirdArry[i][1]=SecondArry[K+Numble-1-counter][1];
	    	if((K+Numble-1-1-counter)>=Numble)
	    	ThirdArry[i][2]=SecondArry[K+Numble-2-counter][0];
	    	else 
	    	ThirdArry[i][2]=tail;
	    	counter++;
		}
		num=num-K;
		Numble=Numble+K;
		}
		else if(num<K)
		{
			for(int i=Numble;i<N;i++)
			{
				ThirdArry[i][0]=SecondArry[i][0];
	    	    ThirdArry[i][1]=SecondArry[i][1];
	    	    ThirdArry[i][2]=SecondArry[i][2];
			}
			break;
		}
	}	
	for(int i=0;i<N;i++)
	{
		if(ThirdArry[i][2]!=-1)
	        printf("%.5d %d %.5d\n",ThirdArry[i][0],ThirdArry[i][1],ThirdArry[i][2]);
	//cout<<SecondArry[i][0]<<"  "<<SecondArry[i][1]<<" "<<SecondArry[i][2]<<endl;
	    else if(ThirdArry[i][2]=-1)
	    {
	    	printf("%.5d %d %d\n",ThirdArry[i][0],ThirdArry[i][1],ThirdArry[i][2]);
		}
	}
	return 0;
}

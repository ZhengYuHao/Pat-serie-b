#include <iostream>
#include <string.h>
#include <vector>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
С��PAT�������֣�����֮���������΢��ת���齱�����ת���������а�˳��ÿ��N���˾ͷ���һ�������
�����д���������ȷ���н�������

�����ʽ��

�����һ�и�������������M��<= 1000����N��S���ֱ���ת����������С���������н������
�Լ���һλ�н��ߵ���ţ���Ŵ�1��ʼ�������M�У�˳�����ת��΢�������ѵ��ǳƣ�������20���ַ����������ո�س��ķǿ��ַ�������

ע�⣺��������ת����Σ��������н���Ρ�����������ڵ�ǰ�н�λ�õ������Ѿ��й�������������˳��ȡ��һλ��

�����ʽ��

���������˳������н�������ÿ���ǳ�ռһ�С����û�����н����������Keep going...����

��������1��
9 3 2
Imgonnawin!
PickMe
PickMeMeMeee
LookHere
Imgonnawin!
TryAgainAgain
TryAgainAgain
Imgonnawin!
TryAgainAgain
�������1��
PickMe
Imgonnawin!
TryAgainAgain
��������2��
2 3 5
Imgonnawin!
PickMe
�������2��
Keep going...
*/
int main(int argc, char** argv) {
	int M,N,S;//��ʼ���������� 
	cin>>M>>N>>S;
	string str[M];
	vector <string> ivec;
	for(int i=0;i<M;i++)
	{
		cin>>str[i];
	 } 	 
	 for(int i=S-1;i<M;i=i+N)
	 {
	 	int num2=ivec.size();
	 	loop:;
	 	for(int j=0;j<num2;j++)
	 	{
	 		if(str[i]==ivec[j])
	 		{
	 			i=i+1;
	 		goto loop;
			 }
		 }
	 	 ivec.push_back(str[i]);
	 }
	 int num=ivec.size();
	 if(num==0)
	 {
	 	cout<<"Keep going...";
	 }
	 else if(num!=0)
	 {
	 	for(int i=0;i<num;i++)
	 	{
	 		if(i!=num-1)
	 		{
	 			cout<<ivec[i]<<endl;
			 }
	 		else if(i==num-1)
	 		{
	 			cout<<ivec[i];
			 }
		 }
	 }
	return 0;
}

#include <iostream>
#include <string.h>
using namespace std; 
static int j;//���ڼ��㻹ʣ���ٸ�����û��ʹ�� 
int GetNum(int n);//�õ�ͼ�������ٸ�ͼ�� 
int main(int argc, char** argv) {
	int num;
	string letter;
	cin>>num>>letter;
	int x=GetNum((num-1)/2);//�õ��88����ٸ���ĸ
	int sum=2*j+1;//һ�����˶��ٸ���ĸ 
	int y=x;
	int u=0;
	while(y>0)
	{
		for(int i=0;i<u;i++)//���ڿ���ÿһ��ͼ��ǰ��Ŀո�
		{
			cout<<' ';
		 }
		 for(int i=0;i<y;i++)
		 {
		 	cout<<letter;
		 }
		 cout<<endl;
		 y=y-2;
		 u++;
	 }
	 y=3;
	 u=u-1;
	 while(y<=x)
	{
	    u--;
		for(int i=0;i<u;i++)//���ڿ���ÿһ��ͼ��ǰ��Ŀո�
		{
			cout<<' ';
		 }
		 for(int i=0;i<y;i++)
		 {
		 	cout<<letter;
		 }
		 cout<<endl;
		 y=y+2;
		 
	 }
	 if(j!=0)  
	 cout<<num-sum<<endl;
	return 0;
}
int GetNum(int n)//�õ�ͼ�������ٸ�ͼ�� 
{
	int i=3;
	j=0;
	while(j<=n){
		if(j+i<=n)
		j=j+i;
		else break;
		i=i+2;
	};
	if(j!=0)
	return i-2;
	else return 0;	
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
�������������λ���ֵĺ���һ���ģ��򱻳�Ϊ�ǡ��������������Ǹ������ĺ;������ǵġ�����֤�š���
����123��51��������������Ϊ1+2+3 = 5+1 = 6����6�������ǵ�����֤�š�����һЩ������
Ҫ����ͳ��һ���������ж��ٸ���ͬ������֤�š�ע�⣺����Ĭ��һ�������Լ����Լ������ѡ�

�����ʽ��

�����һ�и���������N�����һ�и���N�������������ּ��Կո�ָ�����Ŀ��֤��������С��104��

�����ʽ��

���ȵ�һ��������������в�ͬ������֤�ŵĸ��������һ�а�����˳�������Щ����֤�ţ����ּ��һ���ո�����ĩ�����ж���ո�

����������
8
123 899 51 998 27 33 36 12
123 899 51 998 27 33 36 12
���������
4
3 6 9 26
*/
int GetNum(int n);//���ظ�λ֮�� 
int main(int argc, char** argv) {
	int N;cin>>N;
	int a[N][2];
	vector <int> ivec;
	int num=0;
	for(int i=0;i<N;i++)
	{
		cin>>a[i][0];
		a[i][1]=9; 
		if(a[i][0]<0)//���Ϊ���� 
		{
			a[i][0]=-a[i][0];
		}
	}
	for(int i=0;i<N;i++)
	{
	  num=0;
	  if(a[i][1]==9)//ȷ�����ظ�����
	  {	
	     for(int j=i;j<N;j++)
		   {
		       //cout<<GetNum(a[i][0])<<" "<<GetNum(a[j][0])<<endl;
				if(GetNum(a[i][0])==GetNum(a[j][0]))
				{	
					num++;
					a[j][1]=1; 
				 } 
			}
	}
		if(num!=0)
		ivec.push_back(GetNum(a[i][0]));	
	}
	cout<<ivec.size()<<endl;
	int M=ivec.size();
	sort(ivec.begin(),ivec.end());
	for (vector<int>::size_type   ix = 0; ix != ivec.size(); ++ix)
	{
		if(ix==0)
		cout<<ivec[ix]; 
		else if(ix!=0)
		{
			cout<<" "<<ivec[ix];
		}
	}
	
	return 0;
}
int GetNum(int n)//���ظ�λ֮��
{
	int a1,a2,a3,a4;//��ʮ��ǧλ 
	a1=n/1000;
	a2=n/100-(a1*10);
	a3=n/10-(a1*100)-(a2*10);
	a4=n-(a1*1000)-(a2*100)-(a3*10);
	//cout<<n<<" "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a1+a2+a3+a4<<endl;
	//cout<<a1+a2+a3+a4<<endl;
	return (a1+a2+a3+a4);
} 

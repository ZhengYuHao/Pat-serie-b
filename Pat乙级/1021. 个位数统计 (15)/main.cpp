#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*����һ��kλ����N = dk-1*10k-1 + ... + d1*101 + d0 (0<=di<=9, i=0,...,k-1, dk-1>0)��
���д����ͳ��ÿ�ֲ�ͬ�ĸ�λ���ֳ��ֵĴ��������磺����N = 100311������2��0��3��1����1��3��

�����ʽ��

ÿ���������1��������������һ��������1000λ��������N��

�����ʽ��

��N��ÿһ�ֲ�ͬ�ĸ�λ���֣���D:M�ĸ�ʽ��һ���������λ����D������N�г��ֵĴ���M��Ҫ��D�����������

����������
100311
���������
0:2
1:3
3:1*/
int main(int argc, char** argv) {
	string str;
	cin>>str;
	int a[10][2]={0,0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0};
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='0')
		    a[0][1]++;
		    else if(str[i]=='1')
		         a[1][1]++;
		        else if(str[i]=='2')
		             a[2][1]++;
		             else if(str[i]=='3')
		                   a[3][1]++;
		                  else if(str[i]=='4')
		                      a[4][1]++;
		                      else if(str[i]=='5')
		                            a[5][1]++;
		                           else if(str[i]=='6')
		                               a[6][1]++;
		                                 else if(str[i]=='7')
		                                       a[7][1]++;
		                                       else if(str[i]=='8')
		                                            a[8][1]++;
		                                            else if(str[i]=='9')
		                                                   a[9][1]++;
	}
	for(int i=0;i<10;i++)
	{
		if(a[i][1]>0)
		{
			cout<<a[i][0]<<":"<<a[i][1]<<endl;
		}
	}
	return 0;
}

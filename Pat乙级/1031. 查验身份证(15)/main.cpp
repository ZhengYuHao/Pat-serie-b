#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
һ���Ϸ������֤������17λ���������ڱ�ź�˳���ż�1λУ������ɡ�У����ļ���������£�

���ȶ�ǰ17λ���ּ�Ȩ��ͣ�Ȩ�ط���Ϊ��{7��9��10��5��8��4��2��1��6��3��7��9��10��5��8��4��2}��
Ȼ�󽫼���ĺͶ�11ȡģ�õ�ֵZ����������¹�ϵ��ӦZֵ��У����M��ֵ��

Z��0 1 2 3 4 5 6 7 8 9 10
M��1 0 X 9 8 7 6 5 4 3 2

���ڸ���һЩ���֤���룬������֤У�������Ч�ԣ������������ĺ��롣

�����ʽ��

�����һ�и���������N��<= 100������������֤����ĸ��������N�У�ÿ�и���1��18λ���֤���롣

�����ʽ��

���������˳��ÿ�����1������������֤���롣���ﲢ������ǰ17λ�Ƿ����
ֻ���ǰ17λ�Ƿ�ȫΪ���������1λУ�������׼ȷ��������к��붼�������������All passed����

��������1��
4
320124198808240056
12010X198901011234
110108196711301866
37070419881216001X
�������1��
12010X198901011234
110108196711301866
37070419881216001X
��������2��
2
320124198808240056
110108196711301862
�������2��
All passed
*/
bool Tell(string s);//�����ж����֤�Ƿ���� 
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int counter=0;
	string str[n];
	for(int i=0;i<n;i++)//������ʼ���֤���� 
	{
		cin>>str[i];
	}
	for(int i=0;i<n;i++)
	{
		if(Tell(str[i])==false)
		cout<<str[i]<<endl;
		else if(Tell(str[i])==true)
		counter++;
	 } 
	 if(counter==n)
	 cout<<"All passed"<<endl;
	return 0;
}
//=====
bool Tell(string s)//�����ж����֤�Ƿ���� 
{
	for(int i=0;i<17;i++)
	{
		if(s[i]-'0'<0||s[i]-'0'>9)
		return false;
	}
	int sum=((s[0]-'0')*7+(s[1]-'0')*9+(s[2]-'0')*10+(s[3]-'0')*5+(s[4]-'0')*8+(s[5]-'0')*4+(s[6]-'0')*2+(s[7]-'0')*1+(s[8]-'0')*6+(s[9]-'0')*3+(s[10]-'0')*7+(s[11]-'0')*9+(s[12]-'0')*10+(s[13]-'0')*5+(s[14]-'0')*8+(s[15]-'0')*4+(s[16]-'0')*2);
	int index=sum%11;
	char counter;
	if(index==0)
	{
		counter=1+'0';
	}
	         else if(index==1)
	                {
	                counter=0+'0';	
	                }
	                else if(index==2)
	                     {
	                     	counter='X';
	                     }
	                      else if(index==3)
	                           {
	                           	counter=9+'0';
	                             }
	                             else if(index==4)
	                                   {
	                                   	counter=8+'0';
	                                   }
	                                else if(index==5)
	                                   {
	                                   	counter=7+'0';
                                      	}
	                                    else if(index==6)
	                                          {
	                                          	counter=6+'0';
	                                          }
	                                       else if(index==7)
	                                               {
	                                               	counter=5+'0';
	                                              }
	                                            else if(index==8)
	                                                {
	                                                	counter=4+'0';
	                                                }
	                                                  else if(index==9)
	                                                      {
	                                                      	counter=3+'0';
	                                                       }
	                                                       else if(index==10)
	                                                            {
	                                                            	counter=2+'0';
	                                                            }
	if(counter==s[17]) 
	return true;                                                           
 } 

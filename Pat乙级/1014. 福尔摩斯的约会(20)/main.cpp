#include <iostream>
#include <string>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*����̽����Ħ˹�ӵ�һ����ֵ�������������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm����
����̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�䡰������ 14:04����
��Ϊǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ�4����ĸ'D'��
���������ģ���2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ������һ����ĵ�14����ͷ
������һ���0�㵽23��������0��9���Լ���д��ĸA��N��ʾ����
�������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ�
�����4���ӡ��ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣

�����ʽ��

������4���зֱ����4���ǿա��������ո��ҳ��Ȳ�����60���ַ�����

�����ʽ��

��һ�������Լ���ʱ�䣬��ʽΪ��DAY HH:MM�������С�DAY����ĳ���ڵ�3�ַ���д��
��MON��ʾ����һ��TUE��ʾ���ڶ���WED��ʾ��������
THU��ʾ�����ģ�FRI��ʾ�����壬SAT��ʾ��������SUN��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣

����������
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm
���������
THU 14:04*/
int main(int argc, char** argv) {
	string str[4]; 
		int i,j;
		char week='Z';
		char hour='Z';
		int minute=0;
	for(i=0;i<4;i++)
	{
		cin>>str[i];
	}
	i=0;
	j=0;
	while(str[0][i]!=NULL&&str[1][i]!=NULL)//������ں�Сʱ; 
	{
	   if(j==0&&str[0][i]==str[1][i]&&str[1][i]>=65&&str[1][i]<=71)
	   {
	   week=str[1][i];
	   j++;
	   }
	   if(week!='Z'&&str[0][i]==str[1][i])
	   {
	   	if((str[1][i]>=65&&str[1][i]<=78)||(str[1][i]>=48&&str[1][i]<=57))
	   	 hour=str[1][i]; 
	   } 
		i++;
	}
	i=0;
	while(str[2][i]!=NULL&&str[3][i]!=NULL)//��÷���; 
	{
		if(str[2][i]==str[3][i]&&((str[1][i]>=65&&str[1][i]<=90)||(str[1][i]>=97&&str[1][i]<=122)))
		minute=i;
		i++;
	}
	{//������� 
	if(week=='A')
	   cout<<"MON ";
	else if(week=='B')
	     cout<<"Tue ";
	     else if(week=='C')
	          cout<<"WED ";
	          else if(week=='D')
	               cout<<"THU ";
	               else if(week=='E')
	                     cout<<"FRI ";
	                     else if(week=='F')
	                          cout<<"SAT ";
	                           else if(week=='G')
	                                cout<<"SUN ";
   }
   {//���Сʱ 
   	if(hour>=48&&hour<=57)
   	cout<<'0'<<hour<<':';
   	else cout<<hour-55<<':';
   }
	 
	 {//������� 
	 if(minute<10)
	 cout<<'0'<<minute;
	 else cout<<minute;
	 }                         
	return 0;
}

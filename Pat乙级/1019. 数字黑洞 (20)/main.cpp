#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*������һ����λ���ֲ���ȫ��ͬ��4λ����������������Ȱ�4�����ְ��ǵ�������
�ٰ��ǵݼ�����Ȼ���õ�1�����ּ���2�����֣����õ�һ���µ����֡�
һֱ�ظ������������Ǻܿ��ͣ���С����ֺڶ���֮�Ƶ�6174��������������Ҳ��Kaprekar������

���磬���Ǵ�6767��ʼ�����õ�

7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...

�ָ�������4λ�����������д������ʾ����ڶ��Ĺ��̡�

�����ʽ��

�������һ��(0, 10000)�����ڵ�������N��

�����ʽ��

���N��4λ����ȫ��ȣ�����һ���������N - N = 0000����
���򽫼����ÿһ����һ���������ֱ��6174��Ϊ����֣������ʽ��������ע��ÿ�����ְ�4λ����ʽ�����

��������1��
6767
�������1��
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
��������2��
2222
�������2��
2222 - 2222 = 0000*/
//=====
int set(char *str);//ʵ�ֽ��ĸ���ֵ��ϳ�һ���� 
//========
char *setBack(int cout);//������ת�����ַ�����
//======== 
int sortMax(char *str);//ʵ���ɴ�С����
//========
int sortMin(char *str);//ʵ����С��������
//======== 
int main(int argc, char** argv) {
	char str[4];
	for(int i=0;i<4;i++)//�����ʼֵ 
	{
		cin>>str[i];
	}
	char *z=str;
	if(str[0]==str[1]&&str[1]==str[2]&&str[2]==str[3]) 
	cout<<set(str)<<" - "<<set(str)<<" = 0000"<<endl;
	else if(set(z)==6174) 
	{
		cout<<setBack(sortMax(z))<<" - "<<setBack(sortMin(z))<<" = "<<setBack(sortMax(z)-sortMin(z))<<endl;
	}
	else while(set(z)!=6174)
	{
		cout<<setBack(sortMax(z))<<" - "<<setBack(sortMin(z))<<" = "<<setBack(sortMax(z)-sortMin(z))<<endl;
		z=setBack(sortMax(z)-sortMin(z));
	}
	return 0;
}
//========
int set(char *str)//ʵ�ֽ��ĸ���ֵ��ϳ�һ���� 
{
	int cout=0;
	cout=(str[0]-'0')*1000+(str[1]-'0')*100+(str[2]-'0')*10+(str[3]-'0'); 
	return cout;
}
//============
char *setBack(int cou)//������ת�����ַ�����
{
	char *str=new char[4]; 
	str[3]=cou%10+48;
	str[2]=(cou%100-(str[3]-48))/10+48;
	str[1]=(cou%1000-(str[2]-48)*10-(str[3]-48))/100+48;
	str[0]=(cou-(str[1]-48)*100-(str[2]-48)*10-(str[3]-48))/1000+48;//<<str[1]<<str[2]<<str[3]<<endl
    return str;
}
//=========== 
int sortMax(char *str)//ʵ���ɴ�С����
{
	char term;
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(str[i]<str[j])
			{
				term=str[i];
				str[i]=str[j];
				str[j]=term;
							}
		}
	}
	return set(str);
}
//========
int sortMin(char *str)//ʵ����С��������
{
	char term;
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(str[i]>str[j])
			{
				term=str[i];
				str[i]=str[j];
				str[j]=term;
							}
		}
	}
	return set(str);
}

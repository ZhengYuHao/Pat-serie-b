#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
���д�����ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ��

�����ʽ��

������һ���и���һ�����Ȳ�����1000���ַ������ַ�����ASCII���������ɼ��ַ����ո���ɣ����ٰ���1��Ӣ����ĸ��
�Իس��������س��������ڣ���

�����ʽ��

��һ�����������Ƶ����ߵ��Ǹ�Ӣ����ĸ������ִ���������Կո�ָ�������в��У����������ĸ����С���Ǹ���ĸ��
ͳ��ʱ�����ִ�Сд�����Сд��ĸ��

����������
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
���������
e 7
*/
int main(int argc, char** argv) {
	char a[1000];
	char *str=a;
	gets(str);
	int num[128]={0};
	int i;
	while(*str!='\0')
	{
		i=*str;
		if(i>=65&&i<=90)
		{
			num[i+32]++;
		}
		else num[i]++;
		str++;
	 } 
	 int node=97;
	 int sum=num[97];
	for(i=97;i<122;i++)
	{
		if(sum<num[i])
		{
			node=i;
			sum=num[i];
		}
	}
	cout<<(char)node<<" "<<sum;
	return 0;
}
  

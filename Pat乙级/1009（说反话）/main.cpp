#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������
�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ�����
�ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ�����
����֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�
�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�
����������
Hello World Here I Come
���������
Come I Here World Hello
*/
int main(int argc, char** argv) {
	char a[100];//���ڴ��������ַ���
	gets(a);
	int n=0;
	char b[100][100];
	int i=0,j=0;
	while(a[n]!='\0')
	{
		if(a[n]!=32)
		{
		b[i][j]=a[n];
		j++;
		}
		else if(a[n]==32)
		{
			i++;
			j=0;
		}
		n++;		
	}
	for(j=i;j>=0;j--)
	{
		//cout<<b[j][0]<<endl; 
		//printf("%s",b[j]);
		//cout<<b[j];
		if(j==0)
		cout<<b[j];
		else
		cout<<b[j]<<" ";
	}
	
	
	return 0;
}

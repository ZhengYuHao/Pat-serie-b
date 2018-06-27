#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。
字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，
单词之间用1个空格分开，输入保证句子末尾没有多余的空格。
输出格式：每个测试用例的输出占一行，输出倒序后的句子。
输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/
int main(int argc, char** argv) {
	char a[100];//用于存放输入的字符串
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

#include <iostream>
#include <string.h> 
using namespace std;
/*
 �ַ���APPAPT�а������������ʡ�PAT�������е�һ��PAT�ǵ�2λ(P),��4λ(A),��6λ(T)��
 �ڶ���PAT�ǵ�3λ(P),��4λ(A),��6λ(T)��

�ָ����ַ�������һ�������γɶ��ٸ�PAT��

�����ʽ��

����ֻ��һ�У�����һ���ַ��������Ȳ�����105��ֻ����P��A��T������ĸ��

�����ʽ��

��һ������������ַ����а������ٸ�PAT�����ڽ�����ܱȽϴ�ֻ�����1000000007ȡ�����Ľ����

����������
APPAPT
���������
2
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str;
	cin>>str;
	int lengthstr=str.length();
	int SumNum=0;
	for(int i=0;i<lengthstr;i++)
	{
		if(str[i]=='P')
		{
			for(int j=i+1;j<lengthstr;j++)
			{
				if(str[j]=='A')
				{
					for(int k=j+1;k<lengthstr;k++)
					{
						if(str[k]=='T')
						{
							SumNum++;
						}
					}
				}
			}
		}
	 }
	 cout<<SumNum%1000000007; 
	return 0;
}

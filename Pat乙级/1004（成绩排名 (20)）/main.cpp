#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�
�����ʽ��ÿ�������������1��������������ʽΪ
  ��1�У�������n
  ��2�У���1��ѧ�������� ѧ�� �ɼ�
  ��3�У���2��ѧ�������� ѧ�� �ɼ�
  ... ... ...
  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ��������
���ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
�����ʽ����ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ�
��2���ǳɼ����ѧ����������ѧ�ţ��ַ�������1�ո�
����������
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
���������
Mike CS991301
Joe Math990112*/
typedef struct student
{
	string name;
	string sno;
	int score;
}stu;
void Max(stu *s,int n);//�ɼ����ѧ����Ϣ 
void Min(stu *s,int n);//�ɼ����ѧ����Ϣ 
int main(int argc, char** argv) {
	int n;cin>>n;
	stu s[n];	
	for(int i=0;i<n;i++)
	{
		cin>>s[i].name;
		cin>>s[i].sno;
		cin>>s[i].score;
	}
	Max(s,n);
	Min(s,n);
	return 0;
}
//===========
void Max(stu *s,int n)//�ɼ����ѧ����Ϣ 
{
	stu zz=s[0];
	for(int i=1;i<n;i++)
	{
		if(zz.score<s[i].score)
		{
			zz=s[i];
		}
	}
	cout<<zz.name<<" "<<zz.sno<<endl;
}
void Min(stu *s,int n)//�ɼ����ѧ����Ϣ
{
	stu zz=s[0];
	for(int i=1;i<n;i++)
	{
		if(zz.score>s[i].score)
		{
			zz=s[i];
		}
	}
	cout<<zz.name<<" "<<zz.sno<<endl;
  }  


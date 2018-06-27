#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
输入格式：每个测试输入包含1个测试用例，格式为
  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，
这里保证在一组测试用例中没有两个学生的成绩是相同的。
输出格式：对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，
第2行是成绩最低学生的姓名和学号，字符串间有1空格。
输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112*/
typedef struct student
{
	string name;
	string sno;
	int score;
}stu;
void Max(stu *s,int n);//成绩最好学生信息 
void Min(stu *s,int n);//成绩最差学生信息 
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
void Max(stu *s,int n)//成绩最好学生信息 
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
void Min(stu *s,int n)//成绩最差学生信息
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


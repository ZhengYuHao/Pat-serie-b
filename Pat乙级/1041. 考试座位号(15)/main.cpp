#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
每个PAT考生在参加考试时都会被分配两个座位号，一个是试机座位，一个是考试座位。正常情况下，
考生在入场时先得到试机座位号码，入座进入试机状态后，系统会显示该考生的考试座位号码，
考试时考生需要换到考试座位就座。但有些考生迟到了，试机已经结束，他们只能拿着领到的试机座位号码求助于你，
从后台查出他们的考试座位号码。

输入格式：

输入第一行给出一个正整数N（<=1000），随后N行，每行给出一个考生的信息：“准考证号 试机座位号 考试座位号”。
其中准考证号由14位数字组成，座位从1到N编号。输入保证每个人的准考证号都不同，
并且任何时候都不会把两个人分配到同一个座位上。

考生信息之后，给出一个正整数M（<=N），随后一行中给出M个待查询的试机座位号码，以空格分隔。

输出格式：

对应每个需要查询的试机座位号码，在一行中输出对应考生的准考证号和考试座位号码，中间用1个空格分隔。

输入样例：
4
10120150912233 2 4
10120150912119 4 1
10120150912126 1 3
10120150912002 3 2
2
3 4
输出样例：
10120150912002 2
10120150912119 1
*/
typedef struct student
{
	string sno;
	int trynum;
	int final;
	
}stud;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	stud stu[n];
	for(int i=0;i<n;i++)//初始化详细信息 
	{
		cin>>stu[i].sno>>stu[i].trynum>>stu[i].final;
	}
	 int n2;
	 cin>>n2;
	 int a[n2];
	 for(int i=0;i<n2;i++)//初始化迟到学生信息 
	 {
	 	cin>>a[i];
	  } 
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==stu[j].trynum)
			{
				cout<<stu[j].sno<<' '<<stu[j].final<<endl;
			}
		}
	 } 
	return 0;
}

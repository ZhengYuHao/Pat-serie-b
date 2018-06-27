#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
C语言竞赛是浙江大学计算机学院主持的一个欢乐的竞赛。既然竞赛主旨是为了好玩，颁奖规则也就制定得很滑稽：

0. 冠军将赢得一份“神秘大奖”（比如很巨大的一本学生研究论文集……）。
1. 排名为素数的学生将赢得最好的奖品 —— 小黄人玩偶！
2. 其他人将得到巧克力。

给定比赛的最终排名以及一系列参赛者的ID，你要给出这些参赛者应该获得的奖品。

输入格式：

输入第一行给出一个正整数N（<=10000），是参赛者人数。随后N行给出最终排名，
每行按排名顺序给出一位参赛者的ID（4位数字组成）。接下来给出一个正整数K以及K个需要查询的ID。

输出格式：

对每个要查询的ID，在一行中输出“ID: 奖品”，其中奖品或者是“Mystery Award”
（神秘大奖）、或者是“Minion”（小黄人）、或者是“Chocolate”（巧克力）。
如果所查ID根本不在排名里，打印“Are you kidding?”（耍我呢？）。
如果该ID已经查过了（即奖品已经领过了），打印“ID: Checked”（不能多吃多占）。

输入样例：
6
1111
6666
8888
1234
5555
0001
6
8888
0001
1111
2222
8888
2222
输出样例：
8888: Minion
0001: Chocolate
1111: Mystery Award
2222: Are you kidding?
8888: Checked
2222: Are you kidding?
*/ 
bool Tel(int N);//判断是否是素数 
int main(int argc, char** argv) {
	int N;cin>>N;
	int a[10003][2];//用于保存学生成绩以及判断是否已经领取过奖品
	int term;
	for(int i=0;i<N;i++)//初始化学生成绩 
	{
		cin>>term;
		a[term][0]=i+1;
	 }
	 int M;cin>>M;
	 int b[M];
	 for(int i=0;i<M;i++)
	 {
	 	cin>>b[i];
	  } 
	 for(int i=0;i<M;i++)
	 {
	 	if(a[b[i]][0]==0)//不存在该学生 
	 	{
	 		printf("%04d",b[i]);
	 		cout<<':'<<" "<<"Are you kidding?"<<endl;
		 }
	 	else if(a[b[i]][1]==1)//输出过 
	 	{
	 		printf("%04d",b[i]);
	 		cout<<':'<<" "<<"Checked"<<endl;
		 }
	 	else if(a[b[i]][1]!=1&&a[b[i]][0]!=0)//没有输出过 
	 	{
	 		if(a[b[i]][0]==1)//第一名 
	 		{
	 			printf("%04d",b[i]);
	 		    cout<<':'<<" "<<"Mystery Award"<<endl;
	 		    a[b[i]][1]=1;			 
				 }
			 else if(Tel(a[b[i]][0])==true) 
			 {
			 	printf("%04d",b[i]);
	 		    cout<<':'<<" "<<"Minion"<<endl;
	 		    a[b[i]][1]=1;	
			 }
			 else 
			 {
			 	printf("%04d",b[i]);
	 		    cout<<':'<<" "<<"Chocolate"<<endl;
	 		    a[b[i]][1]=1;
			 }
	 		
		 }
	  } 	
	return 0;
} 
//=======
bool Tel(int N)//判断是否是素数 
{
	int l=N/2;
	for(int i=2;i<l;i++)
	{
		if(N%i==0)
		return false;
	}
	if(N<=1)
	return false;
	return true;
}

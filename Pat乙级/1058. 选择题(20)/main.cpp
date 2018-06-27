#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
批改多选题是比较麻烦的事情，本题就请你写个程序帮助老师批改多选题，并且指出哪道题错的人最多。

输入格式：

输入在第一行给出两个正整数N（<=1000）和M（<=100），分别是学生人数和多选题的个数。随后M行，
每行顺次给出一道题的满分值（不超过5的正整数）、选项个数（不少于2且不超过5的正整数）、

输出格式：

按照输入的顺序给出每个学生的得分，每个分数占一行。注意判题时只有选择全部正确才能得到该题的分数。
最后一行输出错得最多的题目的错误次数和编号（题目按照输入的顺序从1开始编号）。
如果有并列，则按编号递增顺序输出。数字间用空格分隔，行首尾不得有多余空格。
如果所有题目都没有人错，则在最后一行输出“Too simple”。

输入样例：
3 4 
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c)
(2 b d)
(2 a c)
(3 a b e)
(2 a c)
(1 b)
(2 a b)
(4 a b d e)
(2 b d)
(1 e)
(2 b c)
(4 a b c d)

3 4 
3 4 2 a c
2 5 1 b
5 3 2 b c
1 5 4 a b d e
(2 a c) (2 b d) (2 a c) (3 a b e)
(2 a c) (1 b) (2 a b) (4 a b d e)
(2 b d) (1 e) (2 b c) (4 a b c d)
输出样例：
3
6
5
2 2 3 4

*/ 
int main(int argc, char** argv) {
	int N,M;
	cin>>N>>M;
	char anw[N][M][200];//用于保存学生答题情况
	char que[M][200];//用于保存每道题的信息
	for(int i=0;i<M;i++)//初始化 
	{	
	    fflush(stdin);
		gets(que[i]);
	
	 } 
	 for(int i=0;i<N;i++)//初始化 
	 {
	 	for(int j=0;j<M;j++)
	 	{
		    fflush(stdin);
	 		gets(anw[i][j]);
	 		
		 }
	 }
	 int score=0;//学生的分数
	 int tel=0;//用于判断是否全对
	 vector <int> ivec;
	 int telN[M];//用于保存每道题错误的次数
	 memset(telN,0,sizeof(telN[M]));
	 int zz=0;
	 for(int i=0;i<N;i++)
	 {
	 	for(int j=0;j<M;j++)
		 {
	 		if(que[j][4]==anw[i][j][1])//判断答案是否正确 
	 		{
	 			
	 			int f=0;
	 			for(int k=1;k<=(que[j][4]-'0');k++)
	 			{
	 				if(que[j][4+(k*2)]==anw[i][j][1+(k*2)])
	 				{
	 					f++;
	 				tel++; 
					 }	 
				 } 
				 if(f==(que[j][4]-'0'))
				 score=score+(que[j][0]-'0');
				 else
					 {
					 	telN[j]++;
					 }	
			 }
			 else if(que[j][4]!=anw[i][j][1])
			 {
			 	telN[j]++;
			 }
		 }
		 cout<<score<<endl;
		 score=0;
	 }
	 int max=telN[0];
	 for(int i=0;i<M;i++)
	 {
	 	if(max<telN[i])
		 max=telN[i]; 
	 }
	 cout<<max;
	 for(int i=0;i<M;i++)
	 {
	 	if(telN[i]==max)
	 	cout<<' '<<i+1;
	 }
	return 0;
}

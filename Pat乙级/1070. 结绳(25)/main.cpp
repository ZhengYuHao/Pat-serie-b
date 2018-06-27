//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
给定一段一段的绳子，你需要把它们串成一条绳。每次串连的时候，是把两段绳子对折，再如下图所示套接在一起。
这样得到的绳子又被当成是另一段绳子，可以再次对折去跟另一段绳子串连。每次串连后，原来两段绳子的长度就会减半。


给定N段绳子的长度，你需要找出它们能串成的绳子的最大长度。

输入格式：

每个输入包含1个测试用例。每个测试用例第1行给出正整数N (2 <= N <= 104)；第2行给出N个正整数，即原始绳段的长度，数字间以空格分隔。所有整数都不超过104。

输出格式：

在一行中输出能够串成的绳子的最大长度。结果向下取整，即取为不超过最大长度的最近整数。

输入样例：
8
10 15 12 3 4 13 1 15
输出样例：
14
//============
C++队列queue模板类的定义在<queue>头文件中,queue 模板类需要两个模板参数，一个是元素类型，一个容器类型，元素类型是必要的，容器类型是可选的，默认为deque 类型。
    C++队列Queue是一种容器适配器，它给予程序员一种先进先出(FIFO)的数据结构。

C++队列Queue类成员函数如下:
back()返回最后一个元素
empty()如果队列空则返回真
front()返回第一个元素
pop()删除第一个元素
push()在末尾加入一个元素
size()返回队列中元素的个数

queue 的基本操作举例如下：
queue入队，如例：q.push(x); 将x 接到队列的末端。
queue出队，如例：q.pop(); 弹出队列的第一个元素，注意，并不会返回被弹出元素的值。
访问queue队首元素，如例：q.front()，即最早被压入队列的元素。
访问queue队尾元素，如例：q.back()，即最后被压入队列的元素。
判断queue队列空，如例：q.empty()，当队列空时，返回true。
访问队列中的元素个数，如例：q.size()
//=====================
*/
class cmp  
{  
public:  
   bool operator() (const double a,const double b)  
   {  
       return a>b;  
   }  
};  
int main(int argc, char** argv) {
	int N;
	cin>>N;
	priority_queue<double,vector<double>,cmp>q;//用优先队列保存输入的数据 
	for(int i=0;i<N;i++)
	{
		double term;
		cin>>term;
		q.push(term);//依次入队 
	}
	double x,y,z;
	while(q.empty()!=true)
	{
		x=q.top();
		q.pop();
		y=q.top();
		q.pop();
		z=(x+y)/2.0;
		q.push(z);
	 } 
	printf("%d",(int)z);
	return 0;
}

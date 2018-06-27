#include <iostream>
#include <vector>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
在不打扰居民的前提下，统计住房空置率的一种方法是根据每户用电量的连续变化规律进行判断。判断方法如下：

在观察期内，若存在超过一半的日子用电量低于某给定的阈值e，则该住房为“可能空置”；
若观察期超过某给定阈值D天，且满足上一个条件，则该住房为“空置”。
现给定某居民区的住户用电量数据，请你统计“可能空置”的比率和“空置”比率，
即以上两种状态的住房占居民区住房总套数的百分比。

输入格式：

输入第一行给出正整数N（<=1000），为居民区住房总套数；正实数e，即低电量阈值；
正整数D，即观察期阈值。随后N行，每行按以下格式给出一套住房的用电量数据：

K E1 E2 ... EK

其中K为观察的天数，Ei为第i天的用电量。

输出格式：

在一行中输出“可能空置”的比率和“空置”比率的百分比值，其间以一个空格分隔，保留小数点后1位。

输入样例：
5 0.5 10
6 0.3 0.4 0.5 0.2 0.8 0.6
10 0.0 0.1 0.2 0.3 0.0 0.8 0.6 0.7 0.0 0.5
5 0.4 0.3 0.5 0.1 0.7
11 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1
11 2 2 2 1 1 0.1 1 0.1 0.1 0.1 0.1
输出样例：
40.0% 20.0%
（样例解释：第2、3户为“可能空置”，第4户为“空置”，其他户不是空置。）
*/
int main(int argc, char** argv) {
	int N;double e;int D;
	cin>>N>>e>>D;
	vector <double> ivec[N];
	int k[N],k2[N];double term;//每套房的观察天数
	memset(k2,0,sizeof(k2));
	int counter1=0,counter2=0;//可能空闲和空闲 
	for(int i=0;i<N;i++)//套房数 
	{
		cin>>k[i]; 
		for(int j=0;j<k[i];j++)//每套房的用例天数 
		{
			cin>>term;
			ivec[i].push_back(term);
			if(term<e)//每套房用电低于e的数量 
			{
				k2[i]++;
			}
		}
		if(k2[i]>(k[i]/2))//满足可能空闲的数量 
		counter1++; 
		if(k2[i]>(k[i]/2)&&k[i]>D)//满足空闲的数量 
		counter2++;
	}
	counter1=counter1-counter2;
	printf("%.1f%% %.1f%%",100*counter1/(N*1.0),100*counter2/(N*1.0));
	return 0;
}

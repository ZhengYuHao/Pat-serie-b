#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
如果你是哈利·波特迷，你会知道魔法世界有它自己的货币系统 —— 就如海格告诉哈利的：
“十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可，很容易。”
现在，给定哈利应付的价钱P和他实付的钱A，你的任务是写一个程序来计算他应该被找的零钱。

输入格式：

输入在1行中分别给出P和A，格式为“Galleon.Sickle.Knut”，其间用1个空格分隔。
这里Galleon是[0, 107]区间内的整数，Sickle是[0, 17)区间内的整数，Knut是[0, 29)区间内的整数。

输出格式：

在一行中用与输入同样的格式输出哈利应该被找的零钱。如果他没带够钱，那么输出的应该是负数。

输入样例1：
10.16.27 14.1.28
输出样例1：
3.2.1
输入样例2：
14.1.28 10.16.27
输出样例2：
-3.2.1
*/
int main(int argc, char** argv) {
	int a1,a2,a3;
	int b1,b2,b3;
	int c1,c2,c3;
	char c;
	cin>>a1>>c>>a2>>c>>a3;
	cin>>b1>>c>>b2>>c>>b3;
    if(b1>a1)
    {
    	if(b3>=a3)//求得c3 
    	{
    		c3=b3-a3;
		}
		else if(a3>b3)
		{
			b3=b3+29;
			c3=b3-a3;
			b2=b2-1;
		}
		if(b2>=a2)//求得c2 
    	{
    		c2=b2-a2;
		}
		else if(a2>b2)
		{
			b2=b2+17;
			c2=b2-a2;
			b1=b1-1;
		}
		c1=b1-a1;	
	}
	else if(b1==a1)
    {
    	if(b2>a2)
    	{
    		if(b3>=a3)//求得c3 
    	   {
    		c3=b3-a3;
		  }
		   else if(a3>b3)
		  {
			b3=b3+29;
			c3=b3-a3;
			b2=b2-1;
		  }
		  c2=b2-a2;
		  c1=0;
		}
		else if(b2==a2)
		{
			if(b3>=a3)
			{
				c1=0;
				c2=0;
				c3=b3-a3;
			}
			else if(b3<a3)
			{
				c1=0;
				c2=0;
				c3=a3-b3;
				cout<<'-'<<c1<<'.'<<c2<<'.'<<c3<<endl;
				return 0;
			}
    	}
		else if(b2<a2)
			{
				if(a3>=b3)
				{
					c3=a3-b3;
					c2=a2-b2;
					c1=0;
					cout<<'-'<<c1<<'.'<<c2<<'.'<<c3<<endl;
					return 0;
				}
				else if(a3<b3)
				{
					a2=a2-1;
					a3=a3+29;
					c3=a3-b3;
					c2=a2-b2;
					c1=0;
					cout<<'-'<<c1<<'.'<<c2<<'.'<<c3<<endl;
					return 0;
				}
			}			
	}
	else if(b1<a1)
	{
		if(b3<=a3)//求得c3 
    	{
    		c3=a3-b3;
		}
		else if(b3>a3)
		{
			a3=a3+29;
			c3=a3-b3;
			a2=a2-1;
		}
		if(a2>=b2)//求得c2 
    	{
    		c2=a2-b2;
		}
		else if(b2>a2)
		{
			a2=a2+17;
			c2=a2-b2;
			a1=a1-1;
		}
		c1=a1-b1;
		cout<<'-'<<c1<<'.'<<c2<<'.'<<c3<<endl;
		return 0;
	}
	cout<<c1<<'.'<<c2<<'.'<<c3<<endl;
	
	return 0;
}
/*别人的答案
 #include <stdio.h>
 2 
 3 int main(void)
 4 {
 5     int g1, s1, k1, x1;
 6     int g2, s2, k2, x2;
 7     int delta;
 8 
 9     scanf("%d.%d.%d %d.%d.%d", &g1, &s1, &k1, &g2, &s2, &k2);
10 
11     x1 = 17 * 29 * g1 + 29 * s1 + k1;
12     x2 = 17 * 29 * g2 + 29 * s2 + k2;
13 
14 
15     delta = x2 - x1;
16     if(delta < 0)
17         delta = -delta;
18 
19     g1     = delta / (17 * 29);
20     delta -= (g1 * 17 * 29);
21     s1     = delta / 29;
22     delta -= (s1 * 29);
23     k1     = delta;
24 
25     printf(x2-x1 >= 0 ? "%d.%d.%d" : "-%d.%d.%d", g1, s1, k1);
26 
27     return 0;
28 }
 */

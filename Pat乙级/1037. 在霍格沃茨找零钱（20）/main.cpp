#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
������ǹ����������ԣ����֪��ħ�����������Լ��Ļ���ϵͳ ���� ���纣����߹����ģ�
��ʮ�߸�������(Sickle)��һ����¡(Galleon)����ʮ�Ÿ�����(Knut)��һ�����ɣ������ס���
���ڣ���������Ӧ���ļ�ǮP����ʵ����ǮA�����������дһ��������������Ӧ�ñ��ҵ���Ǯ��

�����ʽ��

������1���зֱ����P��A����ʽΪ��Galleon.Sickle.Knut���������1���ո�ָ���
����Galleon��[0, 107]�����ڵ�������Sickle��[0, 17)�����ڵ�������Knut��[0, 29)�����ڵ�������

�����ʽ��

��һ������������ͬ���ĸ�ʽ�������Ӧ�ñ��ҵ���Ǯ�������û����Ǯ����ô�����Ӧ���Ǹ�����

��������1��
10.16.27 14.1.28
�������1��
3.2.1
��������2��
14.1.28 10.16.27
�������2��
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
    	if(b3>=a3)//���c3 
    	{
    		c3=b3-a3;
		}
		else if(a3>b3)
		{
			b3=b3+29;
			c3=b3-a3;
			b2=b2-1;
		}
		if(b2>=a2)//���c2 
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
    		if(b3>=a3)//���c3 
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
		if(b3<=a3)//���c3 
    	{
    		c3=a3-b3;
		}
		else if(b3>a3)
		{
			a3=a3+29;
			c3=a3-b3;
			a2=a2-1;
		}
		if(a2>=b2)//���c2 
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
/*���˵Ĵ�
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

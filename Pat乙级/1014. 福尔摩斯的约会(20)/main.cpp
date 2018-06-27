#include <iostream>
#include <string>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。
大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，
因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是第4个字母'D'，
代表星期四；第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头
（于是一天的0点到23点由数字0到9、以及大写字母A到N表示）；
后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，
代表第4分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

输入格式：

输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。

输出格式：

在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符缩写，
即MON表示星期一，TUE表示星期二，WED表示星期三，
THU表示星期四，FRI表示星期五，SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在唯一解。

输入样例：
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm
输出样例：
THU 14:04*/
int main(int argc, char** argv) {
	string str[4]; 
		int i,j;
		char week='Z';
		char hour='Z';
		int minute=0;
	for(i=0;i<4;i++)
	{
		cin>>str[i];
	}
	i=0;
	j=0;
	while(str[0][i]!=NULL&&str[1][i]!=NULL)//求得星期和小时; 
	{
	   if(j==0&&str[0][i]==str[1][i]&&str[1][i]>=65&&str[1][i]<=71)
	   {
	   week=str[1][i];
	   j++;
	   }
	   if(week!='Z'&&str[0][i]==str[1][i])
	   {
	   	if((str[1][i]>=65&&str[1][i]<=78)||(str[1][i]>=48&&str[1][i]<=57))
	   	 hour=str[1][i]; 
	   } 
		i++;
	}
	i=0;
	while(str[2][i]!=NULL&&str[3][i]!=NULL)//求得分钟; 
	{
		if(str[2][i]==str[3][i]&&((str[1][i]>=65&&str[1][i]<=90)||(str[1][i]>=97&&str[1][i]<=122)))
		minute=i;
		i++;
	}
	{//输出星期 
	if(week=='A')
	   cout<<"MON ";
	else if(week=='B')
	     cout<<"Tue ";
	     else if(week=='C')
	          cout<<"WED ";
	          else if(week=='D')
	               cout<<"THU ";
	               else if(week=='E')
	                     cout<<"FRI ";
	                     else if(week=='F')
	                          cout<<"SAT ";
	                           else if(week=='G')
	                                cout<<"SUN ";
   }
   {//输出小时 
   	if(hour>=48&&hour<=57)
   	cout<<'0'<<hour<<':';
   	else cout<<hour-55<<':';
   }
	 
	 {//输出分钟 
	 if(minute<10)
	 cout<<'0'<<minute;
	 else cout<<minute;
	 }                         
	return 0;
}

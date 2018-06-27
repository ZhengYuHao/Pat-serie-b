#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
给定一个常数K以及一个单链表L，请编写程序将L中每K个结点反转。
例如：给定L为1→2→3→4→5→6，K为3，则输出应该为3→2→1→6→5→4；
如果K为4，则输出应该为4→3→2→1→5→6，即最后不到K个元素不反转。

输入格式：

每个输入包含1个测试用例。每个测试用例第1行给出第1个结点的地址、
结点总个数正整数N(<= 105)、以及正整数K(<=N)，即要求反转的子链结点的个数。
结点的地址是5位非负整数，NULL地址用-1表示。

接下来有N行，每行格式为：

Address Data Next

其中Address是结点地址，Data是该结点保存的整数数据，Next是下一结点的地址。

输出格式：

对每个测试用例，顺序输出反转后的链表，其上每个结点占一行，格式与输入相同。

输入样例：
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
输出样例：
00000 4 33218
33218 3 12309
12309 2 00100
00100 1 99999
99999 5 68237
68237 6 -1
*/
int main(int argc, char** argv) {
	int FirstAddress,N,K;
	cin>>FirstAddress>>N>>K;//初始化第一行信息
	int node,tail; 
	int FirstArry[100000][2];
	for(int i=0;i<N;i++)//初始化链表数组 
	{
		cin>>node;cin>>FirstArry[node][0]>>FirstArry[node][1];
		//cout<<node<<"  "<<FirstArry[node][0]<<" "<<FirstArry[node][1]<<endl;
	}
	tail=FirstAddress;
	int SecondArry[N][3];
	for(int i=0;i<N;i++)//将链表排序 
	{
		if(tail==-1)
		break;
		SecondArry[i][0]=tail;
		SecondArry[i][1]=FirstArry[tail][0];
		SecondArry[i][2]=FirstArry[tail][1];
		tail=FirstArry[tail][1];		 	
	}
	/*for(int i=0;i<N;i++)
	{
	printf("%.5d %.5d %.5d\n",SecondArry[i][0],SecondArry[i][1],SecondArry[i][2]);
	//cout<<SecondArry[i][0]<<"  "<<SecondArry[i][1]<<" "<<SecondArry[i][2]<<endl;
	}*/ 
	int num=N;//num为剩余待转换的 
	int ThirdArry[N][3];
	int Numble=0; 
	while(true)//待转换的数大于K 
	{
		if(num>=K)
		{
			int counter=0;
		tail=SecondArry[K+Numble-1][2];
	    for(int i=Numble;i<K+Numble;i++)
	    {
	    	ThirdArry[i][0]=SecondArry[K+Numble-1-counter][0];
	    	ThirdArry[i][1]=SecondArry[K+Numble-1-counter][1];
	    	if((K+Numble-1-1-counter)>=Numble)
	    	ThirdArry[i][2]=SecondArry[K+Numble-2-counter][0];
	    	else 
	    	ThirdArry[i][2]=tail;
	    	counter++;
		}
		num=num-K;
		Numble=Numble+K;
		}
		else if(num<K)
		{
			for(int i=Numble;i<N;i++)
			{
				ThirdArry[i][0]=SecondArry[i][0];
	    	    ThirdArry[i][1]=SecondArry[i][1];
	    	    ThirdArry[i][2]=SecondArry[i][2];
			}
			break;
		}
	}	
	for(int i=0;i<N;i++)
	{
		if(ThirdArry[i][2]!=-1)
	        printf("%.5d %d %.5d\n",ThirdArry[i][0],ThirdArry[i][1],ThirdArry[i][2]);
	//cout<<SecondArry[i][0]<<"  "<<SecondArry[i][1]<<" "<<SecondArry[i][2]<<endl;
	    else if(ThirdArry[i][2]=-1)
	    {
	    	printf("%.5d %d %d\n",ThirdArry[i][0],ThirdArry[i][1],ThirdArry[i][2]);
		}
	}
	return 0;
}

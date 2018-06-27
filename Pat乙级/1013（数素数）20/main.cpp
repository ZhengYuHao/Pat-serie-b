#include <iostream>
using namespace std;
bool Tell(int n);//用于判断是否是素数
int main()
{
    int M,N;
    cin>>M;
	cout<<' ';
	cin>>N;
    int NUM=0;
    int i=2;
    int Line=0;
    while(i>=2)//未达条件，无限循环
    {
       if(Tell(i)==true)
       {
           NUM++;
        if(NUM>=M&&NUM<=N)
        {
            Line++;
            if(Line%10==0)
                cout<<i<<endl;
            else
                cout<<i<<' ';
        }
       }
        i++;
        if(NUM==N)
            break;
    }
    return 0;
}
bool Tell(int n)//用于判断是否素数
{
    int num=n/2;
    for(int i=2;i<=num;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

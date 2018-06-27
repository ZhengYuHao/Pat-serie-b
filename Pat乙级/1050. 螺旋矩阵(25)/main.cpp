#include <iostream>
#include <algorithm> 
#include <math.h>
using namespace std;
bool compare_decrease(int a,int b);//从大到小排序 
void findMN(int n,int *M,int *N);//得到M和N 
int main(int argc, char** argv) {
  int n;cin>>n;//一共几个数
  int M,N;//矩阵行列
  findMN(n,&M,&N);
  int a[M][N],b[n];
  //cout<<M<<" "<<N<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
  }
  sort(b,b+n,compare_decrease);//对数据进行由大到小的排序
  
  int counter=0;
  int c[4][2];//用于保存矩阵的四个角落坐标
  c[0][0]=0; c[0][1]=0;
  c[1][0]=0; c[1][1]=N-1;
  c[2][0]=M-1; c[2][1]=0;
  c[3][0]=M-1; c[3][1]=N-1;
  int x,y;
  x=0,y=0;//用于保存数组当前下标 
  //int k=19;
  while(counter<=n)
  {
    
    if(x==c[0][0]&&y==c[0][1])
    {
      if(counter==n) break;
      if(c[0][0]==0&&c[0][1]==0)
    {
    
        for(y=c[0][1];y<=c[1][1];y++)//输入从左到右的数 
        {
      a[x][y]=b[counter];
      //cout<<"看"<<x<<" "<<y<<" "<<a[x][y]<<endl;
      counter++;
      }
      if(c[0][0]==0&&c[0][1]==0)
      {
        c[0][0]++;
      }
      else 
          {
        c[0][0]++;
        c[0][1]++;
         } y--;
       //cout<<"A"<<endl;cout<<x<<' '<<y<<endl;
      }
      else {
        for(y=c[0][1]+1;y<=c[1][1];y++)//输入从左到右的数 
        {
      a[x][y]=b[counter];
      //cout<<"看"<<x<<" "<<y<<" "<<a[x][y]<<endl;
      counter++;
      } 
        c[0][0]++;
        c[0][1]++;
          y--;
       //cout<<"A"<<endl;cout<<x<<' '<<y<<endl;
        }
      }
      
            else if(x==c[1][0]&&y==c[1][1])
                {
                     if(counter==n) break;
                     for(x=c[1][0]+1;x<=c[3][0];x++)
             {
               a[x][y]=b[counter];
                      counter++;
                      //cout<<"看"<<x<<" "<<y<<" "<<a[x][y]<<endl;
             }
             c[1][0]++;
             c[1][1]--;x--;
            // cout<<"B"<<endl;cout<<x<<' '<<y<<endl;
             
         }
                 else if(x==c[2][0]&&y==c[2][1])
                     {
                       if(counter==n) break;
                       for(x=c[2][0]-1;x>=c[0][0];x--)
                       {
                         a[x][y]=b[counter];
                         //cout<<"看"<<x<<" "<<y<<" "<<a[x][y]<<endl;
                      counter++;
              }
              c[2][0]--;
              c[2][1]++;x++;
              //cout<<"C"<<endl;cout<<x<<' '<<y<<endl;
              
                        }
                        else if(x==c[3][0]&&y==c[3][1])
                              {
                                if(counter==n) break;
                                for(y=c[3][1]-1;y>=c[2][1];y--)
                                {
                                  a[x][y]=b[counter];
                                  //cout<<"看"<<x<<" "<<y<<" "<<a[x][y]<<endl;
                                  counter++;
                  }
                                  c[3][0]--;
                                  c[3][1]--;y++;
                                  //cout<<"D"<<endl;cout<<x<<' '<<y<<endl;
                                  
                               }
                             /*  cout<<"+++++++++++++++++++++++"<<endl;
                               cout<<c[0][0]<<" "<<c[0][1]<<endl;
                               cout<<c[1][0]<<" "<<c[1][1]<<endl;
                               cout<<c[2][0]<<" "<<c[2][1]<<endl;
                               cout<<c[3][0]<<" "<<c[3][1]<<endl;
                               cout<<"+++++++++++++++++++++++"<<endl;*/
                             
   } 
   for(int i=0;i<M;i++)
   {
     for(int j=0;j<N;j++)
     {
       if(j==N-1)
       cout<<a[i][j]<<endl;
       else if(j!=N-1)
       {
         cout<<a[i][j]<<" ";
       }
     }
     
   }
  return 0;
}
void findMN(int n,int *M,int *N)//得到M和N 
{
    *N=(int)sqrt(n*1.0);  
  while(n%(*N)!=0)
  {
    (*N)--;
  }
  *M=n/(*N);  
} 
bool compare_decrease(int a,int b)//从大到小排序
{
  return a>b; 

}

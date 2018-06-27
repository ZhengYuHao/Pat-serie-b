#include <iostream>
#include <string.h> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct People//学生生日结构体 
{
  string name;
  int year;
  int month;
  int day;
}peo;
void setbirthday(peo *p,string term);//将字符转换为整形 
int main(int argc, char** argv) {
  int n;
  cin>>n;
  peo p[n];
  string term;
  for(int i=0;i<n;i++)
  {
    cin>>p[i].name;
    cin>>term;
    setbirthday(&p[i],term);
  }
  int num=0;//用于统计一共有多少个people满足条件
  peo jia,yi;//用于统计最长年龄和最小年龄
  jia=p[0];
  yi=p[0];   
  for(int i=0;i<n;i++)
  {
    if(p[i].year>1814&&p[i].year<2014)
       {
        if(jia.year<p[i].year)
          {
          jia=p[i];
        }
        else if(jia.year==p[i].year&&jia.month<p[i].month)
            {
            jia=p[i];
            }
              else if(jia.year==p[i].year&&jia.month==p[i].month&&jia.day<p[i].day)
                 {
                   jia=p[i];
                  }
                  //=============
       
        if(yi.year>p[i].year)
          {
          yi=p[i];
        }
        else if(yi.year==p[i].year&&yi.month>p[i].month)
            {
            yi=p[i];
            }
              else if(yi.year==p[i].year&&yi.month==p[i].month&&yi.day>p[i].day)
                 {
                   yi=p[i];
                  }
       
         
       num++;
    }
         else if(p[i].year==1814&&p[i].month>=9&&p[i].day>=6)
           {
             
        if(jia.year<p[i].year)
          {
          jia=p[i];
        }
        else if(jia.year==p[i].year&&jia.month<p[i].month)
            {
            jia=p[i];
            }
              else if(jia.year==p[i].year&&jia.month==p[i].month&&jia.day<p[i].day)
                 {
                   jia=p[i];
                  }
                  //=============
       
        if(yi.year>p[i].year)
          {
          yi=p[i];
        }
        else if(yi.year==p[i].year&&yi.month>p[i].month)
            {
            yi=p[i];
            }
              else if(yi.year==p[i].year&&yi.month==p[i].month&&yi.day>p[i].day)
                 {
                   yi=p[i];
                  }
       
         
            num++;
            }
            else if(p[i].year==2014&&p[i].month<=9&&p[i].day<=6)
                {
                  
        if(jia.year<p[i].year)
          {
          jia=p[i];
        }
        else if(jia.year==p[i].year&&jia.month<p[i].month)
            {
            jia=p[i];
            }
              else if(jia.year==p[i].year&&jia.month==p[i].month&&jia.day<p[i].day)
                 {
                   jia=p[i];
                  }
                  //=============
       
        if(yi.year>p[i].year)
          {
          yi=p[i];
        }
        else if(yi.year==p[i].year&&yi.month>p[i].month)
            {
            yi=p[i];
            }
              else if(yi.year==p[i].year&&yi.month==p[i].month&&yi.day>p[i].day)
                 {
                   yi=p[i];
                  }
              num++;
                } 
  }
  //=====
  if(yi.year>=1814&&jia.year>=1814&&yi.year<=2014&&jia.year<=2014)
  cout<<num<<" "<<yi.name<<" "<<jia.name<<endl;
  return 0;
}
//=======
void setbirthday(peo *p,string str)//将字符转换为整形
{
  int n=0;
  p->year=(str[0]-'0')*1000+(str[1]-'0')*100+(str[2]-'0')*10+(str[3]-'0');//年
  p->month=(str[5]-'0')*10+(str[6]-'0');
  p->day=(str[8]-'0')*10+(str[9]-'0');  
 }

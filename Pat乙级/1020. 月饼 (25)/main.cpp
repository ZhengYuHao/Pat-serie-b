#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sort(int *a,int n);//���±��ĵ��۽������� 
int main(int argc, char** argv) {
	int n,sumweight;
	cin>>n>>sumweight;
	int a[2][n];
	for(int i=0;i<2;i++)//�������±��Ĵ��������ۼ۴������� 
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}	
	}
	sort(&a[0][0],n);
	double Sum=0;
		for(int j=0;j<n;j++)
		{
			if(a[0][j]>=sumweight)
			{
				Sum=Sum+sumweight*(a[1][j]*1.0/a[0][j]);
				printf("%.2f",Sum);
				break;
			}
			else if(a[0][j]<sumweight)
			{
				Sum=Sum+a[1][j];
				sumweight=sumweight-a[0][j];
			}
		}	
		return 0;
}
//=====
void  sort(int *a,int n)//���±��ĵ��۽�������
{
	int x,y; 
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(a+n+i)*1.0/(*(a+i))<(*(a+n+j)*1.0/(*(a+j))))//�����۴�С�������ʱ����н��� 
			{
				x=*(a+n)+i;
				y=*(a+i);
				*(a+n+i)=*(a+n+j);
				*(a+i)=*(a+j);
				*(a+n+j)=x;
				*(a+j)=y;
			}
		}
		
	}
}

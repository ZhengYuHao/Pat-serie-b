#include <iostream>
#include <vector> 
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
对于计算机而言，颜色不过是像素点对应的一个24位的数值。现给定一幅分辨率为MxN的画，
要求你找出万绿丛中的一点红，即有独一无二颜色的那个像素点，并且该点的颜色与其周围8个相邻像素的颜色差充分大。

输入格式：

输入第一行给出三个正整数，分别是M和N（<= 1000），即图像的分辨率；以及TOL，
是所求像素点与相邻点的颜色差阈值，色差超过TOL的点才被考虑。随后N行，每行给出M个像素的颜色值，
范围在[0, 224)内。所有同行数字间用空格或TAB分开。

输出格式：

在一行中按照“(x, y): color”的格式输出所求像素点的位置以及颜色值，
其中位置x和y分别是该像素在图像矩阵中的列、行编号（从1开始编号）。
如果这样的点不唯一，则输出“Not Unique”；如果这样的点不存在，则输出“Not Exist”。

输入样例1：
8 6 200
0 	         0 	      0 	   0	    0 	     0 	      0        0
65280 	 65280    65280    16711479 65280    65280    65280    65280
16711479 65280    65280    65280    16711680 65280    65280    65280
65280 	 65280    65280    65280    65280    65280    165280   165280
65280 	 65280 	  16777015 65280    65280    165280   65480    165280
16777215 16777215 16777215 16777215 16777215 16777215 16777215 16777215
输出样例1：
(5, 3): 16711680
输入样例2：
4 5 2
0 0 0 0
0 0 3 0
0 0 0 0
0 5 0 0
0 0 0 0
输出样例2：
Not Unique
输入样例3：
3 3 5
1 2 3
3 4 5
5 6 7
输出样例3：
Not Exist
*/
int main(int argc, char** argv) {
	int M,N,size;//行列和颜色差
	cin>>M>>N>>size;
	long long int a[N][M];
	int b[8];//用于保存点附近八个点与标准像素值的差 
	vector <int> ivec[3];//用来保存满足条件点的坐标和像素值	
	for(int i=0;i<N;i++)//初始化图像矩阵 
	{
		for(int j=0;j<M;j++)
		{
			cin>>a[i][j];
		}
	} 
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(i!=0&&i!=N-1&&j!=0&&j!=M-1)//排除边界点
	       {
		        b[0]=a[i-1][j-1];
		        b[1]=a[i-1][j];
		        b[2]=a[i-1][j+1];
		        b[3]=a[i][j-1];
		        b[4]=a[i][j+1];
		        b[5]=a[i+1][j-1];
		        b[6]=a[i+1][j];
		        b[7]=a[i+1][j+1];
		        //if((a[i][j]-b[0]>size||a[i][j]-b[0]<size*-1)&&(a[i][j]-b[1]>size||a[i][j]-b[1]<size*-1)&&(a[i][j]-b[2]>size||a[i][j]-b[2]<size*-1)&&(a[i][j]-b[3]>size||a[i][j]-b[3]<size*-1)&&(a[i][j]-b[4]>size||a[i][j]-b[4]<size*-1)&&(a[i][j]-b[5]>size||a[i][j]-b[5]<size*-1)&&(a[i][j]-b[6]>size||a[i][j]-b[6]<size*-1)&&(a[i][j]-b[7]>size||a[i][j]-b[7]<size*-1))
		        if((a[i][j]-b[0]>size)&&(a[i][j]-b[1]>size)&&(a[i][j]-b[2]>size)&&(a[i][j]-b[3]>size)&&(a[i][j]-b[4]>size)&&(a[i][j]-b[5]>size)&&(a[i][j]-b[6]>size)&&(a[i][j]-b[7]>size))
				{
		        	//cout<<j+1<<" "<<i+1<<" "<<a[i][j]<<endl;
		        	ivec[0].push_back(j+1);
		        	ivec[1].push_back(i+1);
		        	ivec[2].push_back(a[i][j]);
				}
		   }
		}
	}
	//=======
	int y=ivec[0].size();
	if(y==0)
	{
		cout<<"Not Exist";
	}
	else if(y>1)
	{
		cout<<"Not Unique";
	}
	else if(y==1)
	{
		cout<<"("<<ivec[0][0]<<", "<<ivec[1][0]<<"):"<<" "<<ivec[2][0];
	}
	return 0;
}

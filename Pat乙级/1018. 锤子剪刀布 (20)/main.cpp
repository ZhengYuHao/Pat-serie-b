#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct dex{
	int num;
	char letter;
}; 
int main(int argc, char** argv) {
	int N;
	cin>>N;
	char J[N];
	char Y[N];
	for(int i=0;i<N;i++)//初始化样例 
	{
		cin>>J[i]>>Y[i];
	}
	int coutJ1[3]={0,0,0};
	dex coutJ2[3]={0,'J',0,'C',0,'B'};//剪刀石头布分别胜利的次数 
	int coutY1[3]={0,0,0};
	dex coutY2[3]={0,'J',0,'C',0,'B'};//剪刀石头布分别胜利的次数
	for(int i=0;i<N;i++)
	{
		if((J[i]=='J'&&Y[i]=='J')||(J[i]=='B'&&Y[i]=='B')||(J[i]=='C'&&Y[i]=='C'))
		{
			coutJ1[1]++;
			coutY1[1]++;
		}
		if((J[i]=='J'&&Y[i]=='B')||(J[i]=='B'&&Y[i]=='C')||(J[i]=='C'&&Y[i]=='J'))
		{
			coutJ1[0]++;
			coutY1[2]++;
			//
			if(J[i]=='J')
			coutJ2[0].num++;
			if(J[i]=='C')
			coutJ2[1].num++;
			if(J[i]=='B')
			coutJ2[2].num++;
		}
		if((J[i]=='J'&&Y[i]=='C')||(J[i]=='B'&&Y[i]=='J')||(J[i]=='C'&&Y[i]=='B'))
		{
			coutJ1[2]++;
			coutY1[0]++;
			//
			if(Y[i]=='J')
			coutY2[0].num++;
			if(Y[i]=='C')
			coutY2[1].num++;
			if(Y[i]=='B')
			coutY2[2].num++;	
		}
	 } 
	 int x;
	 char y;
	 for(int i=0;i<2;i++)
	 {
	 	for(int j=i+1;j<3;j++)
	 	{
	 		if(coutJ2[i].num<coutJ2[j].num)
	 		{
	 			x=coutJ2[i].num;
	 			y=coutJ2[i].letter;
	 			coutJ2[i].num=coutJ2[j].num;
	 			coutJ2[i].letter=coutJ2[j].letter;
	 			coutJ2[j].num=x;
	 			coutJ2[j].letter=y;
			 }
		 }
	 }
	 //
	 for(int i=0;i<2;i++)
	 {
	 	for(int j=i+1;j<3;j++)
	 	{
	 		if(coutY2[i].num<coutY2[j].num)
	 		{
	 			x=coutY2[i].num;
	 			y=coutY2[i].letter;
	 			coutY2[i].num=coutY2[j].num;
	 			coutY2[i].letter=coutY2[j].letter;
	 			coutY2[j].num=x;
	 			coutY2[j].letter=y;
			 }
		 }
	 }
	 //
	 cout<<coutJ1[0]<<" "<<coutJ1[1]<<" "<<coutJ1[2]<<endl;
	 cout<<coutY1[0]<<" "<<coutY1[1]<<" "<<coutY1[2]<<endl;
	 {
	 if(coutJ2[0].num>coutJ2[1].num)
	 cout<<coutJ2[0].letter<<" ";
	 if(coutJ2[0].num==coutJ2[1].num&&coutJ2[1].num==coutJ2[2].num)
	 cout<<'B'<<" ";
	 if(coutJ2[0].num==coutJ2[1].num&&coutJ2[1].num>coutJ2[2].num)
	 {
	 	if(coutJ2[0].letter=='B'||coutJ2[1].letter=='B')
	 	cout<<'B'<<" ";
	 	else
	 	cout<<'C'<<" ";
	 }
	 }
	 //
	 {
	 if(coutY2[0].num>coutY2[1].num)
	 cout<<coutY2[0].letter;
	 if(coutY2[0].num==coutY2[1].num&&coutY2[1].num==coutY2[2].num)
	 cout<<'B';
	 if(coutY2[0].num==coutY2[1].num&&coutY2[1].num>coutY2[2].num)
	 {
	 	if(coutY2[0].letter=='B'||coutY2[1].letter=='B')
	 	cout<<'B';
	 	else
	 	cout<<'C';
	 }
	 } 
		return 0;
}

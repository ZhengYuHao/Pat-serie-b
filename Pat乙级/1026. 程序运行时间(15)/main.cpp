#include <iostream>
#include <time.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Ҫ���һ��C���Գ��������ʱ�䣬���õķ����ǵ���ͷ�ļ�time.h��
�����ṩ��clock()���������Բ�׽�ӳ���ʼ���е�clock()������ʱ���ķѵ�ʱ�䡣
���ʱ�䵥λ��clock tick������ʱ�Ӵ�㡱��ͬʱ����һ������CLK_TCK��
�����˻���ʱ��ÿ�����ߵ�ʱ�Ӵ����������Ϊ�˻��һ������f������ʱ�䣬
����ֻҪ�ڵ���f֮ǰ�ȵ���clock()�����һ��ʱ�Ӵ����C1����fִ����ɺ��ٵ���clock()��
�����һ��ʱ�Ӵ����C2�����λ�õ�ʱ�Ӵ����֮��(C2-C1)����f���������ĵ�ʱ�Ӵ������
�ٳ��Գ���CLK_TCK���͵õ�������Ϊ��λ������ʱ�䡣

���ﲻ���򵥼��賣��CLK_TCKΪ100���ָ������⺯��ǰ�����λ�õ�ʱ�Ӵ����������������⺯�����е�ʱ�䡣

�����ʽ��

������һ����˳�����2������C1��C2��ע�����λ�õ�ʱ�Ӵ�����϶�����ͬ����C1 < C2������ȡֵ��[0, 107]��

�����ʽ��

��һ����������⺯�����е�ʱ�䡣����ʱ����밴�ա�hh:mm:ss������2λ�ġ�ʱ:��:�롱����ʽ�����
����1���ʱ���������뵽�롣

����������
123 4577973
���������
12:42:59
*/
int main(int argc, char** argv) {
	long int a,b;
	cin>>a>>b;
	double second=b-a;
	second=((second/100)+0.5);
	int hour=second/3600;
	int minute=(second-(hour*3600))/60;
	int s=second-(hour*3600)-(minute*60);
	printf("%02d:%02d:%02d\n",hour,minute,s);	
	return 0;
}

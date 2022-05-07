#include<stdio.h>
#include<time.h>
#include<math.h>
clock_t start, stop;
/*clock_t是clock()函数返回的变量类型，一个是start，一个是stop*/
double duration;
/*记录被测函数运行时间，以秒为单位*/
#define MAXN 10/*多项式最大项数*/
double f1(int n, double a[], double x);
double f2(int n, double a[], double x);

int main() {
	//实现计时器，CLK_TCK：机器时钟每秒所走的时钟打点数
	//clock（）捕捉从程序开始运行到clock（）被调用时所耗费的时间，时间单位是CLOCK tick 即“时钟打点”
	int i;
	double a[MAXN];
	for (i = 0; i < MAXN; i++);
	a[i] = (double)i;

	start = clock();//这一步记录了从main函数到这里clock函数调用时花费的时间
	f1(MAXN - 1, a, 1.1);//不在测试范围内的准备工作写在clock（）调用之前或之后；这里写被测函数
	stop = clock();//用于停止计时
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("ticks1=%f\n", (double)(stop - start));
	printf("duration1=%6.2e\n", duration);
	return 0;
}
double f1(int n, double a[], double x) {
	int i;
	double p = a[0];
	for (i = 1; i <= n; i++) {
		p += (a[i] * pow(x, i));
		return p;
	}

}
double f2(int n, double a[], double x) {
	int i;
	double p = a[n];
	for (i = n; i > 0; i--)
		p = a[i - 1] + x * p;
	return p;
}

#include<stdio.h>
#include<time.h>
#include<math.h>
clock_t start, stop;
/*clock_t��clock()�������صı������ͣ�һ����start��һ����stop*/
double duration;
/*��¼���⺯������ʱ�䣬����Ϊ��λ*/
#define MAXN 10/*����ʽ�������*/
double f1(int n, double a[], double x);
double f2(int n, double a[], double x);

int main() {
	//ʵ�ּ�ʱ����CLK_TCK������ʱ��ÿ�����ߵ�ʱ�Ӵ����
	//clock������׽�ӳ���ʼ���е�clock����������ʱ���ķѵ�ʱ�䣬ʱ�䵥λ��CLOCK tick ����ʱ�Ӵ�㡱
	int i;
	double a[MAXN];
	for (i = 0; i < MAXN; i++);
	a[i] = (double)i;

	start = clock();//��һ����¼�˴�main����������clock��������ʱ���ѵ�ʱ��
	f1(MAXN - 1, a, 1.1);//���ڲ��Է�Χ�ڵ�׼������д��clock��������֮ǰ��֮������д���⺯��
	stop = clock();//����ֹͣ��ʱ
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
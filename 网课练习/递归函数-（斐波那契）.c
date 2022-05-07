#include<stdio.h>

int Fib(int n) {
	if (n == 1)
		return 1;
	if (n == 2) {
		return 1;
	}
	else
		 return Fib(n - 1) + Fib(n - 2);
}

int main() {
	int i,j;
	j = 0;
	for (i = 1; i < 100; i++) {
		j++;
		printf("%d\t,%d\n", Fib(i),j);
	}

}

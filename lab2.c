#include<stdio.h>
int prost(int num, int d){
	if (num < 2)
		return 0;
	if (d * d > num)
		return 1;
	if (num % d == 0)
		return 0;
	return prost(num, d + 1);
};

unsigned long long profact(int n){
	if (n <= 0)
		return 1;
	if (prost(n, 2)){
		return n * profact(n - 1);
	} else {
		return profact( n - 1 );
	}
	
};

void print(int k, int n) {
	if (k > n)
		return;
	printf("%d! = %llu\n", k, profact(k));
	print(k + 1, n);
};

int main(){
	int N;
	scanf("%d", &N);
	printf("Введите натуральное число от 1 до 52\n");
	if (1 <= N && N <= 52)
		print(1, N);
	else 
		printf("Введите число из диапозона\n");
	return 0;
}

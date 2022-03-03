#include<stdio.h>

int input(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	return n;
}

int find_fibo(int n){
	int fibo[n+2];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	return fibo[n];
}

void output(int n, int fibo){
	printf("The %dth fibonacci number is %d", n, fibo);
}

int main(){
	int n, fibo;
	n = input();
	fibo = find_fibo(n);
	output(n, fibo);
	return 0;
}
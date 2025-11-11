#include <stdio.h>
int sum (int a, int b){
	int sum;
	sum=a+b;
	printf("%d + %d = %d",a,b,sum);
}
int main(){
	int a,b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	sum(a,b);
}
	

#include <stdio.h>
#include <math.h>
int isPrime(int n){
	if(n<2){
		return false;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	if(isPrime(x)){
		printf("%d la so nguyen to", x);
	} else {
		printf("%d ko phai la so nguyen to", x);
	}
}

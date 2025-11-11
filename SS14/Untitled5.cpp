#include <stdio.h>
long long giaiThua(int n){
	long long result=1;
	for(int i=1;i<=n;i++){
		result*=i;
	}
	return result;
}

int main(){
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	int result=giaiThua(x);
	if(x<0){
		printf("Ko co giai thua cua so am!\n");
	} else {		
	    printf("%d!=%lld",x,result);
	}
}

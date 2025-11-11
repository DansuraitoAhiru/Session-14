#include <stdio.h>
#include <math.h>
int isPerfect(int n){
	if(n<=0){
		return false;
	}
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
		    sum+=i;
		}
	}
	return (sum==n);
}

int main(){
	int a,b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
    if(isPerfect(a)){
    	printf("%d la so hoan hao\n", a);
    } else {
    	printf("%d ko phai so hoan hao\n", a);
    }
    if(isPerfect(b)){
    	printf("%d la so hoan hao\n", b);
    } else {
    	printf("%d ko phai so hoan hao\n", b);
    }
}

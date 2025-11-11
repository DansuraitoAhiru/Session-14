#include <stdio.h>
#include <math.h>
int ucln(int a, int b){
	while (b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int main(){
	int x=93;
	int y=67;
	int result=ucln(x,y);
	printf("UCLN cua %d va %d la: %d", x,y,result);
}

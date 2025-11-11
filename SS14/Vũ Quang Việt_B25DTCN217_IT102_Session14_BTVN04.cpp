#include <stdio.h>
int inputNumber(int arr[]){
	int size;
	do{
		if(size<0 || size>100){
			printf("Moi ban nhap so phan tu (0;100): ");
			scanf("%d", &size);
		}
	}while (size<0 || size>100);
	int i;
	for(i=0;i<size;i++){
		printf("number[%d]= ", i);
		scanf("%d", &arr[i]);
	}
}

void printNumber(int arr[], int size){
	printf("Mang sau khi nhap la: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[100],size,i;
	size=inputNumber(arr);
	printNumber(arr,size);
}

#include <stdio.h>
int findMax(int arr[]){
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
	int max=0;
	for(i=0;i<size;i++){
	    if(max<arr[i]){ max=arr[i];}
	}
	return max;
}

int main(){
	int arr[100];
	int max=findMax(arr);
	printf("So lon nhat trong mang la: %d", max);
}

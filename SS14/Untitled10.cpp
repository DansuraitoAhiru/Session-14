#include<stdio.h>
int  inputNumber(int arr[]){
	int size;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&size);
	
	for(int i = 0 ; i < size ; i++){
		printf("Nhap arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap mang thanh cong \n");
	return size;
}

void printNum(int arr[], int size){
	printf("Cac phan tu trong mang la : ");
	for(int  i = 0 ; i < size ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int addNum(int arr[],int size){
	int index,value ;
	do {
		printf("Nhap vi tri can them : ");
		scanf("%d",&index);
		
		if(index < 0 || index >= size){
			printf("Nhap index trong khoang 0 -> %d \n",size-1);
		}
	}while(index < 0 || index >= size);
	
	printf("Nhap gia tri cua phan tu muon them : ");
	scanf("%d",&value);
	
	for(int i = size ; i >= index ; i--){
		arr[i] = arr[i-1];
	}
	arr[index] = value ;
	int newSize = size + 1;
	return newSize;
}

void updateNum(int arr[],int size){
	int index , value ;
	do {
		printf("Nhap vi tri can them : ");
		scanf("%d",&index);
		
		if(index < 0 || index >= size){
			printf("Nhap index trong khoang 0 -> %d \n",size-1);
		}
	}while(index < 0 || index >= size);
	
	printf("Nhap gia tri cua phan tu muon them : ");
	scanf("%d",&value);
	
	arr[index] = value;
	printf("Cap nhat phan tu thanh cong \n");
}

int removeNum(int arr[], int size){
	int index ;
	do {
		printf("Nhap vi tri can them : ");
		scanf("%d",&index);
		
		if(index < 0 || index >= size){
			printf("Nhap index trong khoang 0 -> %d \n",size-1);
		}
	}while(index < 0 || index >= size);
	
	for(int i = index ; i < size ; i++){
		arr[i] = arr[i+1];
	}
	int newSize = size - 1 ;
	return newSize;
}

void sortNum(int arr[], int size){
	printf("1. Sap xep giam dan \n");
	printf("2. sap xep tang dan \n");
	int choice ;
	printf("Nhap lua chon cua ban : ");
	scanf("%d",&choice);
	if(choice == 1){
		for(int i = 0 ; i < size ; i++){
			for(int j = i +1 ; j < size ; j++){
				if(arr[i] < arr[j]){
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
		printNum(arr,size);
	}else if(choice == 2){
		for(int i = 0 ; i < size ; i++){
			for(int j = i +1 ; j < size ; j++){
				if(arr[i] > arr[j]){
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
		printNum(arr,size);
	}else {
		printf("Lua chon khong dung \n");
	}
}

void search(int arr[], int size){
	printf("1. Tim kiem tuyen tinh \n");
	printf("2. Tim kiem nhi phan \n");
	int choose,value;
	printf("NHap lua chon cua ban : ");
	scanf("%d",&choose);
	printf("Nhap gia tri muon tim : ");
	scanf("%d",&value);
	if(choose == 1){
		for(int i = 0 ; i < size ; i++){
			if(arr[i] == value){
				printf("Tim thay %d tai vi tri %d \n",value,i);
				return ;
			}
		}
		printf("Khong tim thay %d trong mang \n",value);
	}else if(choose == 2){
		for(int i = 0 ; i < size ; i++){
			for(int j = i +1 ; j < size ; j++){
				if(arr[i] > arr[j]){
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
		
		int left = 0 , mid , right = size-1 ; 
		while(left <= right){
			mid = (left + right) / 2 ;
			if(arr[mid] == value){
				printf("Tim thay %d tai vi tri %d \n",value,mid);
				return ;
			}else if(value > arr[mid]){
				left = mid +1 ;
			}else {
				right = mid -1 ;
			}
		}
		printf("Khong tim thay %d trong mang \n",value);
	}
}
int main(){
	int arr[100] ,size = 0 , choice = 0 ;
	
	while(choice != 8){
		printf("1. Nhap do dai cua mang va cac phan tu \n");
		printf("2. In ra mang \n");
		printf("3. Them 1 phan tu vao vi tri bat ky \n");
		printf("4. Sua 1 phan tu tai vi tri bay ky \n");
		printf("5. Xoa 1 phan tu tai vi tri bat ky \n");
		printf("6. Sap xep mang\n");
		printf("7. Tim kiem phan tu trong mang\n");
		printf("8. Thoat \n");
		
		printf("Nhap lua chon cua ban : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 : {
			size = inputNumber(arr);
				break;
			}
			case 2 :{
				printNum(arr,size);
				break;
			}
			case 3 : {
			size = addNum(arr,size);
				break;
			}
			case 4 : {
				updateNum(arr,size);
				break;
			}
			case 5 : {
			size = removeNum(arr,size);
				break;
			}
			case 6 : {
				sortNum(arr,size);
				break;
			}
			case 7 : {
				search(arr,size);
				break;
			}
			case 8 : {
				printf("Tam biet !!!");
				break;
			}
			default : {
				printf("Lua chon khong dung !");
				break;
			}
		}
	}
}

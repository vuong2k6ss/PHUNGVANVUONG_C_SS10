#include <stdio.h>

int main()
{
	int arr[8] = {16,14,12,16,17,12,13,18};
	int item;
	int length = sizeof(arr)/sizeof(arr[0]);
	int count = -1;
	printf("moi ban nhap gia tri can tim kiem:");
	scanf("%d",&item);
	for(int i=0;i<length;i++){
		if(arr[i]==item){
			printf("phan tu %d co vi tri index la %d\n",item,i);
			count=i;
		}
	}
	if(count==-1){
		printf("khong tim thay phan tu %d trong mang",item);
	}	
	return 0;
}


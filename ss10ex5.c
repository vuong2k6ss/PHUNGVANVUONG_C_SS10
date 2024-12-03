#include <stdio.h>

int main()
{
	int arr[8] = {11,14,16,17,21,24,26,29};
	int item;
	printf("moi nhap gia tri tim kiem: ");
	scanf("%d",&item);
	int length = sizeof(arr)/sizeof(arr[0]);
	int start=0, end = length-1;
	int mid;
	int flag = -1;
	while(start<=end){
		mid = (start+end )/2;
		if(arr[mid]>item){
			end = mid -1;
		}else if(arr[mid]<item){
			start = mid + 1;
		}else{
			printf("phan tu %d co vi tri la %d",item,mid);
			flag++;
			break;
		}
	}
	if(flag==-1){
		printf("phan tu %d khong co trong mang",item);
	}
	return 0;
}


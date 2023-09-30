#include <stdio.h>
void merge(int arr[],int beg,int mid,int end){
	int l,r,i,temp[10];
	for(l=beg,r=mid+1,i=beg; l<=mid && r<=end;i++){
		if(arr[l]<=arr[r])
			temp[i]=arr[l++];
		else
			temp[i]=arr[r++];
	}
	while(l<=mid)
		temp[i++]=arr[l++];
	while(r<=end)
		temp[i++]=arr[r++];
		
	for(i=beg;i<=end;i++)
		arr[i]=temp[i];
}
void mergeSort(int arr[],int beg,int end){
	int mid;
	if(beg<end){
		mid=(beg+end)/2;
		mergeSort(arr,beg,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,beg,mid,end);
	}
}
void main(){
	int i,arr[10],n;
	clrscr();
	for(i=0;i<10;i++){
		printf("Enter array item: ");
		scanf("%d", &arr[i]);
	}
	mergeSort(arr,0,9);
	printf("Sorted array is: ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	getch();
}
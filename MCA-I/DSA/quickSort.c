#include <stdio.h>
int partition(int arr[],int beg,int end){
	int pivot = arr[beg];
	int i= beg+1;
	int j=end;
	int temp;
	do{
		while(arr[i]<=pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<j){
    		temp=arr[i];
    		arr[i]=arr[j];
    		arr[j]=temp;
		}
	}while(i<j);
	temp=arr[beg];
	arr[beg]=arr[j];
	arr[j]=temp;
	return j;
}
/* int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 */
 /* int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = (high + 1);

    for (int j = high; j >= low + 1; j--) {
        if (arr[j] > pivot) {
            i--;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i - 1], &arr[low]);
    return (i - 1);
}
 */
void quickSort(int arr[],int beg,int end){
	if(beg<end){
		int p = partition(arr,beg,end);
		quickSort(arr,beg,p-1);
		quickSort(arr,p+1,end);
	}
}
void main(){
	int i,arr[10],n;
	
	for(i=0;i<10;i++){
		printf("Enter array item: ");
		scanf("%d",&arr[i]);
	}
	quickSort(arr,0,9);
	printf("Sorted array is: ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
}
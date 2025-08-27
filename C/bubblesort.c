#include <stdio.h>

void bubblesort(int arr[],int n){

		int temp;
		
	for(int i=0;i<n-1;i++){
			for(int j=0;j<n-1-i;j++){

				if(arr[j]>arr[j+1]){

						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
						}
					}
				}
			}
int main(){
	
	int arr[5]={56,23,6,8,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("The unsorted array is : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
				}
	bubblesort(arr,n);
	printf("The sorted array is : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
			}
return 0;
}



#include<stdio.h>
main(){
	int size,i,arr[size],sum=0;
	printf("enter size of array :");
	scanf("%d",&size);
	printf("enter the elements \n");
	for(i=0;i<size;i++){
		printf("enter arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		printf("arr[%d] elements is :%d\n",i,arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]>0){
			sum=sum+arr[i];
		}
		
	}
	printf(" sum of positive elements is :%d",sum);
}

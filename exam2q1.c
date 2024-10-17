#include<stdio.h>
main(){
	printf("enter the length of triangle :");
	int length;
	scanf("%d",&length);
	printf("enter the height of triangle :");
	int height;
	scanf("%d",&height);
	
	int area;
	area= (length*height)/2;
	printf("area of triangle is :%d",area);
	
}

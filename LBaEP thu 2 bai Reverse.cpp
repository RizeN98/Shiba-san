#include<stdio.h>

int main(){
	int a[10];
		printf("Input 10 numbers: \n");
	for(int i = 1 ; i < 11; ++i)
	{
		printf("Input number %d:",i);
		scanf("%d",&a[i]);
	}
	
	for(int i = 10; i >=1; --i){
		printf("%d ",a[i]);
	}
	
	
	return 0;
}

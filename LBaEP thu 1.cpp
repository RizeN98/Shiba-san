#include <stdio.h>

int main(){
	int a,b ;
	printf("input a: ");
	scanf("%d",&a);
	printf("input b: ");
	scanf("%d",&b);
	
	printf("Calculate Sum: %d + %d = %d\n",a,b,a+b);
	printf("Calculate Substracion: %d - %d = %d\n",a,b,a-b);
	
	if(b!=0 ){
		printf("Calculate Division: %d / %d = %d\n",a,b,a/b);
	}else{
		printf("error\n");
	}
	
	printf("Calculate Multiplication: %d * %d = %d",a,b,a*b);
	return 0;
	
}

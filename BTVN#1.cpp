#include <stdio.h>

int main(){
	int a, b;
	
	printf("Nhap vao a=\n");
	scanf("%d",&a);
	
	printf("Nhap vao b=\n");
	scanf("%d",&b);
	
	if (a>b){
		printf("%d / %d = %d\n",a, b, a/b);
	}else{
		printf("%d * %d = %d\n",a, b, a*b);
	}
	
	
	return 0;	
}


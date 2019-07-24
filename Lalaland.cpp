#include <stdio.h>

int main(){
	int a, b, c;
	
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	printf("nhap c=\n");
	scanf("%d",&c);
	
	if (a>b){
		if(a>c){
			if (b>c){
				printf("%d la so lon nhat\n",a);
				printf("%d la so nho nhat\n",c);
			}else{
				printf("%d la so lon nhat\n",a);
				printf("%d la so nho nhat\n",b);
			}	
		}else{
			printf("%d la so lon nhat\n",c);
			printf("%d la so nho nhat\n",b);
		}
	}else{
		if (c>a){
			if (c>b){
				printf("%d la so lon nhat\n",c);
				printf("%d la so nho nhat\n",a);
			}else{
			    printf("%d la so lon nhat\n",b);
			    printf("%d la so nho nhat\n",a);
			}
		}else{
			printf("%d la so lon nhat\n",b);
			printf("%d la so nho nhat\n",c);
		}
	}
	
	return 0;
}

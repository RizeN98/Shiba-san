#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,x1,x2;
	
	printf("Nhap a(a!=0)\n");
	scanf("%f",&a);
	
	printf("Nhap b\n");
	scanf("%f",&b);
	
	printf("Nhap c\n");
	scanf("%f",&c);
	
	float delta = b*b - 4*a*c;
	if (delta < 0){
		x1 = x2 = 0;
	}
	else if (delta == 0){
		x1 = x2 = -b/(2*a);
	}
	else{
		delta = sqrt(delta);
		x1 = (-b + delta) / (2 * a);
		x2 = (-b - delta) / (2 * a);
	}
	
	if (delta < 0){
		printf("Phuong trinh vo nghiem");
	}
	else if(delta == 0){
		printf("Phuong trinh co nghiem kep x = %.4f",x1);
	}
	else{
		printf("Phuong trinh da cho co 2 nghiem phan biet \nx1 = %4f \nx2 = %.4f",x1,x2);
	} 
}

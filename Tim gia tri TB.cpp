#include <stdio.h>

int main(){
	int a[10];
	for ( int i = 0; i < 10; i++)
	{
		printf("Nhap so tu nhien: ");
     	scanf("%d",&a[i]);
	}
	
	int sum = 0;
	float avg = 0;
	
	for (int i = 0 ; i < 10 ; i++)
	{
		sum += a[i];
	}
	
	avg = sum / 10.0;
	
	printf("gia tri TB cua mang la: %f",avg);
	
	return 0;
}



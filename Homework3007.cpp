#include <stdio.h>
int kiem_tra(int a){
	int sum = 0;
	for(int i = 1;i <=a/2;i ++){
		if(a % i == 0)
		sum +=i;
	}
	
	if(sum==a) return true;
	return false;
}
int main(){
    int a;
    printf("Nhap n: ");
    scanf("%d",&a);
    if(kiem_tra(a))
        printf("%d la so hoan hao.",a);
    else
        printf("%d khong phai la so hoan hao.",a);
    return 0;
}

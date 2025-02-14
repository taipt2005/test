#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("hay nhap so: ");
	scanf("%d", &a);
	if(a%2==0){
		printf("So %d la so chan!", a);
	}
	else printf("So %d la so le", a);
	
	return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
	int a=4;
	int b=3;
	int c=2;
	
	double S =(pow(a,3)+b*b+2*c+sqrt(a+b-c));
	
	printf("Gia tri cua bieu thuc S la: %.2f\n", S);
	
	return 0;
}


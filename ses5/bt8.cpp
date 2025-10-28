#include <stdio.h>

int main(){
	float m3; // so nuoc tieu thu
	float total = 0; // tong tien phai tra
	printf("moi nguoi dung nhap so met khoi nuoc tieu thu trong thang: ");
	scanf("%f", m3);
	if(m3<0){
	
		printf("so m3 nhap khong hop le!");
		return 0;
		
	}
	
	if (m3<=10){
		total = m3*6000;
	}
	else if (m3<=20){
		total = 10*6000 + (m3-10)*7000;
	}
	else if (m3<=30){
		total = 10*6000 + 10*7000 + (m3-20)*8500;
	}
	else if (m3>=30){
		total = 10*6000 + 10*7000 + 10*8500 + (m3-30)*10000;
	}
	printf("so tien can tra la: %.0f VND\n",total );
	return 0;
}

#include <stdio.h>

int main(){
	//kullan�c�dan gelen 2 float� topla
	float ilk;
	float iki;
	float sum;
	
	
	printf("Ilk sayiyi giriniz : ");
	scanf("%f", &ilk);
	
	printf("Ikinci sayiyi giriniz : ");
	scanf("%f", &iki);
	
	sum = ilk + iki; 
	
	printf("Girdiginiz sayilarin toplami : %f ", sum);
		
	return 0;
}

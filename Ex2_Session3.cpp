#include <stdio.h>
int main(){
	 float docelsius;
	 printf("Nhap nhiet do celsius: ");
	 scanf("%f", &docelsius);
	 
	 float dofahrenheit = (docelsius * 9 / 5) + 32; 
	 printf("Nhiet do fahrenheit la: %.2f\n ",dofahrenheit);
	 
	 return 0; 
} 2 

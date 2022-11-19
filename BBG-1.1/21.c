#include <stdio.h>
main()
{
	char o;
	float n1,n2;
	printf("Operator seciniz:'+'veya'-'veya'*'veya'/'\n");
	scanf("%c",&o);
	printf("Iki sayi giriniz:");
	scanf("%f%f",&n1,&n2);
	switch(o){
		case '+':
			printf("%f+%f=%f",n1,n2,n1+n2);
			break;
		case '-':
			printf("%f-%f=%f",n1,n2,n1-n2);
			break;
		case '*':
			printf("%f*%f=%f",n1,n2,n1*n2);
			break;
		case '/':
			printf("%f/%f=%f",n1,n2,n1/n2);
			break;
	default:
		printf("Hata! Yanlis operator secimi!");
	}
}
/* Kullanýcýdan aritmetik operatörü ('+','-','*' or '/') ve üzerinde iþlem yapýlacak iki sayýyý sorup, 
istenen aritmetik operatöre göre gereken iþlemi yapan, yukarýdaki operatörler dýþýnda her
hangi bir þey girildiðinde ise, "Yanlis operator secimi!" þeklinde hata mesajý yazdýran C programý yazýnýz.
Not: Programý önce operatör, sonra sayýlar girilecek þekilde yazýnýz.*/

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
/* Kullan�c�dan aritmetik operat�r� ('+','-','*' or '/') ve �zerinde i�lem yap�lacak iki say�y� sorup, 
istenen aritmetik operat�re g�re gereken i�lemi yapan, yukar�daki operat�rler d���nda her
hangi bir �ey girildi�inde ise, "Yanlis operator secimi!" �eklinde hata mesaj� yazd�ran C program� yaz�n�z.
Not: Program� �nce operat�r, sonra say�lar girilecek �ekilde yaz�n�z.*/

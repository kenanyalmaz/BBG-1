#include <stdio.h>
main()
{
	int yaricap;
	printf("Yaricapi Giriniz:");
	scanf("%d",&yaricap);
	printf("\nCap:%d\n",2*yaricap);
	printf("Cevre:%f\n",2*3.14159*yaricap);
	printf("Alan:%f\n",3.14159*yaricap*yaricap);
}
/*Kullan�c�dan bir �emberin yar��ap�n� alan ve bu �emberin �ap�n�, �evresini ve alan�n� hesaplayan program �rne�i
P� de�eri i�in 3.14159
B�t�n hesaplamalar�n�z� kulland���n�z "printf" ifadeleri i�ine yapt�r�n. %f d�n���m belirtecini kullan�n.*/

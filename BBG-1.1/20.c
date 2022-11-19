#include <stdio.h>
main()
{
	int plaka_kodu;
	printf("Ilin plaka kodunu giriniz:");
	scanf("%d",&plaka_kodu);
	switch(plaka_kodu){
		case 6:
			printf("Ankara");
			break;
		case 34:
			printf("Istanbul");
			break;
		case 35:
			printf("Izmir");
			break;
		case 45:
			printf("Manisa");
			break;
	default:
		printf("Tanimsiz Plaka Kodu");
	}
}
/* Girilen il plaka kodlarýna göre þehir isimlerinin
yazdýrýlmasý
* Program tarafýndan desteklenecek iller:
* ANKARA (6)
* ÝSTANBUL (34)
* ÝZMÝR (35)
* MANÝSA (45)
* Bunlarýn dýþýnda bir plaka kodu girilirse «TANIMSIZ
PLAKA KODU» þeklinde hata mesajý verilecektir.*/

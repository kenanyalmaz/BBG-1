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
/* Girilen il plaka kodlar�na g�re �ehir isimlerinin
yazd�r�lmas�
* Program taraf�ndan desteklenecek iller:
* ANKARA (6)
* �STANBUL (34)
* �ZM�R (35)
* MAN�SA (45)
* Bunlar�n d���nda bir plaka kodu girilirse �TANIMSIZ
PLAKA KODU� �eklinde hata mesaj� verilecektir.*/

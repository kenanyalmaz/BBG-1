#include <stdio.h>
main()
{
	int sayi, toplam=0;
	do{
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		toplam+=sayi;
	}while(sayi!=0);
	printf("\nToplam=%d",toplam);
}
/*0 girilene kadar girilen t�m say�lar�n toplanmas�n� hesaplayan program (do...while ile)*/

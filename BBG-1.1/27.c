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
/*0 girilene kadar girilen tüm sayýlarýn toplanmasýný hesaplayan program (do...while ile)*/

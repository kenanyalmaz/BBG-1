#include <stdio.h>
main()
{
	int x;
	int y;
	printf("Iki Sayi Giriniz:");
	scanf("%d%d",&x,&y);
	printf("Toplamlari:%d\n",x+y);
	printf("Farklari:%d\n",x-y);
	printf("Carpimlari:%d\n",x*y);
	printf("Bolumleri:%f\n",(float)x/y);
	printf("Modlari:%d\n",x%y);
}
//Girilen iki say�n�n toplam�, fark�, �arp�m�, b�l�m� ve modunu hesaplayan program

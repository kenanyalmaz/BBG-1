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
//Girilen iki sayýnýn toplamý, farký, çarpýmý, bölümü ve modunu hesaplayan program

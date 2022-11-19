#include <stdio.h>
main()
{
	int para,onluk,yirmilik,ellilik,yuzluk;
	printf("Cekmek istediginiz para miktarini giriniz:");
	scanf("%d",&para);
	if(para%10!=0)printf("En kucuk 10TL'lik banknot mevcut!");
	else{
		yuzluk=para/100;para-=yuzluk*100;
		ellilik=para/50;para-=ellilik*50;
		yirmilik=para/20;para-=yirmilik*20;
		onluk=para/10;
		if(yuzluk>0) printf("%d tane 100TL\n",yuzluk);
		if(ellilik>0) printf("%d tane 50TL\n",ellilik);
		if(yirmilik>0) printf("%d tane 20TL\n",yirmilik);
		if(onluk>0) printf("%d tane 10TL\n",onluk);
	}
}
/*Bir memur, ATM makinasýndan para çekmek istemektedir. Makinede sadece 10, 20, 50 ve 100 TL' lik banknotlar kalmýþtýr. Büyük deðerli
banknotlarýn sayýsý maksimum olacak þekilde, çekilecek paranýn kaç tane 100, 50, 20 ve 10 liralýk banknottan oluþacaðýný ekranda yazan C programýný yazýnýz.
Örnek çýktýlar : 
Lütfen para miktarýný giriniz : 2435
En küçük 10 TL’ lik banknot mevcut..!
Lütfen para miktarýný giriniz : 2430
24 adet 100 TL
1 adet 20 TL
1 adet 10 TL*/

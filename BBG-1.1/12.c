#include <stdio.h>
main()
{
	int a,b,c,enkucuk,enbuyuk;
	printf("Uc farkli tamsayi giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Toplam:%d\n",a+b+c);
	printf("Ortalama:%f\n", (float)(a+b+c)/3);
	printf("Carpim:%d\n",a*b*c);
	enkucuk=a;
	if(b<enkucuk) enkucuk=b;
	if(c<enkucuk) enkucuk=c;
	printf("Enkucuk deger:%d\n",enkucuk);
	enbuyuk=a;
	if(b>enbuyuk) enbuyuk=b;
	if(c>enbuyuk) enbuyuk=c;
	printf("Enbuyuk deger:%d\n",enbuyuk);
}
/* Klavyeden 3 farkl� tamsay� giri�i yapt�ran, daha sonra bu say�lar�n toplam�n�, ortalamas�n�, �arp�m�n�, en k�����n� ve
en b�y���n� hesaplayan bir program yaz�n.*/

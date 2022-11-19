#include <stdio.h>
#include <stdio.h>
main()
{
	int sayfa=10,okunansayfa=0,gun=0;
	while(okunansayfa<1000){
		okunansayfa+=sayfa;
		sayfa+=5;
		gun++;
	}
	printf("%d. gun icinde kitap bitmis olur",gun);
}
/*Furkan, bir romanýn her gün bir önceki gün okuduðu
sayfadan 5 sayfa fazlasýný okumaktadýr. Ýlk gün 10 sayfa
okuyarak baþlayan Furkan'ýn 1.000 sayfalýk bir romaný kaç
günde bitireceðini bulan programý C dilinde kodlayýnýz.*/

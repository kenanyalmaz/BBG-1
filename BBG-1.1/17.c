#include <stdio.h>
main()
{
	int puan;
	printf("Notu giriniz:");
	scanf("%d",&puan);
	if(puan>=0&&puan<=49)
	printf("Harf karsiligi: FF");
	else if(puan>=50&&puan<=59)
	printf("Harf karsiligi: FD");
	else if(puan>=60&&puan<=64)
	printf("Harf karsiligi: DD");
	else if(puan>=65&&puan<=69)
	printf("Harf karsiligi: DC");
	else if(puan>=70&&puan<=74)
	printf("Harf karsiligi: CC");
	else if(puan>=75&&puan<=79)
	printf("Harf karsiligi: CB");
	else if(puan>=80&&puan<=84)
	printf("Harf karsiligi: BB");
	else if(puan>=85&&puan<=89)
	printf("Harf karsiligi: BA");
	else if(puan>=90&&puan<=100)
	printf("Harf karsiligi: AA");
	else printf("Uygun deger girmediniz!");
}
/*Girilen notun harf kar��l���n� bulan program.
Girilen not;
* 0 ile 49 aras�nda FF
* 50 ile 59 aras�nda FD
* 60 ile 64 aras�ndaysa DD
* 65 ile 69 aras�ndaysa DC
* 70 ile 74 aras�ndaysa CC
* 75 ile 79 aras�ndaysa CB
* 80 ile 84 aras�ndaysa BB
* 85 ile 89 aras�ndaysa BA
* 90 ile 100 aras�ndaysa AA
yazd�ran program yaz�n�z.
Bunlar�n d���ndaysa �Uygun de�er girmediniz!� �eklinde uyar� verip,
programdan ��kacak.*/


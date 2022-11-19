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
/*Girilen notun harf karşılığını bulan program.
Girilen not;
* 0 ile 49 arasında FF
* 50 ile 59 arasında FD
* 60 ile 64 arasındaysa DD
* 65 ile 69 arasındaysa DC
* 70 ile 74 arasındaysa CC
* 75 ile 79 arasındaysa CB
* 80 ile 84 arasındaysa BB
* 85 ile 89 arasındaysa BA
* 90 ile 100 arasındaysa AA
yazdıran program yazınız.
Bunların dışındaysa «Uygun değer girmediniz!» şeklinde uyarı verip,
programdan çıkacak.*/


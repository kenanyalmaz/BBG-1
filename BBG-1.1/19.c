#include <stdio.h>
main()
{
	char harf;
	printf("Bir harf giriniz:\n");
	scanf("%c",&harf);
	switch(harf){
		case 'a':
		case 'A':
			printf("A harfi girdiniz.");
			break;
	default:
		printf("A harfi girmediniz.");
	}
}
/* Klavyeden ‘a’ veya ‘A’ harfi girildiðinde "A harfi girdiniz" mesajýný ekrana yazdýracak bir program yazýlacaktýr. 
(Baþka bir harf girilirse "A harfi girmediniz" þeklinde hata mesajý verilecektir.)*/

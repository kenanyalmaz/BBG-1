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
/* Klavyeden �a� veya �A� harfi girildi�inde "A harfi girdiniz" mesaj�n� ekrana yazd�racak bir program yaz�lacakt�r. 
(Ba�ka bir harf girilirse "A harfi girmediniz" �eklinde hata mesaj� verilecektir.)*/

#include <stdio.h>
main()
{
	int a,b,c;
	printf("3 farkli sayi giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("Ilk sayi en buyuktur");
		}
		else{
			printf("Ucuncu sayi en buyuktur");
		}
	}
	else
	if(b>c){
		printf("Ikinci sayi en buyuktur");
	}
	else
	printf("Ucuncu sayi en buyuktur");
	}
/*3 farklý sayýdan en büyüðünü bulan program*/

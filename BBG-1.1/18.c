#include <stdio.h>
main()
{
	int a;
	printf("Sayi giriniz:");
	scanf("%d",&a);
	switch(a){
		case 1: printf("\nGirilen Sayi=%d",a);
		        printf("\nGirilen sayinin 3 fazlasi=%d",a+3);
		        break;
		case 2: printf("\nGirilen Sayi=%d",a);
		        printf("\nGirilen sayinin 3 kati=%d",a*3);
		        break;
	    case 3: printf("\nGirilen Sayi=%d",a);
	            break;
	default: printf("\nGirilen sayi 1, 2 veya 3 degildir.");
    }
}
/* Klavyeden girilen sayýya göre,
* girilen sayý 1 ise, girilen sayýnýn üç fazlasýný
* girilen sayý 2 ise, girilen sayýnýn üç katýný
* girilen sayý 3 ise sayýnýn kendisini
* 1, 2, 3 dýþýnda her hangi bir sayý girildiðinde ise
‘Girilen sayi 1, 2 veya 3 degildir’ hata mesajýný
yazdýran C programý yazýnýz. (Switc...Case kullanmalýsýnýz.)*/

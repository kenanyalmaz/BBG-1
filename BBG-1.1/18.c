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
/* Klavyeden girilen say�ya g�re,
* girilen say� 1 ise, girilen say�n�n �� fazlas�n�
* girilen say� 2 ise, girilen say�n�n �� kat�n�
* girilen say� 3 ise say�n�n kendisini
* 1, 2, 3 d���nda her hangi bir say� girildi�inde ise
�Girilen sayi 1, 2 veya 3 degildir� hata mesaj�n�
yazd�ran C program� yaz�n�z. (Switc...Case kullanmal�s�n�z.)*/

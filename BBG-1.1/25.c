#include <stdio.h>
main()
{
	float satis=0;
	char cevap='e';
	while(cevap=='e'){
		printf("Satis miktari:");
		scanf("%f",&satis);
		printf("Komisyon:%f\n",satis*0.1);
		printf("Devam etmek istiyor musunuz?(e-h)");
		scanf("\n%c",&cevap);
	}
}
/*Dýþardan girilen satýcý satýþ verilerini sýrayla alýp ne kadar
komisyon verileceðini, kullanýcý programý kapatýncaya kadar
devam eden program*/

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
/*D��ardan girilen sat�c� sat�� verilerini s�rayla al�p ne kadar
komisyon verilece�ini, kullan�c� program� kapat�ncaya kadar
devam eden program*/

#include <stdio.h>
main()
{
	int yaricap;
	printf("Yaricapi Giriniz:");
	scanf("%d",&yaricap);
	printf("\nCap:%d\n",2*yaricap);
	printf("Cevre:%f\n",2*3.14159*yaricap);
	printf("Alan:%f\n",3.14159*yaricap*yaricap);
}
/*Kullanýcýdan bir çemberin yarýçapýný alan ve bu çemberin çapýný, çevresini ve alanýný hesaplayan program örneði
PÝ deðeri için 3.14159
Bütün hesaplamalarýnýzý kullandýðýnýz "printf" ifadeleri içine yaptýrýn. %f dönüþüm belirtecini kullanýn.*/

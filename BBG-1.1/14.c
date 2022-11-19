#include <stdio.h>
main()
{
	int num1, num2;
    printf("Iki tam sayi girin.\n");
    printf("Bu iki sayinin karsilastirmasi yapilacaktir: ");
    scanf("%d %d", &num1, &num2);
    if(num1==num2) 
        printf("%d esittir %d\n",num1,num2);
    if(num1!=num2) 
        printf("%d esit degildir %d\n",num1,num2);
    if(num1 < num2 ) 
        printf( "%d kucuktur %d\n",num1,num2);
    if(num1>num2) 
        printf("%d buyuktur %d\n",num1,num2);
    if(num1<=num2)
        printf("%d kucuktur ya da esittir %d\n",num1,num2);
    if(num1>=num2)
        printf("%d buyuktur ya da esittir.%d\n",num1,num2);
}
/* Klavyeden girilen iki sayýnýn karþýlaþtýrmasýný yapan
C programý yazýnýz.*/

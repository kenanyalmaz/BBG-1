#include <stdio.h>
main()
{
	int n=1,s=0;
	while(n!=0){
		printf("Bir sayi giriniz:");
		scanf("%d",&n);
		s+=n;
	}
	printf("\nToplam=%d",s);
}
/*0 girilene kadar girilmi� t�m say�lar�n toplanmas�n� sa�layan program*/

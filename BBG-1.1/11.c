#include <stdio.h>
main()
{
	int x,y;
	printf("Iki sayi giriniz:");
	scanf("%d%d",&x,&y);
	if(x>y){
		printf("%d buyuktur\n",x);
	}
	if(x<y){
		printf("%d buyuktur\n",y);
	}
	if(x==y){
		printf("Bu sayilar esit.\n");
	}
}
/*Kullan�c�dan iki tam say� isteyen ve daha sonra b�y�k olan say� ile beraber 'b�y�kt�r' ifadesini yazan
ancak say�lar birbirine e�itse 'Bu say�lar esit' yazan program.*/

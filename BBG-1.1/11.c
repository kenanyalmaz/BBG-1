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
/*Kullanýcýdan iki tam sayý isteyen ve daha sonra büyük olan sayý ile beraber 'büyüktür' ifadesini yazan
ancak sayýlar birbirine eþitse 'Bu sayýlar esit' yazan program.*/

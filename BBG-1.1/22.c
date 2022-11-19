#include <stdio.h>
main()
{
	int x;
	printf("Bir tamsayi giriniz:\n");
	scanf("%d",&x);
	if((2*x<19)&&((x>-20&&x<0)||(x>4&&x<=7)))
	    printf("Elemanidir.");
	else
	    printf("Elemani degildir.");
}
/*belirli bir kümenin elemaný olup olmadýðýný bulan program ama o kümeyi buraya yazamadým*/

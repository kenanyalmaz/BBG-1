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
/*belirli bir k�menin eleman� olup olmad���n� bulan program ama o k�meyi buraya yazamad�m*/

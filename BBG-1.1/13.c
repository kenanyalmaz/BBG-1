#include <stdio.h>
main()
{
	double a,b,c;
	int f=0;
	printf("3 sayi giriniz:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(c*c==a*a+b*b){
		printf("Bu 3 sayi dik ucgenin kenarlari olabilir.\n");
		f=1;
	}
	if(a*a==c*c+b*b){
		printf("Bu 3 sayi dik �cgenin kenarlari olabilir.\n");
		f=1;
	}
	if(b*b==a*a+c*c){
		printf("Bu 3 sayi dik �cgenin kanarlari olabilir.\n");
		f=1;
	}
	if(f==0) printf("Bu 3 sayi dik ucgenin kenarlari olamaz.");
}
/* float t�r�nden �� say� alan ve bu say�lar�n bir
dik ��genin �� kenar� olup olmayaca��na karar
veren bir program.*/

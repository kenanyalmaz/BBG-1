#include<stdio.h>
#include<conio.h>
main()
{
      char c;
      int sayi,s=0,k=0;
      float ort;
do{
           printf("\nSayi giriniz:");
           scanf("%d",&sayi);
           k++;
           s+=sayi;
           printf("\nBaska sayi girecekmisiniz (E/H)");
           c=getch();
}while((c=='E') || (c=='e'));
printf("\n%d sayi girdiniz!!!",k);
     printf("\nGirilen sayilarin toplami=%d",s);
     ort=(float)s/k;
     printf("\nGirilen sayilarin ortalamasi=%f",ort);
}
/*Belirsiz sayýda sayý giriþi yapýlan, (Kullanýcýya yeni bir sayý girip-girmeyeceðini soran), Girilen sayýlarýn ortalamasýný bulup ekranda yazdýran
C programý.*/

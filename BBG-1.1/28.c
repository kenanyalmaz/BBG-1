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
/*Belirsiz say�da say� giri�i yap�lan, (Kullan�c�ya yeni bir say� girip-girmeyece�ini soran), Girilen say�lar�n ortalamas�n� bulup ekranda yazd�ran
C program�.*/

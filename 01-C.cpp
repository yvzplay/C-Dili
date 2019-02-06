#include <stdio.h>//standart input output
#include <conio.h>//getch();

#include <iostream>
using namespace std;

int main()
{
   // printf(), cout<<"a<<endl, cin>>, scanf(
/* Çok Satır Yorum
*/
   
   printf("Selam\nChar: %c \nint: %d \nCokUzunSayi: %lld \nString: %s \nCast: %c",'c',65,6501111123456,"yavuzcan",65);

	getch();//bir tuşa basınız
	
	
	
	int a=10;
	int b=3,c=4;
	int d;
	printf("\na: %d,b: %d,c: %d",a,b,c);
	printf("\nBir sayiGiriniz: ");
	scanf("%d",&d);
	printf("Girilen: %d ",d);
	
	cout<<endl<<"Sayi Gir CPP: ";
	cin>>d;
	cout<<"GirlenCpp: "<<d<<endl;
	
	printf("\nisim Giriniz: ");

	char yazi[20];
	scanf("%s",yazi);// ampersant & kullanılmadı çünkü array name itself indicates its address. yazi == &yazi[0]
	printf("Girilen: %s ",yazi);
	
	
	
	printf ("\nOnbes sifir biraktik %015d \n",152);
	printf ("\nOnbes bosluk biraktik %15d \n",152);
	printf("Floatlar: %4.2f, %2.1f , %6.4f",3.12345678910,3.12345678910,3.12345678910);//ilki 3.12 verir çünkü "4" hane kaplayacak ve ondalıklı kısım "2 hane"
	
	printf("\nOzel Semboller \t ,SonKarakteriSiler\bSelam \\ \"");//ayrıca \ yazmak için \\," yazmak için \"
	
   return 0;
}

#include <stdio.h>

int asalmi(int n){
	
	int bayrak=1;
	for (int i=n-1;i>2;i--){
		if(n%i==0){
			bayrak=0;
			break;
		}	}
	return bayrak;}
	




int main(){
	
printf("***** SORU:1 ******\n\n");
	
/*SORU:1
nxn boyunda çıktı olacak şekilde ve ortada 1 lerden artı diğer yerler sıfır olacak 	şekilde kare yap
N=tekse ortada tek çigili kare, çift ise 2 çizgili kare olacak
00100
00100
11111
00100
00100


İç içe döngüde mantık basit satırlar:J, kolonlar:x, hangi hücrede istenen durum oluşuyorsa ınun takibi yapılack.
*/

int n=15;
int orta1,orta2;

//Tek ise
if(n%2==1){
	orta1=n/2;
	orta2=n;
	
	
}
//Çift ise
else{
	orta2=n/2;
	orta1=orta2-1;
}

for (int i=0;i<n;i++){
	
	
	for (int j=0;j<n;j++){
		if (i==orta1 || j==orta1 || i==orta2 || j==orta2){
			printf("%d",1);
		}else{
			printf("%d",0);
		}
		
		
	}
	printf("\n");
	
	
}


printf("\n\n***** SORU:2 ******\n\n");
/*SORU:2
Girilen sayıdanküçük, en büyük asal sayıyı yazdıran fonksiyon
*/

int sayi=30;

for (int i=sayi-1;i>2;i--){

	if(asalmi(i)==1){
		printf("%d",i);
		break;
	}
}

printf("\n\n***** SORU:3 ******\n\n");
/*SORU:3
n sayısının 2 tabanında logaritmasını yaklaşık olarak bul, mesela 30 sayısı 16-32 arasındadır 32ye yakındır yani 2^5 yani sonuç 5.
*/

int log=17;
int sonuc=1;

for (int i=0;i<100;i++){
	
	if(sonuc>log){
		
		if(sonuc-log<(log-(sonuc/2)))
			printf("%d",i);
		else
			printf("%d",i-1);
			
						
		break;
		
		
	}else{
		sonuc*=2;
	}
	
	
	
}

	
	
}





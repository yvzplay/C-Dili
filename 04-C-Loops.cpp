#include <stdio.h>

int main(){
	

	
	for(int i=0;i<=10;i+=2){
		printf("%d\n",i);
	}
	
	//WHILE
	int a=0;
	while(a<=10){
		printf("%d",a);
		a++;
	}
	
	//Do WHILE
	int i=0;
	
	do{
	printf("%d",i);
	i++;
	}while(i<=10);
	
	
	
/* 100'den 20'ye kadar 3 ve 7 ye tam bölünenleri yaz;*/
printf("\n\n Tam Bolunen Listesi:\n");

	for(int i=100;i>=20;i--){
		if(i%3==0 && i%7==0){
			printf("\n%d",i);
		}
	}
	
	
	
/*Üç adet sayı oku en büyüğünü yazdır*/

int sayi,max=0;

for (int i=0;i<3;i++){
	printf("\nsayi giriniz: ");
	scanf("%d",&sayi);
	if (sayi>max)
		max=sayi;
}

printf("En buyuk: %d",max);

/*kullanıcı -1 girene kadar ortalama bul*/

int girilen;
float ort,toplam=0.0,adet=0.0;
while(girilen!=-1){
	adet++;
	printf("\nsayi giriniz: ");
	scanf("%d",&girilen);
	toplam+=girilen;
	printf("\nOrtalama: %.2f",(float)(toplam/adet));
	
}
printf("\nExit\n");



/*girilen sayının asal kontrolü
yani girilen sadece kendisi ve 1 e bölünebilecek*/
	bool bayrak=0;
	printf("\nAsal kontrolu icin sayi giriniz: ");
	scanf("%d",&girilen);
	for (int i=girilen-1;i>1;i--){

		if(girilen%i==0){
		
			bayrak=1;
			break;}
	}
	if(bayrak==1)
		printf("\nAsal Degil");
	else
		printf("Asaldir");
	
/*100 e kadar asal sayıları bastır*/

	for (int i=2;i<=100;i++){
		bayrak=0;

		for (int j=i-1;j>1;j--){
			
			if(i%j==0){
			bayrak=1;
			break;}//continue de var tabii
			
			
			}
		if(bayrak!=1)
			printf("%d_",i);
		
		
	}

}

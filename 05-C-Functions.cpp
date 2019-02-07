#include <stdio.h>



int carp(int x,int y){
	return x*y;
}

int fiboIter(int n){//1,1,2,3,5,8,13,21...... f(n)=f(n-1)+f(n-2)

int a=1,b=1;
int sonEleman;
int toplam=2;

for (int i=3;i<=n;i++){
	sonEleman=a+b;
	a=b;
	b=sonEleman;
	toplam+=sonEleman;}

return sonEleman;}

int fiboOzyineli(int n){
	
	if (n==2 || n==1){
		return 1;
	}
	
	else if (n==3){
		return 2;
	}
	
	else{
		return fiboOzyineli(n-1)+fiboOzyineli(n-2);
	}
	
	
}

int kareHesapla(int kenar);

int main(){
	
int x,y,n;
/*
printf("ilk sayi: ");
scanf("%d",&x);
printf("ikinci sayi: ");
scanf("%d",&y);
printf("%d x %d = %d",x,y,x*y);

printf("\nfibo icin n: ");
scanf("%d",&n);
printf("%d nci eleman: %d",n,fiboOzyineli(n));
	*/
	
	

/*

---------
-   -   -
---------
-   -   -
---------

Üstteki şekil 5 kareden oluşuyor bunun fonksiyonunu özyineli yaz
1
1+4
1+4+9
1+4+9+16*/

int kenar;
printf("\nkenar sayisi: ");
scanf("%d",&kenar);
printf("%d kenarli icin %d adet kare vardir.",kenar,kareHesapla(kenar));



}

int kareHesapla(int kenar){
	
	int kare=kenar*kenar;
	if (kenar==1){
		return 1;
	}
	
	else{
	return kare+kareHesapla(kenar-1);
	}
	

	

}





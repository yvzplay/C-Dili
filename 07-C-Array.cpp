#include <stdio.h>



int main(){
	
int a[10];//çoğunlukla sıfırlardan oluşan yer alındı ama arada farklı sayılar da olabiliri.

for (int i=0;i<10;i++){
	printf("%d ",a[i]);
}

for (int i=0;i<10;i++){
	a[i]=i;
}
printf("\n");

for (int i=0;i<10;i++){
	printf("%d ",a[i]);
}


int b[]={2,3,9,8,15,-6};

printf("\n %d",b[4]);


int iki[2][3]={{1,2,3},{4,5,6}};

printf("\n%d",iki[0][2]);//3 




/* diziyi ters cevir*/
printf("\n\n***diziyiTersCevir***\n\n");

for (int i=9;i>=0;i--){
	printf("%d ",a[i]);//bu tabii sadece ekrana basma, ramde aynı alana yazmak için ise swapping lazım ve ortada durmak lazım
}

int temp;

for (int i=0;i<=10;i++){
	if(((10+1)/2)==i){
		break;
	}else{
	temp=a[i];
	a[i]=a[9-i];
	a[9-i]=temp;}
	
}
printf("\n\n***gercekten donmus olani***\n\n");

for (int i=0;i<10;i++){
	printf("%d ",a[i]);
}

/* ilk 20 fibo sayısını 20 boyutlu bir diziye yaz
1,1,2,3,5,8.....*/
printf("\n\n***fibo***\n\n");	

int fibo[20];
fibo[0]=1;
fibo[1]=1;

for (int i=2;i<20;i++){
	fibo[i]=fibo[i-1]+fibo[i-2];
}
	
for (int i=0;i<20;i++){
	printf("%d ",fibo[i]);
}
	
}





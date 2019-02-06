#include <stdio.h>

int main(){
	
	int i;
	printf("Sayi giriniz: ");
	scanf("%d",&i);
	if(i>0){
		printf("\nPozitif");
	}else if(i<0){
		printf("Negatif");
	}else{
		printf("Sayi Sifir");
	}
	
	//KISA yazış, if den sonraki ilk satır süslü parantezde kabul edilir
	
	if(3>2)
	printf("\ndoru");
	
}

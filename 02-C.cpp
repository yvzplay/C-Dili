#include <stdio.h>

int main(){
	
	//farklı bloklar
	int a=10;
	{
		int a=5;
		printf("a: %d",a);
	}
	printf("\na: %d",a);
	
	
	int b=3,c=7;
	
	//shift operatörü
	printf("\na: %d",a);
	printf("\n a<<2: %d",a<<2);//normalde a=10, ikilik sistemde   (1010) bu iki kere sola kayacak boşluklara sıfır gelecek, yani   (101000)=40 oldu
	printf("\n a>>2: %d",a>>2);// (1010)->(**10)=2
	
	printf("\n\n %d",a==b);//false yani 0 verir
	printf("\n %d",a!=b);
	
	printf("\n %s", a==b ? "true" : "false");//cpp da var ama c de bool dönmez, onun çözümü
	
	printf("\na++: %d",a++);
	printf("\na: %d",a);
	
	int x;
	int y=5, z=2;
	// AND OR
	printf("\n5&2: %d",y&z);//y ve z yi 2lik tabana çevirip AND leyeceğiz, yani (101) AND (010) = 000 çıkar
	printf("\n2|4&3: %d",z|4&7);//4&3->100 VE 111= 100=4 ->  2|4 = 010 OR 100 = 110 =6
	
	//& önceliklidir o yüzden üstte önce o yapıldı
	
	//Logic/Mantıksal operatörler   ==, !=, birleştirme çift && ||
	printf("\n Logic 2<5 && 2>0: %d",2<5 && 2>0);
	
	printf("\n Kisa devre, 3>1 || y++: %d ",3>1 || y++);// sol taraf bir verdiği için sağa bakmaz bile, yani y artırılmadı
	printf("\ny: %d",y);


/* Kullanıcıdan bugünün tarihini ve kaç yaşında olduğunu alarak
doğum tarihini yıl olarak bulan kod yazınız*/

	int buyil,yas;
	printf("\nBugunu giriniz: ");
	scanf("%d",&buyil);
	printf("\nYasinizi giriniz: ");
	scanf("%d",&yas);
	printf("\nDogumYiliniz: %d",buyil-yas);


/* a musluğu 3, b musluğu 8, c musluğu 12 saatte dolduruyor,
3 ü birlikte ne kadar surede doldurur*/


	float A=1.0/3.0,B=1.0/8.0,C=1.0/12.0;
	printf("\n3 musluk beraber %.1f saatte doldurur",1.0/(A+B+C));
	
	

	printf("\nCast: %d",(int)3.14);//öne (int) ile cast ettik
	
	
	
	
}

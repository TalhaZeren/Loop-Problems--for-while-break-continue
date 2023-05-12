#include<stdio.h>
int main(){
	
int sayi1,sayi2,adet =0;
int ek,ek2,i,adet2 = 0;

printf("OBEB 'i bulunacak sayilari giriniz :");
scanf("%d%d",&sayi1,&sayi2);

while(true){
	if(sayi1 >0 && sayi2 >0){
		
		if(sayi1 > sayi2){
			
		ek = sayi1 - sayi2;
		sayi1 = ek;
		adet++;
		
		} 
		
		else if(sayi1 < sayi2){
			
		ek2 = sayi2 - sayi1;
		sayi2 = ek2;
		adet++;
		
		}
		
		else if(sayi1 == sayi2){
			break;
		}
	}
	
else if(sayi1 <= 0 || sayi2 <=0){
	printf("Sayilar Sifirdan Buyuk Olmali.\n\n");
		printf("OBEB 'i bulunacak sayilari giriniz :");
		scanf("%d%d",&sayi1,&sayi2);
	continue;
}
}

printf("Sayilarin OBEB'i %d 'dir\n\n",sayi1);
	printf("OBEB cikarma zinciri %d'dir",adet);

	return 0;
}

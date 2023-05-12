#include<stdio.h>
int main(){
	/*
	ARABA MARKASI	ARAÇ KODU
		Renault			1 
		Mazda			2
		Honda			3
		Ford			4
	*/
	
int kod,adet = 0, adet1 = 0, adet2 = 0, adet3 = 0, max;
float toplam1 = 0, toplam2 = 0, toplam3 = 0, toplam4 = 0, tutar, max1;
																					
while(true){
	
printf("Marka Kodunu ve Tutarini Giriniz (Cikmak icin 111 tuslayin) :");
scanf("%d%f",&kod,&tutar);

		if(kod == 1 && tutar >0){
		toplam1 += tutar;
		adet++;	
		}
		else if(kod == 2 && tutar >0){
		toplam2 += tutar;	
		adet1++;	
		}
		else if (kod == 3 && tutar >0){
		toplam3 += tutar;	
		adet2++;
		}
		else if(kod == 4 && tutar >0){
		toplam4 += tutar;	 
		adet3++;	 
		}
		else if(kod == 111){
			break;
		}
		else{
			printf("\nTanimli Bir Deger Giriniz.\n\n");
			continue;
		}
		
	max = adet;

		if (max < adet1){
			max = adet1;
		}
		else if(max < adet2){
			max = adet2;
		}
		else if(max < adet3){
			max = adet3;
		}

	max1 = toplam1;

		if(max1 < toplam2){
		max1 = toplam2;
		}
		else if(max1 < toplam3){
			max1 = toplam3;
		}
		else if(max1 < toplam4){
			max1 = toplam4;
		}
}	// While End;
	
	if (max == adet){
		printf("\n\nEn cok gelen arac RENAULT (%d kez)\n\n",max);
	}
	else if (max == adet1){
		printf("\n\nEn cok gelen arac MAZDA (%d kez)\n\n",max);
	}
	else if (max == adet2){
		printf("\n\nEn cok gelen arac HONDA (%d kez)\n\n",max);
	}
	else if (max == adet3){
		printf("\n\nEn cok gelen arac FORD (%d kez)\n\n",max);
	}

	if(max1 == toplam1){
	printf("En cok satis yapan marka RENAULT (%.2f TL) ",max1);
	}
	
	else if(max1 == toplam2){
	printf("En cok satis yapan marka MAZDA (%.2f TL) ",max1);
	}
	
	else if(max1 == toplam3){
	printf("En cok satis yapan marka HONDA (%.2f TL) ",max1);
	}
	
	else if(max1 == toplam4){
	printf("En cok satis yapan marka FORD (%.2f TL) ",max1);
	}

	printf("\n\n\n\t\t\t\t\tProgram sonlandiriliyor...");	

	return 0;
}

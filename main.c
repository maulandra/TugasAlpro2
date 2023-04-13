#include <stdio.h>
#include <math.h>

#include "rumus.h"

void firstDisplay(){
    printf("NAMA            : MAULANA ANDRA WIRATAMA");
    printf("\nNRP           : 2042221075");
    printf("\nKELAS         : 2A");
    printf ("\nMATA KULIAH  : ALGORITMA PEMROGRAMAN");
    printf("\nDEPARETEMEN   : TEKNIK INSTRUMENTASI");
}

void gantiPerhitungan(){
    printf("PILIH PERHITUNGAN YANG AKAN ANDA GUNAKAN :");
    printf("\n1. Menghitung Luas Lingkaran");
    printf("\n2. Menghitung Luas Permukaan Bola");
    printf("\n3. Menghtiung Volume Silinder");
    printf("\n4. Menghtiung Volume Bola");
    printf("\n5. Menghitung Volume Kubus");
}

float tampilPerhitungan(){
    char ulang  = 'y';
    #include "variabel.h"

    firstDisplay();

    while(ulang == 'y' || ulang == 'Y')
    {
        gantiPerhitungan();
        printf("\nPilih 1/2/3/4/5 : ");
        scanf("%d", &ganti);
        
        while(ganti < 1 || ganti >5){
            printf("\nMohon Ulangi Pemilihan Perhitungan");
            gantiPerhitungan();
            printf("\nPilih 1/2/3/4/5 : ");
            scanf("%d", &ganti);
        }

        if (ganti == 1){
			printf("\nMENGHITUNG LUAS LINGKARAN");
			printf("\nJari - jari (dalam satuan cm) = "); scanf("%f", &radius);
			hasil = LuasLingkaran(radius);
			printf("\nLuas lingkarannya adalah = %f cm", hasil);	
		} 
        else if(ganti == 2){
			printf("\nMENGHITUNG LUAS PERMUKAAN BOLA");
			printf("\nJari - jari (dalam satuan cm) = "); scanf("%f", &radius);
			hasil = LPermukaanBola(radius);
			printf("\nLuas permukaan bolanya adalah = %f cm", hasil);		
		}
        else if(ganti == 3){
			printf("\nMENGHITUNG VOLUME SILINDER ");
			printf("\nJari - jari (dalam satuan cm) = "); scanf("%f", &radius);
			printf("\nTinggi (dalam satuan cm)= "); scanf("%f", &tinggi);
			hasil = VolumeSilinder(radius, tinggi);
			printf("\nVolume silindernya adalah = %f cm", hasil);	
		}
        else if(ganti == 4){
			printf("\nMENGHITUNG VOLUME BOLA");
			printf("\nJari - jari (dalam satuan cm) = "); scanf("%f", &radius);
			hasil = VolumeBola(radius);
			printf("\nVolume bolanya adalah = %f cm", hasil);	
		}
        else if(ganti== 5){
			printf("\nMENGHITUNG VOLUME KUBUS");
			printf("\nSisi (dalam satuan cm) = "); scanf("%f", &sisi);
			hasil = VolumeKubus(sisi);
			printf("\nVolume kubusnya adalah = %f cm", hasil);		
		}

		printf("\nApakah ingin melakukan perhitungan lainnya (Y/n) = "); 
		scanf("%s", &ulang);
	}
	printf("\nTERIMA KASIH\n");
	return 0;
}

int main(){
    tampilPerhitungan();
}
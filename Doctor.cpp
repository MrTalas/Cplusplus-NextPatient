#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

int hasta_sayisi(){
	FILE *siradaki_hastalar=fopen("sira.txt","r");
	int ch;
	int kelime=0;
	do{
		ch=getc(siradaki_hastalar);
		if(ch=='\n'){ //Her alt sat�ra ge�ildi�inde kelime de�i�kenini art�rd�
			kelime++;
		}
		
	}while(ch!=EOF); //Dosyan�n sonuna kadar okudu
	return kelime;
}

int main(){
	system("color c");
    char hasta_adi[20];
    char hasta_soyadi[20];
    int a=0;
    int sayac;
    int ch;
    int girdi;
    while(1){
    FILE *siradaki_hastalar=fopen("sira.txt","a+");
    mark:
    system("cls"); 
    printf("\tHasta Bakma Sistemi V1");
    fscanf(siradaki_hastalar,"%d %s %s",&a,hasta_adi,hasta_soyadi);
    FILE *siradaki_hasta=fopen("siradaki.txt","w");
    fprintf(siradaki_hasta,"%d %s %s",a,hasta_adi,hasta_soyadi);
    fclose(siradaki_hasta);
    printf("\nMevcut Hasta: %d %s %s",a,hasta_adi,hasta_soyadi);
    
    printf("\nSiradaki Hastayi al[1]:");
    printf("\nSistemi Sifirla [2]\n:");
    scanf("%d",&girdi);
    if(girdi==1){
    	fscanf(siradaki_hastalar,"\n"); //S�radaki hastay� okuyaca�� i�in alt sat�ra ge�ti
    	goto mark;
	}
    else if(girdi==2){
    	FILE *siradaki=fopen("siradaki.txt","w"); //Dosyan�n i�indekileri sildi ve yeniden olu�turdu.
        FILE *sira_no=fopen("sira.txt","w"); //Dosyan�n i�indekileri sildi ve yeniden olu�turdu.
        fprintf(siradaki,"0 Sistem Sifirlandi");
        fprintf(sira_no,"0 Sistem Sifirlandi\n");
        fclose(siradaki); //Dosyay� kaydetti
        fclose(sira_no); //Dosyay� kaydetti
        system("cls"); //Konsolu temizledi
	}
    fclose(siradaki_hastalar); //Dosyay� kaydetti
    Sleep(100);
    system("cls");   
    }
    return 0;
}

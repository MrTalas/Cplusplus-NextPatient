#include <stdio.h>
#include <windows.h>
#include <string.h>


int hasta_sayisi(){
	FILE *siradaki_hastalar=fopen("sira.txt","r");
	int ch;
	int kelime=0;
	do{
		ch=getc(siradaki_hastalar);
		if(ch=='\n'){ //Her alt satýra geçildiðinde kelime deðiþkenini artýrdý
			kelime++;
		}
		
	}while(ch!=EOF); //Dosyanýn sonuna kadar okudu
	return kelime;
}


int main(){
	system("color a");
	int sira;
    int sira_al;
    char hasta_adi[20];
    char hasta_soyadi[20];
    while(1){
    FILE *sira_no=fopen("sira.txt","a");
    printf("\tHasta Kayit Sistemi V1");
    sira=hasta_sayisi(); //Mevcut hasta sayýsý
    //printf("\nSiradaki Kisi Sayisi %d",sira-1);
    printf("\nSira Al [1]");
    scanf("%d",&sira_al);
    if(sira_al==1){
        printf("\nAd Giriniz:");
        fflush(stdin);
        gets(hasta_adi);
        printf("\nSoyad Giriniz:");
        fflush(stdin);
        gets(hasta_soyadi);
        fprintf(sira_no,"%d %s %s\n",sira,hasta_adi,hasta_soyadi); ://Hasta bilgilerini dosyaya yazdý
        printf("\nKayit Basarili Sira No %d\n",sira);
        Sleep(2000);
        system("cls");
        fclose(sira_no);
    }
    }
}

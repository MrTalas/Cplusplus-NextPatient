#include <stdio.h>
#include <windows.h>


int main(){
	system("color 3");
    char hasta_adi[20];
    char hasta_soyadi[20];
    int a=0;
    while(1){
	FILE *siradaki=fopen("siradaki.txt","r");
	fscanf(siradaki,"%d %s %s",&a,hasta_adi,hasta_soyadi);
	printf("Sira No: %d\n",a);
	printf("Siradaki kisi:%s %s",hasta_adi,hasta_soyadi);
	Sleep(2000); 
	system("cls");
	}
	return 0;
}

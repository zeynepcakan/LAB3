#include <stdio.h>
#include <stdlib.h>

int toplam(int n){
	if(n == 1)
		return n;
	else
		return (n+toplam(n-1));	
}

void main() {
	int sayi=6;
	printf("Sonuc=%d",toplam(sayi));
	return 0;
}

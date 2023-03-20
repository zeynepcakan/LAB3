#include <stdio.h>
#include <stdlib.h>

int odd(int dizi[],int n);

int main() {
	
	int dizi[100],n,i,a;
	printf("Please enter the number of elements of the array:  ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("array[%d]= ",i);
		scanf("%d",&dizi[i]);
	}
	printf("\n");
	a= odd(dizi,n);
	printf("the number of odd number in the array= %d",a);
	
	return 0;
}

int odd(int dizi[],int n){
	
	static int c=0;
	static int j=0;
	
	if(j<n){

		if(dizi[j]%2!=0){
			c++;	
		}
		j++;
		return odd(dizi,n);	
	}
	else
		return c;	
}


#include <stdio.h>
#include <stdlib.h>

void my_recursive_function(int n){
	if(n==0)
		return;
	printf("%d",n);
	my_recursive_function(n-1);	
}

void main() {
	my_recursive_function(7);	
	return 0;
}

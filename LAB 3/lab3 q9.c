#include <stdio.h>
#include <stdlib.h>

char f(int b);

main() {
	
	char a;
	a=f(10);
	printf("%c",a);
}

char f(int b){
	printf("a");
	if(b<=8)
		return 'a';
	else{
		printf("a");
		f(b--);
	}	
}
//Answer: infinite.

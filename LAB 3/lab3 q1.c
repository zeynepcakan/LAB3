#include <stdio.h>
#include <stdlib.h>

void Fun(int n,int a,int b){
	
	if(n>=10)
		return;
	Fun(n+2,a,b+n);
	printf("%d %d %d\n",n,a,b);
}

int main() {
	
	int n=0,a=5,b=7;
	Fun(n,a,b);
	
	return 0;
}

//call by value test in function
#include <stdio.h>
int power(int base, int n){
	int p;
	for (p=1;n>0;n--)
		p=p*base;
	return p;
}

main(){
	int m=2;
	int s=5;
	printf("%d\n",power(m,s));
	printf("%d",s);
	return 0;
}
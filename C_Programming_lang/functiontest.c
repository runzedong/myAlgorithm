// this is a function test demo we are going to calculet the power of 2
#include <stdio.h>
int power(int base, int n);
main(){
	int base=2;
	int result[10];
	int i;
	for (i=0;i<10;i++)
		result[i]=i;
	for (i=0;i<10;i++)
		result[i]=power(base,result[i]);
	for (i=0;i<10;i++)
		printf("%d\n",result[i]);
}
int power (int base, int n){
	int i,p;
	p=1;
	for (i=0;i<n;i++)
		p=p*base;
	return p;
}
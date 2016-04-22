#include <stdio.h>
void printd(int n);
main(){
	int n=123;
	printd(123);
}
void printd(int n){
	if (n<0){
		putchar('-');
		n=-n;
	}
	if(n/10)
		printd(n/10);
	putchar(n%10+'0');
}
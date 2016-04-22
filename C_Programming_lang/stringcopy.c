//the program copy t to s. with pointer.
#include <stdio.h>
void strcopy (char *s, char *t){
	while(*s++=*t++)
		;
}

void main(){
	char *t="123456789987654321";
	char *s;
	strcopy(s,t);
	printf("%s\n",s);
}
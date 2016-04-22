// this program compare two string and returen the difference as a dictionary order. 
#include <stdio.h>
int strcmp(char *s, char *t);
void main(){
	char *s="hello, i am d";
	char *t="hello, i am j";
	printf("if s<t, return negative, if s=t, return zero, if s>t, return postitive\n");
	printf("%d\n",strcmp(s,t));
}
int strcmp(char *s, char *t){
	for(;*s==*t;s++,t++)
		if(*s=='\0')
			return 0;
	return *s-*t;
}


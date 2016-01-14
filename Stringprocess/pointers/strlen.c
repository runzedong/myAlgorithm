#include <stdio.h>
int strlen(char *s);
void main(){
	char *s="hello the world";
	printf("%d\n",strlen(s));
	printf("%d\n",strlen("hello the world"));
}
int strlen(char *s){
	int n;
	for (n=0;*s!='\0';s++)
		n++;
	return n;
}
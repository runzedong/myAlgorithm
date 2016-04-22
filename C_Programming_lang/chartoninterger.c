//it is a function to convert char array to interger
#include <stdio.h>
#include <ctype.h>
int atoi(char s[]){
	int i,n,sign;
	for(i=0;isspace(s[i]);i++){
		;
	}
	sign=(s[i]=='-')? -1:1;
	if(s[i]=='+'||s[i]=='-')
		i++;
	for(n=0;isdigit(s[i]);i++)
		n=10*n+(s[i]-'0');
	printf("%d",i);
	return sign*n;
}
main(){
	char s[]="  -34566"; //7bit with \0. <printf i is 8>
	int c;
	c=atoi(s);
	printf("%d",c);
}
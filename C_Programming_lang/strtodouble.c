//convert a string to a double
#include <stdio.h>
#include <ctype.h>
#include <string.h>
double strtodouble(char s[]);
int main(){
	char s[]="-1.234";
	printf("%g\n",strtodouble(s));
	return 0;
}
double strtodouble(char s[]){
	double n,base;
	int i;
	int sign=1;
	for (i=0;isspace(s[i]);i++)
		;
	if(s[i]=='-')
		sign=-1;
	if (s[i]=='-'||s[i]=='+')
		i++;
	for(n=0.0;isdigit(s[i]);i++)
		n=10.0*n+(s[i]-'0');
	if(s[i]=='.')
		i++;
	for(base=1.0;isdigit(s[i]);i++){
		n=10.0*n+(s[i]-'0');
		base*=10.0;
	}
	printf("%g\n",n);
	return sign*n/base;
}
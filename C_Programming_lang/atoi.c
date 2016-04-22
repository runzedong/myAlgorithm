// convert s to integer. and it can skip white space and take sign into consideration
#include <ctype.h>
int atoi(char s[]){
	int i,n,sign;
	for(i=0;isspace(s[i]);i++)
		; // skip white space
	sign=(s[i]=='-')?-1:1;// take the sign
	if(s[i]=='+'==s[i]=='-')
		i++;
	for(n=0;isdigit(s[i]);i++){
		n=n*10+(s[i]-'0');
	}
	return sign*s[i];
}
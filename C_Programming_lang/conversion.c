// a function convertes the string number to interger
#include <stdio.h>
int strtoint(char s[]){
	int i,n;
	n=0;
	for (i=0;s[i]!='\0';i++){
		if (s[i]>='0'&&s[i]<='9')
			n=n*10+(s[i]-'0');
	}
	return n;
}
// a function convertes the lower case to upper case //ASCII ONLY
int upper (int c){
	if(c>='a'&&c<='z'){
		c=c-'a'+'A';
	}
	return c;
}
// apply to a string to converte upper case
void uppercase (char s[]){
	int i;
	for (i=0;s[i]!='\0';i++){
		if(s[i]>='a'&&s[i]<='z'){
		s[i]=s[i]-'a'+'A';
	}
	}
	//printf("%s\n", s);
}
main(){
	char s[]="12345six789";
	char u[]="Runze Dong";
	int number;
	printf("%d\n",strtoint(s));
	uppercase(u);
	printf("%s\n",u);
}
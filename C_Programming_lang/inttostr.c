//convert int n to character in s
#include <stdio.h>
#include <string.h>
void inttostring(int n, char s[]);
void reversestring(char s[]);

int main(){
	int n=32767;
	char s[10]={0};
	inttostring(n,s);
//	reversestring(s);
//	printf("%s\n",s);
	return 0;
}

void inttostring(int n, char s[]){
	// process sign of n
	int i=0;
	int sign;
	if(n<0){
		sign=-1;
		n=-n; // make n positive
	}
	do{
		s[i++]=n%10+'0'; // extract last digit of n to char s[]

	}
	while(n/=10>0);
	if(sign==-1)
		s[i++]='-';
	s[i]='\0';
}
void reversestring(char s[]){ // reverse string s
	int i,j;
	int temp;
	for (i=0,j=strlen(s)-1;i<j;i++,j++){
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
// this is a program to reverse the string
// reverse a string. 1> find the length of the string 2> switch the value. first to last...etc.
//3> the termination condition is i and j. j>j. stop automaticall
#include <stdio.h>
#define max 20
void reverse(char s[]){
	int i,j,len,temp;
	for (len=0;s[len]!='\0';len++)
		;
	printf("%d\n",len );
	for (j=0,i=(len-1);j<i;j++,i--){
		temp=s[j];
		s[j]=s[i];
		s[i]=temp;
	}
}

main(){
	char s[max]={0};
	int c,i;
	for (i=0;(c=getchar())!='.';i++)
		s[i]=c;
	printf("%s\n",s);
	reverse(s);
	printf("%s\n",s);
	
}
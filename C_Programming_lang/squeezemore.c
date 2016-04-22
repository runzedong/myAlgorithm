// this code delete any character in string s1 which belong to string s2.
#include <stdio.h>
void deletechar(char s[], char t[]){
	int i,j;
	int flag=1;
	int k=0;
	for (i=0;s[i]!='\0';i++){
		for (j=0;t[j]!='\0';j++){
			if(s[i]==t[j]){
				flag=0;
				break;
			}
		}
		if(flag==1){
			s[k++]=s[i];
		}
		flag=1;
	}
	s[k]='\0';
}
main(){
	char s[]="hello the world";
	char t[]="abcdefghijklmnopqrst";
	deletechar(s,t);
	printf("%s\n",s);
}
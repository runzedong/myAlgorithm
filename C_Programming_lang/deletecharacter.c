// this program delete a specific character from a string
#include <stdio.h>
void squeeze(int c, char s[]){
	int i,j;
	for (i=0,j=0;s[i]!='\0';i++){
		if(s[i]!=c)
			s[j++]=s[i];
	}
	s[j]='\0';
	printf("%s\n",s);
}

void main(){
	char s[]="hello";
	int c='l';
	squeeze(c,s);
	//printf("%s\n", s);
}

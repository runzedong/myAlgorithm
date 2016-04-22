//this code concatenate two string
//#include <stdio.h>
/*main(){
	char s[]="hello ";
	char c[]="the world ";
	strcat(s,c);
	printf("%s\n", s);
	printf("%s\n", c);
	printf("%s\n", s);
}*/

/*void strcat(char s[], char c[]){
	int i,j;
	for (i=0;s[i]!='\0';i++)
		;
	for (j=0;c[j]!='\0';j++)
		s[i+j]=c[j];
}*/
void strcat(char s[], char c[]){
	int i,j;
	while (s[i]!='\0')
		i++;
	while((s[i++]=c[j++])!='\0')
		;
}
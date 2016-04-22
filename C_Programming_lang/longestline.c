#include <stdio.h>
#define maxline 100
int getline(char s[], int line);
void copy(char origin[], char copy[]);
main(){
	int length;
	int max;
	max=0;
	char line[maxline];
	char longest[maxline];
	while((length=getline(line, maxline))>0)
		if(length>max){
			max=length;
			copy(line,longest);
		}
	if(max>0)
		printf("%s\n", longest);
	return 0;
}
//get a line in s, and return its length
int getline(char s[], int line){
	int c, i;
	for (i=0;i<line-1&&(c=getchar())!=EOF&&c!='\n';i++)
		s[i]=c;
	if (c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	printf("%d\n",i);
	return i;
}
// copy the origin char array
void copy(char origin[], char copy[]){
	int i;
	for (i=0;origin[i]!='\0';i++)
		copy[i]=origin[i];
}
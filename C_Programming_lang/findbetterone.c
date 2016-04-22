//it is a better one to find the string location
#include <stdio.h>
int findlocation(char s[], char c[]){
	int location=-1;
	int i,j;
	for (i=0;s[i]!='\0'&&location==-1;i++){
		for (j=0;c[j]!='\0'&&location==-1;j++){
			if (s[i]==c[j])
				location=i;
		}
	}
	return location;
}
void main(){
	char s[]="hello the world";
	char c[]="w";
	printf("the location is %d\n",findlocation(s,c));
}
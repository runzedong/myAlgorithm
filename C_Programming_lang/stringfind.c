//find the first location in string s where any character from the string c occurs
#include <stdio.h>
int strfind(char s[],char c[]){
	int i,j;
	int flag=0;
	for(i=0;s[i]!='\0';i++){
		for(j=0;c[j]!='\0';j++){
			if(s[i]==c[j]){
				//printf("%s\n",s[i]);
				flag=1;
				break;
			}
		}
		if(flag==1){
			return i;
			break;
		}
	}
	if(flag==0){
		return -1;
	}
}
void main(){
	char s[]="hello the world";
	char c[]="abc";
	printf("the location is %d\n",strfind(s,c));
}
//this is a program to print each word one line from a input
#include <stdio.h>
main(){
	int c, space;
	space=0;
	while((c=getchar())!='.'){
		if (c==' '||c=='\t'||c=='\n'){
			if (space==1){
				space=0;
				putchar('\n');
			}
		}
		else{
			space=1;
			putchar(c);

		}
	}
}
//replace multiple space to one space
#include <stdio.h>
main(){
	int c,space;
	space=0;
	while ((c=getchar())!=EOF){
		if (c==' '){
			if(space==0){
			putchar(c);
			space=1;
				}
			}
		else {
			space=0;
			putchar(c);
		}
	}
}
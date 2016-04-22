#include <stdio.h>
main(){
	printf("the expression getchar()!=EOF is %d\n",EOF);
	int c;
	while((c=getchar())!=EOF){
	putchar(c);
	}
	return 0;
}

//EOF is a signal to indicate the stream is end especially used in file input. in CMD, use crtl+Z 
//to terminate it.
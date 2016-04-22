#include <stdio.h>
//echo command-line arguments. 
int main(int argc, char *argv[]){
	int i;
	for(i=1;i<argc;i++)
		printf("%s%s\n", argv[i],(i<argc-1)?" ":"");
	printf("\n");
	return 0;
}
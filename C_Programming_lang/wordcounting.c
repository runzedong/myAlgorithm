// word counting Unix program
#include <stdio.h>
#define OUT 0
#define IN 1
main(){
puts ("Enter text. Include a dot ('.') in a sentence to exit:");
int c,nl,nw,nc,state;
state=OUT;
nl=nw=nc=0;
while ((c=getchar())!='.'){
	++nc;
	if (c=='\n')
		++nl;
	if (c==' '||c=='\n'||c=='\t')
		state=OUT;
	else if(state==OUT){
		state=IN;
		++nw;
	}
	
 }
printf("the line wrod counting is %3d %d %d\n",nl,nw,nc);

}
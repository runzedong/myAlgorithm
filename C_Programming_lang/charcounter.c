#include <stdio.h>
#define OUT 0
#define IN 1
main(){
	int c,ncount,nword,nline,ntab,nwhite;
	ncount=nword=nline=ntab=nwhite=0;
	int state=OUT;
	while((c=getchar())!='.'){
		ncount++;
		if (c=='\n')
			nline++;
		if (c=='\t')
			ntab++;
		if (c==' ')
			nwhite++;
		if (c=='\n'||c=='\t'||c==' ')
			state=OUT;
		else if(state==OUT){
			state=IN;
			nword++;
		}
	}
	printf("the length of the stream %d word:%d line:%d tab:%d white:%d\n", ncount,nword,nline,ntab,nwhite);
	
}
// we use STATE SIGNAL To Indicate if THE WORD is detected.








// 类似回车也算一个char
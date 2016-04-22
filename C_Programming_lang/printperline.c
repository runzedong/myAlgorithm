//a function to print a word perline
//使用flag 在word 中就一直putchar 一旦flag发生变化，输出一个\n以后就在此状态里什么都不做。
#include <stdio.h>
#define OUT 0
#define IN 1
main(){
	puts ("Enter text. Include a dot ('.') in a sentence to exit:");
	int c,state;
	state=OUT;
	while((c=getchar())!='.'){
		if (c==' '||c=='\n'||c=='\t'){
			if (state==IN){
			state=OUT;
			putchar('\n');
			}
		}
		else {
			state=IN;
			putchar(c);
		}
	}
}
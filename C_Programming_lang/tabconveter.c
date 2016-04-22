// this is a program for replacing tab \t white space \b blackslash \\
#include <stdio.h>
int main(){
	int c;
	int flag;
	while ((c=getchar())!='.'){
		flag =0;
		if (c=='\t'){
			flag=1;
			putchar('\\');
			putchar('t');
		}
		if (c==' '){
			flag=1;
			putchar('\\');
			putchar('b');
		}
		if (c=='\\'){
			flag=1;
			putchar('\\');
			putchar('\\');
		}
		if(flag==0){
		putchar(c);
		}
	}
	return 0;
}
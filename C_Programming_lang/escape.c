#include <stdio.h>
void escape(int c){
	while((c=getchar())!=EOF){
		switch(c){
			case '\n':
				putchar('\\');
				putchar('n');
				break;
			case ' ':
				putchar('\\');
				putchar('b');
				break;
			case '\t':
				putchar('\\');
				putchar('t');
				break;
			default:
				putchar(c);
				break;
		}
	}
}
void main(){
	int c;
	escape(c);
}
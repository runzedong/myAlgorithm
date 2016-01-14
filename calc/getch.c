#include <stdio.h>
#define BUFSIZE 100 // buffer for i/o.
int getch(void);
void ungetch(int c);

static char buf[BUFSIZE];
static int bufp=0;// next free position in buf
//get a (possible pushed back) character
int getch(void){
	return (bufp>0)?buf[--bufp]:getchar();
}
//push back on input
void ungetch(int c){
	if(bufp>=BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++]=c;
}
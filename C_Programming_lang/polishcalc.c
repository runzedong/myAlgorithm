//this is a polish calculator 
#include <stdio.h>
#include <stdlib.h> //fo atof()
#include <ctype.h>
#define MAXOP 100 // max size of operand or operator
#define NUMBER '0'// signal taht a number was found
#define MAXVAL 100 // max depth of val stack
#define BUFSIZE 100 // buffer for i/o.

int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);

int sp=0;
double val[100];
char buf[BUFSIZE];
int bufp=0;// next free position in buf

//push f onto value stack;
void push(double f){
	if(sp<MAXVAL)
		val[sp++]=f;
	else
		printf("stack full, can't push %g\n",f);
}

//pop f from stack
double pop(){
	if(sp>0)
		return val[--sp];
	else{
		printf("stack empty\n");
		return 0.0;
	}
}

//getop: get next operator or numeric operand
int getop(char s[]){
	int i,c;
	while((s[0]=c=getch())==' '||c=='\t')
		;
	s[1]='\0';
	if(!isdigit(c)&&c!='.')
		return c; //not a number
	i=0;
	if(isdigit(c)) //collect integer part
		while(isdigit(s[++i]=c=getch()))
			;
	if(c=='.') // collect fraction part
		while(isdigit(s[++i]=c=getch()))
			;
	s[i]='\0';
	if(c!=EOF)
		ungetch(c);
	return NUMBER;
}

int getch(void){
	return (bufp>0)?buf[--bufp]:getchar();
}//get a (possible pushed back) character

void ungetch(int c){
	if(bufp>=BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++]=c;
}//push back on input


//reverse polish calc;
int main(){
	int type;
	double op2;
	char s[MAXOP];
	while((type=getop(s))!=EOF){
		switch (type){
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '*':
				push(pop()*pop());
				break;
			case '-':
				op2=pop();
				push(pop()-op2);
				break;
			case '/':
				op2=pop();
				if(op2 != 0.0)
					push(pop()/op2);
				else
					printf("error found: zero divisor\n");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n",s);
				break;
		}
	}
	return 0;
}





#include <stdio.h>
#include "calc.h"
#define MAXVAL 100 // max depth of val stack
double pop();
void push(double f);

static int sp=0;
static double val[MAXVAL];

//pop f from stack
double pop(){
	if(sp>0)
		return val[--sp];
	else{
		printf("stack empty\n");
		return 0.0;
	}
}

//push f onto value stack;
void push(double f){
	if(sp<MAXVAL)
		val[sp++]=f;
	else
		printf("stack full, can't push %g\n",f);
}

void touch(){
	if(sp>0)
		printf("%g\n",val[sp-1]);
		
	else
		printf("stack empty\n");
}

void duplicat(){
	double temp=pop();
	push(temp);
	push(temp);
}

void swap(){
	double temp1=pop();
	double temp2=pop();
	push(temp1);
	push(temp2);
}
void clear(){
	sp=0;
}
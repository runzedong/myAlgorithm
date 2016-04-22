#include <stdio.h>
void swapcopy(int x, int y);
void swapointer(int *x, int *y);
void main(){
	int a=6;
	int b=11;
	printf("before swap %d %d\n", a,b);
	swapcopy(a,b);
	printf("after swapcopy %d %d\n", a,b);
	swapointer(&a,&b);
	printf("after swapointer %d %d\n",a,b);
}
void swapcopy(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void swapointer(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

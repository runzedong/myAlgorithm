#include <stdio.h>
int factor(int n){
	if (n==0)
		return 1;
	else
		return n*factor(n-1);
}
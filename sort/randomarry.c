#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	int a[27];
	int n;
	srand(time(NULL));
	for (n=0;n<27;n++){
		a[n]=(rand()%100);
		printf("%d ",a[n]);
	}
	return 0;
}

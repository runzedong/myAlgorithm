#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[27];
	int n,i,j,key;
	srand(time(NULL));
	for (n=0;n<27;n++){
		a[n]=(rand()%100);
		printf("%d ",a[n]);	
	}
	printf("\n");
	for (j=1;j<27;j++){
		key=a[j];
		for(i=j-1;i>=0&&a[i]>key;i--)
			a[i+1]=a[i];
		a[i+1]=key;
	}
	for (n=0;n<27;n++){
		printf("%d ",a[n]);;
	}
	return 0;
}


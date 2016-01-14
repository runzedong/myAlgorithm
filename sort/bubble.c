#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[27];
	int n,i,j,temp;
	srand(time(NULL));
	for (n=0;n<27;n++){
		a[n]=(rand()%100);
		printf("%d ",a[n]);	
	}
	printf("\n");
	for(i=0;i<26;i++){
		for(j=0;j<26-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (n=0;n<27;n++){
		printf("%d ",a[n]);;
	}
	return 0;
}
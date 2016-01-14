#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[27];
	int n,i,j,temp,index;
	srand(time(NULL));
	for (n=0;n<27;n++){
		a[n]=(rand()%100);
		printf("%d ",a[n]);	
	}
	printf("\n");
	for (i=0;i<26;i++){
		index=i;
		for(j=1+i;j<27;j++){
			if(a[index]>a[j])
				index=j;
		}
	if(index!=i){
		printf("%d\n",a[index]);
		temp=a[i];
		a[i]=a[index];
		a[index]=temp;
		}
	}
	for (n=0;n<27;n++){
		printf("%d ",a[n]);;
	}
	return 0;
}
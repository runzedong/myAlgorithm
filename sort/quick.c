#include <stdio.h>

int partition (int a[],int p,int r){
	int i,j,temp,x;
	x=a[r];
	i=p-1;
	for(j=p;j<r;j++){
		if(a[j]<x){
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}

	}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	//printf("%d\n",(i+1)) ;
	return i+1;

}

void quicksort(int a[], int p, int r){
	int q;
	if (p<r){
		q=partition(a,p,r);
		//printf("%d\n",q);
		//printf("%d\n",r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	/*int a[27];
	
	srand(time(NULL));
	for (n=0;n<27;n++){
		a[n]=(rand()%100);
		printf("%d ",a[n]);	
	}*/
	int a[]={7,5,6,8};
	printf("\n");
	quicksort(a,0,3);
	for (n=0;n<4;n++){
		printf("%d ",a[n]);;
	}
	return 0;
}
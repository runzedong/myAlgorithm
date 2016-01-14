#include <stdio.h>

void mergesort(int A[], int p, int r);
void merge(int A[], int p, int q, int r);
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
	mergesort(a,0,26);
	for (n=0;n<27;n++){
		printf("%d ",a[n]);;
	}
	return 0;
}
void mergesort(int A[], int p, int r){
	int q;
	if (p<r){
		q=(p+r)/2;
		mergesort(A,p,q);
		mergesort(A,q+1,r);
		merge(A,p,q,r);

	}
}

void merge(int A[], int p, int q, int r){
	int i; 
	int j;
	int k;
	int len1=q-p+1;
	int len2=r-q;
	int n1[len1];
	int n2[len2];
	for (i=0;i<len1;i++){
		n1[i]=A[p+i];
	}
	for (j=0;j<len2;j++){
		n2[j]=A[q+j+1];
	}
	i=0;
	j=0;
	for (k=p;i<len1&&j<len2;k++){
		if(n1[i]<n2[j]){
			A[k]=n1[i];
			i++;
		}
		else{
			A[k]=n2[j];
			j++;
		}
	}
	while(i<len1){
		A[k]=n1[i];
		i++;
		k++;
	}
	while(j<len2){
		A[k]=n2[j];
		j++;
		k++;
	}
}
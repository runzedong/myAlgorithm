#include <stdio.h>
#include <string.h>
void qsort(char *v[], int left, int right);
//void swap(char *v[], int i, int j);
main(){
	int i;
	char *lineptr[]={"hello the world","hello the","hello"};
	for (i=0;i<3;i++)
		printf("%s\n",lineptr[i]);
	qsort(lineptr,0,2);
	for (i=0;i<3;i++)
		printf("%s\n",lineptr[i]);
}
void qsort(char *v[], int left, int right){
	int i, last;
	void swap(char *v[], int i, int j);
	
	if(left>=right)
		return;
	swap(v, left, (left+right)/2);
	last=left;
	for(i=left+1;i<=right;i++)
		if(strcmp(v[i],v[left])<0)
			swap(v, ++last, i);
	swap(v,left,last);
	qsort(v,left,last-1);
	qsort(v,last+1,right);
}
void swap(char *v[], int i, int j){
	char *temp;
	temp=v[i];
	v[i]=v[j];
	v[j]=temp;
}
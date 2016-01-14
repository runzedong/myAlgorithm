#include <stdio.h>
#include <string.h>
#define MAXLINES 5000 //maximum line to be sorted

char *lineptr[MAXLINES];// pointers to text lines

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);

main(){
	int nlines; // number of input lines read
	 if((nlines=readlines(lineptr, MAXLINES))>=0){
	 	//qsort(lineptr,0,nlines-1);
	 	writelines(lineptr,nlines);
	 	return 0;
	 }
	 else{
	 	printf("error: input too big to sort\n");
	 	return 1;
	 }
}

#define MAXLEN 100 // max length of any input line
int getline(char *, int);
char *alloc(int);
//read input lines
int readlines(char *lineptr[], int maxlines){
	int len, nlines;
	//char *p,line[MAXLEN];
	char line[MAXLEN];

	nlines=0;
	while((len=getline(line, MAXLEN))>0)
		if(nlines>=maxlines)//||(p=alloc(len))==NULL)
			return -1;
		else{
			line[len-1]='\0'; //delete newline
			//strcpy(p,line);
			lineptr[nlines++]=line;
		}
	return nlines;
}

int getline(char s[], int lim){
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

//write output lines
void writelines(char *lineptr[],int nlines){
	int i;
	for (i=0;i<nlines;i++)
		printf("%s\n",lineptr[i]);
}

//qsort sort v[left]....v[right] into increasing order
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
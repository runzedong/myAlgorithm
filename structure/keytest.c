#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>

#define NKEYS (sizeof keytab/ sizeof (Key))
//int binsearch(char *word, struct key tab[], int n);
struct key
{	char *word;
	int count;	
};
typedef struct key Key;
Key keytab[]={//define the key words set. and it is ordered as a dictionary oreder for binary search
	"auto",0,
	"break",0,
	"case",0,
	"char",0,
	"const",0,
	"continue",0,
	"default",0,
	"void",0,
	"while",0,
};
void traversal(Key tab[], int n);

int main()
{
	//printf("%d\n", NKEYS);
	//printf("%s\n", keytab[3].word);
	traversal(keytab,NKEYS);
//	char *s="const";
//	int n;
//	n=binsearch(s,keytab,NKEYS);
//	printf("%d\n",n);
	return 0;
}

void traversal(Key tab[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("%s\n",tab[i].word);
	}
} 

/*int binsearch(char *word, struct key tab[], int n){
	int cond;
	int low, high, mid;
	low=0;
	high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if((cond=strcmp(word, tab[mid].word))<0)
			high=mid-1;
		else if(cond>0)
			low=mid+1;
		else 
			return mid;
	}
	return -1;
}*/

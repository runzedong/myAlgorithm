// implemention a memory allocate and free demo
#define Allocatesize 1000
static char allocbuf[Allocatesize];
static char *allocp=allocbuf;

char *alloc(int n){
	if(allocbuf+Allocatesize-allocp>=n){
		//fit the space limitation
		allocp+=n;
		return allocp-n; //old pointer
	}
	else
		return 0;
}

void afree(char *p){//free storage pointed to by p
	if (p>=allocbuf&&p<=allocbuf+Allocatesize)
		allocp=p;
}


#include <stdio.h>
char* StrStr(char *str, char *target){
	if(!*target) return str;
	char *p1=str;
	while(*p1){
		char *p1begin=p1;
		char *p2=target;
		while(*p1==*p2&&*p1&&*p2){
			p1++;
			p2++;
		}
		if(!*p2)
			return p1begin;
		p1=p1begin+1;
	}
	return NULL;
}

int main(int argc, char const *argv[])
{
	/* code */
	char *str="hello the world";
	char *target="the";
	printf("%d\n",StrStr(str,target)-str);
	return 0;
}

//there is another version to reduce outer loop ot len(str)-len(target)+1.
//cause after n-m+1 times loop, the string has less than m characters to be  matched
//we use p1adv to advance it m-1times ahead of the string pointer. 
//therefore, when p1adv points to \0. it's done.
char *StrStrAdv(char *str, char *target){
	if(!*target) return str;
	char *p1=str;
	char *p2=target;
	char *p1adv=str;// necessary condition
	while (*++p2)
		p1adv++;
	while(*p1adv){
		char *p1begin=p1;
		while(*p1==*p2&&*p1&&*p2){
			p1++;
			p2++;
		}
		if(!*p2)
			return p1begin;
		p1=p1begin+1;
		p1adv++;
	}
	return NULL;
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define Maxword 100
#define BUFSIZE 100

int getword(char *, int);
int getch(void);
void ungetch(int);

char buf[BUFSIZE];
int bufp=0;
struct tnode
{	char *word;// points to the text
	int count;// number of occurrence
	struct tnode *left;// left child
	struct tnode *right;// right child
};

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
struct tnode *talloc(void);
char *strdup(char *);

//word frequency count
int main(int argc, char const *argv[])
{
	struct tnode *root;
	char word[Maxword];
	root=NULL;
	while(getword(word,Maxword)!=EOF){
		if(isalpha(word[0]))
			root=addtree(root, word);
	}
	treeprint(root);
	return 0;
}

//addtree: add a node with w, at or below. p
struct tnode *addtree(struct tnode *p, char *w){
	int cond;
	if(p==NULL){// a new word arrive
		p=talloc();// make a new node
		p->word=strdup(w);//
		p->count=1;
		p->left=p->right=NULL;
	}else if ((cond=strcmp(w,p->word))==0)
		p->count++;// repeated word
	else if(cond<0)
		p->left=addtree(p->left, w);
	else
		p->right=addtree(p->right,w);
	return p;
}

//in order to print the tree
void treeprint(struct tnode *p){
	if(p!=NULL){
		treeprint(p->left);
		printf("%4d %s\n",p->count, p->word);
		treeprint(p->right);
	}
}

//talloc: make a new tnode
struct tnode *talloc(void){
	return (struct tnode *)malloc (sizeof(struct tnode));
}

//make a duplicate of s
char *strdup(char *s){
	char *p;
	p=(char *)malloc(strlen(s)+1);// puls 1 for "\0"
	if(p!=NULL)
		strcpy(p,s);
	return p;
}


int getword(char *word, int lim){	
	int c;
	char *w=word;

	while(isspace(c=getch()))
		;
	if(c!=EOF)
		*w++=c;
	if(!isalpha(c)){
		*w='\0';
		return c;
	}
	for(;--lim>0;w++){
		if(!isalnum(*w=getch())){
			ungetch(*w);
			break;
		}
	*w='\0';
	return word[0];
	}
}

int getch(void){
	return (bufp>0)?buf[--bufp]:getchar();
}
void ungetch(int c){
	if (bufp>=BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++]=c;
}

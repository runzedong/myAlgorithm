struct nlist{
	struct nlist *next;// next entry in the chain
	char *name;// definded name
	char *defn;// replacement text
};

#define hashsize 101
static struct nlist *hashtab[hashsize];
// hash function
unsigned hash (char *s){
	unsigned hashval;
	for(hashval=0;*s!='\0';s++)
		hashval=*s+31*hashval;
	return hashval%hashsize;
}

//look up the name if in the hash table before.
struct nlist *lookup(char *s){
	sturct nlist *np;
	for (np=hashtab[hash(s)];np!=NULL;np=np->next)
		if(strcmp(s,np->name)==0)
			return np;//find the name
	return NULL;//not found
}

struct nlist *install(char *name, char *defn){
	struct nlist *np;
	unsigned hashval;

	if((np=lookup(name))==NULL){
		np=(struct nlist *)malloc (sizeof(*np));
		if (np==NULL||(np->name=strdup(name))==NULL)
			return NULL;
		hashval=hash(name);
		np->next=hashtab[hashval];
		hashtab[hashval]=np;
	}
	else//already there
		free((void*)np->defn); //free previous define
	if((np->defn=strdup(defn))==NULL)
		return NULL;
	return np;
}



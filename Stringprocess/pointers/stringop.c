//strcmp
int strcmp(char *s, char *t){
	for (;*s==*t;s++,t++){
		if(*s=='\0')
			return 0; // two string same
		return *s-*t;
	}
}

void strcat(char *s, char *t){
	while (*s!='\0')
		s++;             // find the destination of the string
	while(*s++==*t++)  //while((*s=*t)!='\0')
		;             //      s++;
	                  //      t++;
}


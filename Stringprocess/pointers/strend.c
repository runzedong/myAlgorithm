#include <stdio.h>
int strlen(char *s);
int strend(char *s, char *n);

int main(){
  char *s1 = "some really long string.";
  char *s2 = "ng.";
  char *s3 = "jg";
  /*if(strend(s1, s2))
  {
    printf("The string (%s) has (%s) at the end.\n", s1, s2);
  }
  else
  {
    printf("The string (%s) doesn't have (%s) at the end.\n", s1, s2);
  }*/
  if(strend(s1, s3))
  {
    printf("The string (%s) has (%s) at the end.\n", s1, s3);
  }
  else
  {
    printf("The string (%s) doesn't have (%s) at the end.\n", s1, s3);
  }
  return 0;
}

int strlen(char *s){
	int len;
	for (len=0;*s!='\0';len++,s++)
		;
	return len;
}
int strend(char *s, char *n){// compare if string n occurs at the end of string s.
	int result;
	int s_len=0;
	int n_len=0;
	s_len=strlen(s);
	n_len=strlen(n);
	//printf("%d\n",s_len);
	//printf("%d\n",n_len);
	//s=s+s_len-n_len;
	//printf("%s\n",s);
	if(s_len<n_len)
		result=0;
	else{
		s=s+s_len-n_len;
		while(*s==*n){
			if (*s=='\0'){
				return 1;
			}
			//printf("%s\n",s);
			s++;
			n++;
		}
		
	}
	return result;
}
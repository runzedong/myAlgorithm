#include <stdio.h>
int hexalpha(int c){
	char hexalpha[]="aAbBcCdDeEfF";
	int i,number;
	for (i=0;c!=hexalpha[i];i++)
		;
		number=10+i/2;
	return number;
}

int converthex(char s[]){
	int i=0;
	int result=0;
	if (s[i]=='0')
		i++;
	if (s[i]=='x'||s[i]=='X')
		i++;
	while(s[i]!='\0'){
		//printf("%d\n",result);
		result=result*16;
		//printf("%d\n",s[i]);
		if (s[i]>='0'&&s[i]<='9'){
			result=result+(s[i]-'0');
		}
		if (s[i]>='A'&&s[i]<='F'||s[i]>='a'&&s[i]<='f')
		{
			//printf("%d\n",hexalpha(s[i]));
			result=result+hexalpha(s[i]);
		}
		else{
			printf("this is not a hex char\n");// a exception process
			goto exception;// goto statement
		}
		i++;
	}
	return result;
	exception: return 0; // for goto exception, jump here.
}
/*void main(){      when fix the pointer array, lets go back here!!!!!!!!!!!!!!!!!!!!!!!!!
	char *test[] =
  {
  	"0"
    "F00",
    "bar",
    "0100",
    "0x1",
    "0XA",
    "0X0C0BE",
    "abcdef",
    "123456",
    "0x123456",
    "deadbeef",
    "zog_c"
  };
 	size_t numtests = sizeof test / sizeof test[0];

  	size_t thistest;

  for(thistest = 0; thistest < numtests; thistest++)
  {
    printf("the decimal is %d"converthex(test[thistest]));
}*/
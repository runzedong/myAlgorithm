#include <stdio.h>
int myAtoi (char* str){
	int i=0;
	int number=0;
	int sign=1;
	while(str[i]==' '){
		i++;
	}
	if(str[i]=='-'){
		sign=-1;
		i++;
	}
	if(str[i]=='+'){
		sign=1;
		i++;
	}
	while(str[i]-'0'>=0&&str[i]-'0'<=9&&str[i]!='\0'){
		//if(number> 2147483648) {
           //  break;
         //}
		number=number*10+(str[i]-'0');
		printf("%d\n",number);
		i++;
	}
	number*=sign;
	return number;
	/*if(number > 2147483647) {
        return 2147483647;
    }
    if(number < -2147483648) {
        return -2147483648;
    }*/
}
int main(int argc, char const *argv[])
{
	char *str="123";
	myAtoi(str);
	return 0;
}
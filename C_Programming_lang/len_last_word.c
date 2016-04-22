#include <string.h>
#include <stdio.h>
int lengthOfLastWord(char* s) {
    printf("the function is start***********\n");
    int len=strlen(s);
    printf("the string length is %d\n",len);
    if (len==0){
        return 0;
    }
    while(s[len-1]==' '){
        len--;
    }
    printf("the start point is %d\n",len);
    int j;
    for(j=0;s[len-1]!=' '&&(len-1>=0);j++){
        len--;
        printf("%d\n",j);
        ;
    }
    return j;
}
int main(int argc, char const *argv[])
{
    char s[]="hello the world";
    int result=lengthOfLastWord(s);
    printf("%d\n",result);
    return 0;
}
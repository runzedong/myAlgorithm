#include <stdio.h>
#include <string.h>
int max(int a, int b){
	return (a>b)?a:b;
}

int LCSubStr(char *x, char *y, int m, int n){
	int LCSub[m+1][n+1];
	int result=0;
	int i;
	int j;
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			if(i==0||j==0){
				LCSub[i][j]=0;
			}
			else{
				if(x[i-1]==y[j-1]){
					LCSub[i][j]=LCSub[i-1][j-1]+1;
					result=max(result, LCSub[i][j]);
				}
				else{
					LCSub[i][j]=0;
				}
			}
		}
	}
	return result;
}

int main(int argc, char const *argv[])
{
	char X[] = "OldSite:GeeksforGeeks.org";
    char Y[] = "NewSite:GeeksQuiz.com";
 
    int m = strlen(X);
    int n = strlen(Y);
    printf("%d\n",LCSubStr(X,Y,m,n));
	return 0;
}
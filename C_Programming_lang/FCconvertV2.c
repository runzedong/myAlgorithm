//this a for-statement version for temperature conversion
#include <stdio.h>
main(){
	int fra;
	for(fra=300;fra>=0;fra-=20){
			printf("%3d\t%6.2f\n",fra,(5.0/9.0)*(fra-32));
	}
} 

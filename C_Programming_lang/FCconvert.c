#include <stdio.h>
/* to print out the fahrenheit-celsius table */
main()
{
float fahr,cels;
int low,high,step;
low=0;
step=20;
high=300;
fahr=low;
printf("fahr\tcels\n");
while(fahr<=high){
	cels=5.00*(fahr-32.00)/9.00;
	printf("%3.0f\t%6.2f\n",fahr,cels);
	fahr+=step;
	}
}
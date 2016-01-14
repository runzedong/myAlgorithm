#include <stdio.h>
int day_of_year(int year, int month, int day);
void month_day(int year,int yearday,int *pmonth,int *pday);
static char daytab[2][13]={
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,28,31,30,31,30,31,31,30,31,30,31}
	};
int day_of_year(int year,int month,int day){
		int i,leap;
		leap=year%4==0&&year%100!=0||year%400==0;
		for(i=1;i<month;i++)
			day+=daytab[leap][i];
		return day;
	}
	void month_day(int year,int yearday,int *pmonth,int *pday){
		int i, leap;
		leap=year%4==0&&year%100!=0||year%400==0;
		for(i=1;yearday>daytab[leap][i];i++)
			yearday-=daytab[leap][i];
		*pmonth=i;
		*pday=yearday;
	}
main(){
	int yy;
	int mm;
	int dd;
	int day;
	int pmonth;
	int pday;
	yy=1992;
	mm=3;
	dd=10;
	printf("%d\n",day_of_year(yy,mm,dd));
	day=68;
	month_day(yy,day,&pmonth,&pday);
	printf("%d\t%d\n",pmonth,pday);
}

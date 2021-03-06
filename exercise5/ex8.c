#include<stdio.h>

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day)
{
	int i, leap;
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	if(month < 1 || month > 12)
		return -1;
	if(day < 1 || day > daytab[leap][month])
		return -1;
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}
/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;
	int t[] = {365,366};
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	*pmonth = -1;
	*pday = -1;
	//printf("THUMBS UP0\n");
	if( yearday < 1 || yearday > t[leap] || year < 1)
		return;

	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*pmonth = i;
	//printf("THUMBS UP\n");
	*pday = yearday;
}

main(){
	int month, day;
	month_day(2015, 1110, &month, &day);
	printf("%d,%d\n", month, day);
}

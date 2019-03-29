#include <stdio.h>

main()
{
	int year;
	int month;
	int days;
	int weekday;

	getYearMonth(&year, &month);
	days = getMonthDays(year, month);
	weekday = getWeekday(year, month, 1);
	printCalendar(year, month, days, weekday);

}
#include <stdio.h>

/**
 * isLeapYear - checks if the given year is a leap year
 * @year: the year
 * Return: 1 if the year is a leap year, 0 otherwise
 */
int isLeapYear(int year)
{
	 if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
                return (1);     //leap year
        }
        else
        {
                return (0);     //not a leap year
        }
}

/**
 * computeFirstDays - computes the first days of each month
 */
void computeFirstDays(int startDay, int firstDays[], int year) {
	int month;

    // Set the first day of January
    firstDays[1] = startDay;

    // Compute the first day for each subsequent month
    for (month = 2; month <= 12; month++) {
        // Add the appropriate number of days to the previous month's first day
        if (month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11) {
            firstDays[month] = (firstDays[month - 1] + 31) % 7;
        } else if (month == 3) {
            firstDays[month] = (firstDays[month - 1] + 28) % 7;
        } else {
            firstDays[month] = (firstDays[month - 1] + 30) % 7;
        }
    }
}

/**
 * printMonthCalender - pprint the calendar for a given month
 * @startDay: The weekday for the first day of the month
 * @month: The month
 * @year: the year
 */
void printMonthCalendar(int startDay, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *monthNames[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};
    int numDays = daysInMonth[month - 1];
    
    printf("\n%s %17d", monthNames[month - 1], year);
    printf("\n");
    printf(" SUN MON TUE WED THU FRI SAT\n");

    // Print leading spaces for the first day
    int day;
    for (day = 0; day < startDay; day++) {
        printf("    ");
    }

    // Print the days of the month
    for (day = 1; day <= numDays; day++) {
        printf("%4d", day);

        // Move to the next line if it's the end of the week
        if ((day + startDay) % 7 == 0 || day == numDays) {
            printf("\n");
        }
    }
}

/**
 * calculateFirstDay - computes the first day of the year
 * @year: the year to get first day
 */
int calculateFirstDay(int year)
{
	return ((((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400) + 1) % 7);
}

/**
 * printYearCalender - prints the calender for a given year
 * @year: The year for which the calender is to be generated
 */
void printYearCalender(int year)
{
	int i, firstDay;
	int firstDays[12];

	firstDay = calculateFirstDay(year); //first day of the week
	
	computeFirstDays(firstDay, firstDays, year);

	/* print calenders for each month */
	for (i = 1; i <= 12; i++)
	{
		printMonthCalendar(firstDays[i], i, year);
	}

	printf("\n");
}

/**
 * main - The program's entry point
 * Return: 0 always (Success)
 */
int main()
{
	char userResponse;
	int year;

	do
	{
		/* Get the year from the user */
		printf("Enter the year for your calender: ");
		scanf("%d", &year);
		
		/* print the year calender */
		printYearCalender(year);
		
		/* print the calender for the year */

		/* Ask the user whether to continue */
		printf("Do you want to continue generating the calenders? ");
		printf("Yes (Y/y): ");
		scanf(" %c", &userResponse);
	} while (userResponse  == 'Y' || userResponse == 'y');

	return (0);
}

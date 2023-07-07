#include <stdio.h>

/**
 * main - entry point of the program
 * @year: the calender year
 * 
 * Description: Prints the calender for the month of January
 * for any input year. 
 * The input year is NOT a leap year
 */
int main ()
{
	int year;
	int first_date;

	printf("Enter the year for your calender: ");
	scanf("%d", &year);

	first_date = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400) + 1) % 7;
	printf("\n");
	
	/*print the Month and year*/
	printf("JANUARY");
	printf("%20d", year);
	printf("\n");

	/*print the Week days*/
	printf("SUN MON TUE WED THU FRI SAT\n");

	/*print the Month-day*/
	if (first_date == 1)
	{
		printf("%7d", 1);
		printf("%4d", 2);
		printf("%4d", 3);
		printf("%4d", 4);
		printf("%4d", 5);
		printf("%4d", 6);
		printf("\n");

		/*print second row*/
                printf("%3d", 7);
                printf("%4d", 8);
                printf("%4d", 9);
                printf("%4d", 10);
                printf("%4d", 11);
                printf("%4d", 12);
                printf("%4d", 13);
                printf("\n");

                /*print third row*/
                printf("%3d", 14);
                printf("%4d", 15);
                printf("%4d", 16);
                printf("%4d", 17);
                printf("%4d", 18);
                printf("%4d", 19);
                printf("%4d", 20);
                printf("\n");

                /*print fourth row*/
                printf("%3d", 21);
                printf("%4d", 22);
                printf("%4d", 23);
                printf("%4d", 24);
                printf("%4d", 25);
                printf("%4d", 26);
                printf("%4d", 27);
                printf("\n");

                /*print fifth row*/
                printf("%3d", 28);
                printf("%4d", 29);
                printf("%4d", 30);
                printf("%4d", 31);
                printf("\n");

	}
	else if (first_date == 2)
	{
		printf("%11d", 1);
                printf("%4d", 2);
                printf("%4d", 3);
                printf("%4d", 4);
		printf("%4d", 5);
                printf("\n");

		/*print second row*/
                printf("%3d", 6);
                printf("%4d", 7);
                printf("%4d", 8);
                printf("%4d", 9);
                printf("%4d", 10);
                printf("%4d", 11);
                printf("%4d", 12);
                printf("\n");

                /*print third row*/
                printf("%3d", 13);
                printf("%4d", 14);
                printf("%4d", 15);
                printf("%4d", 16);
                printf("%4d", 17);
                printf("%4d", 18);
                printf("%4d", 19);
                printf("\n");

                /*print fourth row*/
                printf("%3d", 20);
                printf("%4d", 21);
                printf("%4d", 22);
                printf("%4d", 23);
                printf("%4d", 24);
                printf("%4d", 25);
                printf("%4d", 26);
                printf("\n");

                /*print fifth row*/
                printf("%3d", 27);
                printf("%4d", 28);
                printf("%4d", 29);
                printf("%4d", 30);
                printf("%4d", 31);
                printf("\n");

	}
	else if (first_date == 3)
	{
		printf("%15d", 1);
                printf("%4d", 2);
                printf("%4d", 3);
		printf("%4d", 4);
		printf("\n");

		/*print second row*/
                printf("%3d", 5);
                printf("%4d", 6);
                printf("%4d", 7);
                printf("%4d", 8);
                printf("%4d", 9);
                printf("%4d", 10);
                printf("%4d", 11);
                printf("\n");

                /*print third row*/
                printf("%3d", 12);
                printf("%4d", 13);
                printf("%4d", 14);
                printf("%4d", 15);
                printf("%4d", 16);
                printf("%4d", 17);
                printf("%4d", 18);
                printf("\n");

                /*print fourth row*/
                printf("%3d", 19);
                printf("%4d", 20);
                printf("%4d", 21);
                printf("%4d", 22);
                printf("%4d", 23);
                printf("%4d", 24);
                printf("%4d", 25);
                printf("\n");

                /*print fifth row*/
                printf("%3d", 26);
                printf("%4d", 27);
                printf("%4d", 28);
                printf("%4d", 29);
                printf("%4d", 30);
                printf("%4d", 31);
                printf("\n");


	}
	else if (first_date == 4)
	{
		printf("%19d", 1);
                printf("%4d", 2);
                printf("%4d", 3);
		printf("\n");

		/*print second row*/
                printf("%3d", 4);
                printf("%4d", 5);
                printf("%4d", 6);
                printf("%4d", 7);
                printf("%4d", 8);
                printf("%4d", 9);
                printf("%4d", 10);
                printf("\n");

                /*print third row*/
                printf("%3d", 11);
                printf("%4d", 12);
                printf("%4d", 13);
                printf("%4d", 14);
                printf("%4d", 15);
                printf("%4d", 16);
                printf("%4d", 17);
                printf("\n");

                /*print fourth row*/
                printf("%3d", 18);
                printf("%4d", 19);
                printf("%4d", 20);
                printf("%4d", 21);
                printf("%4d", 22);
                printf("%4d", 23);
                printf("%4d", 24);
                printf("\n");

                /*print fifth row*/
                printf("%3d", 25);
                printf("%4d", 26);
                printf("%4d", 27);
                printf("%4d", 28);
                printf("%4d", 29);
                printf("%4d", 30);
                printf("%4d", 31);
                printf("\n");
	}
	else if (first_date == 5)
	{
		printf("%23d", 1);
		printf("%4d", 2);
		printf("\n");

		/*print second row*/
                printf("%3d", 3);
                printf("%4d", 4);
                printf("%4d", 5);
                printf("%4d", 6);
                printf("%4d", 7);
                printf("%4d", 8);
                printf("%4d", 9);
                printf("\n");

                /*print third row*/
                printf("%3d", 10);
                printf("%4d", 11);
                printf("%4d", 12);
                printf("%4d", 13);
                printf("%4d", 14);
                printf("%4d", 15);
                printf("%4d", 16);
                printf("\n");

                /*print fourth row*/
                printf("%3d", 17);
                printf("%4d", 18);
                printf("%4d", 19);
                printf("%4d", 20);
                printf("%4d", 21);
                printf("%4d", 22);
                printf("%4d", 23);
                printf("\n");

		/*print fifth row*/
                printf("%3d", 24);
                printf("%4d", 25);
                printf("%4d", 26);
                printf("%4d", 27);
		printf("%4d", 28);
		printf("%4d", 29);
		printf("%4d", 30);
		printf("\n");

		/*sixth row*/
		printf("%3d", 31);
		printf("\n");

	}
	else if(first_date == 6)
	{
		printf("%27d", 1);
		printf("\n");

		/*print second row*/
                printf("%3d", 2);
                printf("%4d", 3);
                printf("%4d", 4);
                printf("%4d", 5);
                printf("%4d", 6);
                printf("%4d", 7);
		printf("%4d", 8);
		printf("\n");
		
		/*print third row*/
		printf("%3d", 9);
                printf("%4d", 10);
                printf("%4d", 11);
                printf("%4d", 12);
                printf("%4d", 13);
                printf("%4d", 14);
                printf("%4d", 15);
		printf("\n");

		/*print fourth row*/
                printf("%3d", 16);
                printf("%4d", 17);
                printf("%4d", 18);
                printf("%4d", 19);
                printf("%4d", 20);
                printf("%4d", 21);
                printf("%4d", 22);
		printf("\n");

		/*print fifth row*/
	        printf("%3d", 23);
	        printf("%4d", 24);
                printf("%4d", 25);
                printf("%4d", 26);
                printf("%4d", 27);
                printf("%4d", 28);
                printf("%4d", 29);
		printf("\n");

		/*print 6th row*/
                printf("%3d", 30);
                printf("%4d", 31);
		printf("\n");
	}
	else
	{
		printf("%3d", 1);
                printf("%4d", 2);
                printf("%4d", 3);
                printf("%4d", 4);
                printf("%4d", 5);
		printf("%4d", 6);
		printf("%4d", 7);
		printf("\n");

		/*print second row*/
                printf("%3d", 8);
                printf("%4d", 9);
                printf("%4d", 10);
                printf("%4d", 11);
                printf("%4d", 12);
                printf("%4d", 13);
                printf("%4d", 14);
                printf("\n");

                /*print third row*/
                printf("%3d", 15);
                printf("%4d", 16);
                printf("%4d", 17);
                printf("%4d", 18);
                printf("%4d", 19);
                printf("%4d", 20);
                printf("%4d", 21);
                printf("\n");

                /*print fourth row*/
                printf("%3d", 22);
                printf("%4d", 23);
                printf("%4d", 24);
                printf("%4d", 25);
                printf("%4d", 26);
                printf("%4d", 27);
                printf("%4d", 28);
                printf("\n");

                /*print fifth row*/
                printf("%3d", 29);
                printf("%4d", 30);
                printf("%4d", 31);
                printf("\n");
	}
}


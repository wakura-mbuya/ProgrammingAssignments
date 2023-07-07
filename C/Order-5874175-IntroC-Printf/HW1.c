#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Description: this is a C console program to print
 * a monthly calender (April 2023)
 * Return: 0 (Success)
 */
int main ()
{
  /*Month and Year */
  printf ("April");
  printf ("%46d", 2023);
  printf ("\n");

  /*Days of the week headings */
  printf ("SUN\tMON\tTUE\tWED\tTHUR\tFRI\tSAT\n");

  /*First row */
  printf ("%51d", 1);
  printf ("\n");

  /*Second row */
  printf ("%3d", 2);
  printf ("\t");
  printf ("%3d", 3);
  printf ("\t");
  printf ("%3d", 4);
  printf ("\t");
  printf ("%3d", 5);
  printf ("\t");
  printf ("%3d", 6);
  printf ("\t");
  printf ("%3d", 7);
  printf ("\t");
  printf ("%3d", 8);
  printf ("\n");

  /*Third row */
  printf ("%3d", 9);
  printf ("\t");
  printf ("%3d", 10);
  printf ("\t");
  printf ("%3d", 11);
  printf ("\t");
  printf ("%3d", 12);
  printf ("\t");
  printf ("%3d", 13);
  printf ("\t");
  printf ("%3d", 14);
  printf ("\t");
  printf ("%3d", 15);
  printf ("\n");

  /*Fourth row */
  printf ("%3d", 16);
  printf ("\t");
  printf ("%3d", 17);
  printf ("\t");
  printf ("%3d", 18);
  printf ("\t");
  printf ("%3d", 19);
  printf ("\t");
  printf ("%3d", 20);
  printf ("\t");
  printf ("%3d", 21);
  printf ("\t");
  printf ("%3d", 22);
  printf ("\n");

  /*Fifth row */
  printf ("%3d", 23);
  printf ("\t");
  printf ("%3d", 24);
  printf ("\t");
  printf ("%3d", 25);
  printf ("\t");
  printf ("%3d", 26);
  printf ("\t");
  printf ("%3d", 27);
  printf ("\t");
  printf ("%3d", 28);
  printf ("\t");
  printf ("%3d", 29);
  printf ("\n");

  /*Sixth row */
  printf ("%3d", 30);
  printf ("\n");

  return (0);
}


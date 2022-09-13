Task 9.txt

Who has access

A

System properties

Type

Text

Size

388 bytes

Storage used

388 bytes

Location

Variables if else while

Owner

Antony Bahati

Modified

Sep 10, 2022 by Antony Bahati

Opened

5:17 AM by me

Created

Sep 10, 2022

No description

Viewers can download

#include <stdio.h>

/**
 *
 *  * main - printing numbers from 0-9 with commas and space between them
 *
 *   * Description: using the main function
 *
 *    * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 *
 *     * Return: 0
 *
 *      */

int main(void)

{

		int c;



			for (c = 48; c <= 57; c++)

					{

								putchar(c);

										if (c != 57)

													{

																	putchar(',');

																				putchar(' ');

																						}

											}

				putchar('\n');

					return (0);

}

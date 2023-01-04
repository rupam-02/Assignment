/*
Write a program to generate a random one-time password of eight characters long. The password
should contain at least one small letter, one capital letter, one symbol, and one digit.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pass(char a[])
{
// Seed the random number generator with the current time
srand(time(0));

// Choose a random small letter for the first character
a[0] = 'a' + rand() % 26;

// Choose a random capital letter for the second character
a[1] = 'A' + rand() % 26;

// Choose a random symbol for the third character
a[2] = '!' + rand() % 15;

// Choose a random digit for the fourth character
a[3] = '0' + rand() % 10;

// Fill the remaining characters with random letters, digits, and symbols
for (int i = 4; i < 8; i++) {
    a[i] = '!' + rand() % 36;
}

// Terminate the a string with a null character
a[8] = '\0';

// Print the generated password
printf("Random password: %s\n", a);

}

void main()
{
    char password[9];
    pass(password);
}
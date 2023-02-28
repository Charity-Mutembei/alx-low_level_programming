#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6
/**
 *  * main - check the code for passwords.
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		 password[i] = rand() % 26 + 'a';
	}
	 password[PASSWORD_LENGTH] = '\0';
	 printf("%s\n", password);
	  return (0);
}

#include <stdio.h>
#include <string.h>

/**
 * main - excuted program
 * Return: Description of the returned value
 */
int main(void)
{
char *wrtStr = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(wrtStr, sizeof(char), strlen(wrtStr), stdout);
return (1);
}

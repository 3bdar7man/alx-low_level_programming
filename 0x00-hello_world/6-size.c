#include <stdio.h>

/*
*main func*/int main(void)
{
/*stderr fprintf func*/
#warning
fprintf(stderr, "##warning");
int chS = sizeof(char);
int intS = sizeof(int);
int loIntS = sizeof(long);
int loloIntS = sizeof(long long);
int floS = sizeof(float);

/*printf char func*/
printf("Size of a char: %d byte(s)\n", intS);
/*printf int func*/
printf("Size of an int: %d byte(s)\n", intS);
/*printf long func*/
printf("Size of a long int: %d byte(s)\n", loIntS);
/*printf long long func*/
printf("Size of a long long int: %d byte(s)\n", loloIntS);
/*printf float func*/
printf("Size of a float: %d byte(s)\n", floS);

return (0);
}

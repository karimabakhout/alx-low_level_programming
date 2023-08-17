#include "2-largest_number.c"

int main(void)
{
int a, b, c, largest;

a = 10;
b = -5;
c = 20;

largest = largest_number(a, b, c);

printf("The largest number is %d\n", largest);

return (0);
}

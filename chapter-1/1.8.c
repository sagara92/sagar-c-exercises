#include <stdio.h>
main()
{
    int i;
    for(i=0; i<=10; i++)
        printf("%d\t %d \t %d\n", i, power(3,i), power(-2,i));
    return 0;

}

int power(int base, int n)
{
    int p;
    for (p=1; n>0; --n)
    p=p*base;
    return p;
}

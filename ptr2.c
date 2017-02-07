#include <stdio.h>
int main()
{
    int i = 200, *p, *q, *r;
    p = &i;  q = p;
    *q = *q + 1;
    r = q;
    //*r = *r +1;
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    return 0;
}

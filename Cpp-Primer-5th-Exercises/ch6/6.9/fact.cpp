#include"fact.h"
int fact(int a)
{
    int x=a;
    while(--a)
        x*=a;
    return x;
}
#include <stdio.h>

#include "tool.h"

int main(void)
{
    int a = 12;
    int b = 30;

    printf("%d + %d = %d\n", a, b, add(a, b));
    return 0;
}

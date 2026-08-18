#include <stdio.h>

#include "tool.h"

int main(void)
{
    int a_1 = 12;
    int b_1 = 30;

    printf("%d + %d = %d\n", a_1, b_1, add(a_1, b_1));
    return 0;
}

#include <stdio.h>

#include "tool.h"

int main(void)
{
    int left = 12;
    int right = 30;

    printf("%d + %d = %d\n", left, right, add(left, right));
    return 0;
}

#include <stdio.h>
#include <assert.h>

int main()
{
    const int max_precision = 100000;
    int b = 7414;
    int max = b * max_precision;

    assert(b > 0);

    while (b <= max && b >= 0)
    {
        putchar('0' + (b / max_precision) % 10);
        b *= 10;
    }

    putchar('\n');
}

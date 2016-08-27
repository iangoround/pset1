#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: ");
    int m = GetInt();
    printf("bottles: %i\n", m * (192/16)  );
}
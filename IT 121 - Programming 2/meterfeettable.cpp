#include <stdio.h>

int main()
{
    int meters;
    float feet;

    printf("Feet		Meters\n\n");
    for (meters = 0; meters < 30; )
    {
		meters=meters+3;
        feet = meters/3.28;
        printf("%d		%.2f\n", meters, feet);
    }
    return 0;
}
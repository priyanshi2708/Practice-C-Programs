#include <stdio.h>
#include <math.h>

int main()
{
    int H, L;

    scanf("%d %d", &H, &L);

    // Calculate the depth of the lake
    double depth = (L * L - H * H) / (2.0 * H);

    // Print the depth with the required precision
    printf("%.15lf\n", depth);

    return 0;
}





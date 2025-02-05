#include <stdio.h>

int main()
{
    int n;

    // Input the number of forces
    printf("Enter the number of forces: ");
    scanf("%d", &n);

    int xSum = 0, ySum = 0, zSum = 0;

    // Input the components of each force and calculate the sums
    printf("Enter the components of each force (x y z):\n");
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        xSum += x;
        ySum += y;
        zSum += z;
    }

    // Check if the body is in equilibrium
    if (xSum == 0 && ySum == 0 && zSum == 0)
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}


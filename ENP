#include <stdio.h>

int main()
{
    int media, rate, nodes, fault, noise, term;
    float length;

    printf("1.Single Wire  2.Twisted Pair  3.Twisted+Screen\n");
    printf("Select medium: ");
    scanf("%d", &media);

    printf("Enter bit rate, bus length, nodes: ");
    scanf("%d %f %d", &rate, &length, &nodes);

    printf("Fault (0=None, 1=Open, 2=Short): ");
    scanf("%d", &fault);

    printf("Noise level (0-100): ");
    scanf("%d", &noise);

    printf("Termination (0=Absent, 1=Present): ");
    scanf("%d", &term);

    printf("\nSelected Medium: ");
    if (media == 1)
        printf("Single Wire\nWires: 1\nNoise Rejection: LOW\nRadiation: HIGH\n");
    else if (media == 2)
        printf("Differential Twisted Pair\nWires: 2\nNoise Rejection: HIGH\nRadiation: LOW\n");
    else if (media == 3)
        printf("Twisted Pair with Screen\nWires: 3\nNoise Rejection: VERY HIGH\nRadiation: VERY LOW\n");
    else {
        printf("Invalid medium!\n");
        return 0;
    }

    printf("Fault Effect: ");
    if (fault == 0)
        printf("No Fault\n");
    else if (fault == 1)
        printf("Open Circuit\n");
    else
        printf("Short Circuit\n");

    if (fault == 0 && nodes > 0 && nodes <= 32 &&
        rate > 0 && length > 0 &&
        noise >= 0 && noise <= 100 &&
        (media == 1 || term == 1))
        printf("Bus Status: SUITABLE\n");
    else
        printf("Bus Status: NOT SUITABLE\n");

    return 0;
}

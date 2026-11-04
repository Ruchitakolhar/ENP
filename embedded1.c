#include <stdio.h>

#define RECESSIVE_THRESHOLD 0.5
#define DOMINANT_THRESHOLD 0.9

#define CAN_H_RECESSIVE 2.5
#define CAN_L_RECESSIVE 2.5

#define CAN_H_DOMINANT 3.5
#define CAN_L_DOMINANT 1.5

int main()
{
    float CAN_H, CAN_L, Vdiff;
    int bit_rate;

    printf("Enter CAN_H voltage: ");
    scanf("%f", &CAN_H);

    printf("Enter CAN_L voltage: ");
    scanf("%f", &CAN_L);

    printf("Enter Bus bit rate: ");
    scanf("%d", &bit_rate);

    Vdiff = CAN_H - CAN_L;

    printf("\nCAN_H = %.2f V", CAN_H);
    printf("\nCAN_L = %.2f V", CAN_L);
    printf("\nVdiff = %.2f V", Vdiff);

    if (Vdiff < RECESSIVE_THRESHOLD)
    {
        printf("\n\nCAN BUS STATE : RECESSIVE");
    }
    else if (Vdiff > DOMINANT_THRESHOLD)
    {
        printf("\n\nCAN BUS STATE : DOMINANT");
    }
    else
    {
        printf("\n\nCAN BUS STATE : INVALID / NOISE REGION");
    }

    return 0;
}

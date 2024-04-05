#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

/*
 * Calculates the volume of a frustum of a cone.
 * Parameters:
 *   R (float): Radius of the larger base of the frustum.
 *   r (float): Radius of the smaller base of the frustum.
 *   h (float): Height of the frustum.
 * Returns:
 *   float: Volume of the frustum.
 */
float frustum_volume(float R, float r, float h) {
    float volume = (1.0 / 3.0) * PI * h * (R * R + r * r + R * r);
    return volume;
}

int main() {
    float R, r, h;

    /*Prompt user for input*/
    printf("Enter the radius of the larger base (R): ");
    scanf("%f", &R);
    printf("Enter the radius of the smaller base (r): ");
    scanf("%f", &r);
    printf("Enter the height of the frustum (h): ");
    scanf("%f", &h);

    /*Calculate volume of the frustum*/
    float volume = frustum_volume(R, r, h);

    /* Print the volume of the frustum*/
    printf("Volume of the frustum: %.2f\n", volume);

    return 0;
}

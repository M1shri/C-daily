#include <stdio.h>

int main() {
    float km, meters, feet, inches, cm;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    meters = km * 1000;
    cm = km * 100000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    printf("Meters: %.2f\nCentimeters: %.2f\nFeet: %.2f\nInches: %.2f\n", meters, cm, feet, inches);
    return 0;
}

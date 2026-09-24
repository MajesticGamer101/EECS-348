#include <stdio.h>

char unit;
char new_unit;
double temp;
double results;
double celsius;

int main(){
// Prompt user for input
printf("Enter the temperature value: ");
// Makes sure input is valid 
while (scanf("%lf", &temp) != 1) {
    printf("Invalid input\n");
    while (getchar() != '\n');   // discard the bad input
    printf("Enter the temperature value: ");
}

printf("Enter the original scale (C, F, or K):");
// Makes sure input is valid 
while (scanf(" %c", &unit) != 1) {
    printf("Invalid input\n");
    while (getchar() != '\n');   // discard the bad input
    printf("Enter the original scale (C, F, or K):");
}

printf("Enter the scale to convert to (C, F, or K):");
// Makes sure input is valid 
while (scanf(" %c", &new_unit) != 1) {
    printf("Invalid input\n");
    while (getchar() != '\n');   // discard the bad input
    printf("Enter the scale to convert to (C, F, or K):");
}
//Logic for conversion

// From Celsius
if ((unit == 'C' || unit == 'c') && (new_unit == 'C' || new_unit == 'c')){
    results = temp;
}
if ((unit == 'C' || unit == 'c') && (new_unit == 'F' || new_unit == 'f')){
    results = temp * 9.0 / 5.0 + 32;
}
if ((unit == 'C' || unit == 'c') && (new_unit == 'K' || new_unit == 'k')){
    results = temp + 273.15;
}

// From Fahrenheit
if ((unit == 'F' || unit == 'f') && (new_unit == 'C' || new_unit == 'c')){
    results = (temp - 32) * 5.0 / 9.0;
}
if ((unit == 'F' || unit == 'f') && (new_unit == 'F' || new_unit == 'f')){
    results = temp;
}
if ((unit == 'F' || unit == 'f') && (new_unit == 'K' || new_unit == 'k')){
    results = (temp - 32) * 5.0 / 9.0 + 273.15;
}

// From Kelvin
if ((unit == 'K' || unit == 'k') && (new_unit == 'C' || new_unit == 'c')){
    results = temp - 273.15;
}
if ((unit == 'K' || unit == 'k') && (new_unit == 'F' || new_unit == 'f')){
    results = (temp - 273.15) * 9.0 / 5.0 + 32;
}
if ((unit == 'K' || unit == 'k') && (new_unit == 'K' || new_unit == 'k')){
    results = temp;
}

printf("Converted temperature: %.2f %c\n", results, new_unit);

//Logic for category

// Convert temp to celsius
if (unit == 'C' || unit == 'c'){
    celsius = temp;
}
if (unit == 'F' || unit == 'f'){
    celsius = (temp - 32) * 5.0 / 9.0;
}
if (unit == 'K' || unit == 'k'){
    celsius = temp - 273.15;
}
// Ranges

if (celsius < 0){
    printf("Temperature category: Freezing\n");
    printf("Weather advisory: Stay indoors and bundle up!\n");
}
if (celsius >= 0 && celsius < 10){
    printf("Temperature category: Cold\n");
    printf("Weather advisory: Wear a jacket.\n");
}
if (celsius >= 10 && celsius < 25){
    printf("Temperature category: Comfortable\n");
    printf("Weather advisory: Enjoy the nice weather!\n");
}
if (celsius >= 25 && celsius < 35){
    printf("Temperature category: Hot\n");
    printf("Weather advisory: Drink lots of water!\n");
}
if (celsius >= 35){
    printf("Temperature category: Extreme Heat\n");
    printf("Weather advisory: Stay indoors and avoid the sun.\n");
}

    return 0;

}




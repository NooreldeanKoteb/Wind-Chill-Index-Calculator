#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int temp = 0;
double mph = 0;
double twc = 0;
char temperature [100];
char mil_per_hr [100];

int main(void) {
    printf("Enter Temperature: ");
	fgets(temperature,100,stdin);
	sscanf(temperature, "%d", &temp);
	if(temp <=50){
		printf("Enter Wind Speed: ");
		fgets(mil_per_hr,100,stdin);
		sscanf(mil_per_hr, "%lf", &mph);

		twc = ((35.74) + (0.6215*temp) - (35.75*pow((mph),0.16)) + (0.4275*temp*(pow(mph,0.16))));

		printf("Temperature: %d degrees Fahrenheit\n", temp);
		printf("Wind Speed: %.1lf mph\n", mph);
		printf("Wind Chill Index: %.1lf degrees Fahrenheit\n", twc);
	}
	if (temp>50){
    	printf("Error: Invalid Temperature Entered!");
	}
}
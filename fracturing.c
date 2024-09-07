// Assignment.1-fracture
// Author: Brandon Nieves
// UCF ID: 5482386
// Date: 9/7/24
// Class: COP 3223, Professor Parra
// Purpose: To learn how to fracture and split up code where it does not reside under the main function


#include <stdio.h>
#include <math.h>
//include the library for the scan and print functions and the math library for calculations

#define PI 3.14159
//define pi

int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();
// declaring functions 

double askForUserInput() 
{
    double value;
    scanf("%lf", &value);
    return value;
}
//defines user input and uses scanf to get input off of questions we will ask the user later in our code for our other functions,
//which is easier than having a scanf and printf loop for the rest of our functions (try not to repeat yourself)
double calculateDistance() 
{
    double x1, y1, x2, y2;

    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();
    // Get input for the points
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    // Print the points entered

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2f\n", distance);
    // Calculate the distance using the distance formula and print it to the user
    return distance;
}
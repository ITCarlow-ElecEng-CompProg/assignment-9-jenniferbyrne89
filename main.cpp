/** Jennifer Byrne
    08/11/2017
    Lab 9
    Sphere Calculations */

/** Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <math.h>

/** Enables cout, cin and endl */
using namespace std;

/** Declaring sphere function globally */
void sphere(double radius, double *sareaPtr, double *volPtr);

/** Main function */
int main()
{
    /** initialising variables and assigning pointers */
    double radius = 0, sarea, vol;
    double *sareaPtr = &sarea, *volPtr = &vol;

    cout << "Sphere Calculations\n" ;
    /** while loop to ensure a pos value for radius */
    while (radius<=0)
    {
        cout << "\n\nEnter positive value for radius :\t" ;
        cin >> radius;
    }

    /** invoking sphere sub function */
    sphere (radius, sareaPtr, volPtr);

    /** displaying values on console for volume and surface area */
    cout << "\n\nSurface Area :\t" << sarea << "\n\nVolume :\t" << vol << "\n\n";

    /** terminating main function */
    return 0;
}

/** sphere sub function */
void sphere (double radius, double *sareaPtr, double *volPtr)
{
    /** equations to calculate surface area and volume using pointers */
    *sareaPtr = 4 * M_PI * pow(radius, 2);
    *volPtr = 4.0 / 3.0 * M_PI * pow(radius, 3);

    /** not returning a value because the volume and surface area value was assigned to their poiter addresses */
    return;
}

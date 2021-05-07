#include <iostream>
using namespace std;
//function prototypes
void input_seconds(double& seconds);
void calculate_values(double& seconds, double& minutesNum, double& hoursNum, 
double& daysNum);
void display_value(double& seconds, double& minutesNum, double& hoursNum, 
double& daysNum);
//declaring universal constants
const int MINUTE = 60, HOUR = 3600, DAY = 86400;
//main function
int main()
{
    //declaring variables
    double numberOfSeconds, numberOfMinutes, numberOfHours, numberOfDays;
    //explaining program to user
    cout << "This program will calculate how many minutes, hours, ";
    cout << endl << "or days are in a given number of seconds.";
    cout << endl << endl;
    //calling functions
    input_seconds(numberOfSeconds);
    calculate_values(numberOfSeconds, numberOfMinutes, numberOfHours, numberOfDays);
    display_value(numberOfSeconds, numberOfMinutes, numberOfHours, numberOfDays);

    cout << endl << endl;

    return 0;
}
//gathering user input
void input_seconds(double& seconds)
{
    cout << "Please enter a number of seconds. ";
    cin >> seconds;
    cout << endl;
}
//processing input
void calculate_values(double& seconds, double& minutesNum, double& hoursNum, 
double& daysNum)
{
    minutesNum = seconds / MINUTE;
    hoursNum = seconds / HOUR;
    daysNum = seconds / DAY;
}
//displaying values based on the results
void display_value(double& seconds, double& minutesNum, double& hoursNum, 
double& daysNum)
{
    if (seconds < MINUTE)
    {
        cout << "There are " << minutesNum << " minutes in " << seconds;
        cout << " seconds.";
    }
    else if (seconds >= MINUTE && seconds < HOUR)
    {
        cout << "There are " << minutesNum << " minutes in " << seconds;
        cout << " seconds.";
    }
    else if (seconds >= HOUR && seconds < DAY)
    {
        cout << "There are " << hoursNum << " hours in " << seconds << " seconds.";
    }
    else if (seconds >= DAY)
    {
        cout << "There are " << daysNum << " days in " << seconds << " seconds.";
    }
}
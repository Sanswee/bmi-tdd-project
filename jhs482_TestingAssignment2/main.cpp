#include <iostream>
#include "bmi.cpp"
using namespace std;

int main(){
    double weight;
    int feet, inches;

    while (true) {
        cout << "Enter weight in pounds (or -1 to exit): ";
        cin >> weight;
        if (weight == -1) {
            break;
        }
        cout << "Enter height in feet: ";
        cin >> feet;
        cout << "Enter height in inches: ";
        cin >> inches;

        double bmi = calculateBMI(weight, feet, inches);
        string category = getBMICategory(bmi);

        cout << "Your BMI is: " << bmi << endl;
        cout << "You are classified as: " << category << endl;
    }

    return 0;
}
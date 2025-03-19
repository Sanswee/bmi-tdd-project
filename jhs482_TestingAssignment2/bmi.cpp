#include <string>
#include <cmath>

double calculateBMI(double weight, int feet, int inches){
    weight = weight * 0.45;
    inches = inches + (feet * 12);
    double height = inches * 0.025;
    double bmi = (weight / (height * height));
    double roundedbmi = std::round(bmi * 10) / 10.0; // Round to 1 decimal place
    return roundedbmi;
}

std::string getBMICategory(double bmi){
    if (bmi < 18.5){
        return "Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9){
        return "Normal weight";
    } else if (bmi >= 25 && bmi <= 29.9){
        return "Overweight";
    } else {
        return "Obese";
    }
}

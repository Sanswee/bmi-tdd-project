#include <iostream>
#include "bmi.cpp"
#include <cassert>
using namespace std;



// Test cases for calculateBMI function
void test_calculateBMI() {

    assert(calculateBMI(100, 5, 6) == 16.5);
    assert(calculateBMI(140, 5, 6) == 23.1);
    assert(calculateBMI(160, 5, 10) == 23.5);
    assert(calculateBMI(180, 5, 5) == 30.7);
    assert(calculateBMI(200, 6, 0) == 27.8);
    assert(calculateBMI(125, 5, 2) == 23.4);
    assert(calculateBMI(95, 5, 0) == 19.0);
    assert(calculateBMI(300, 6, 5) == 36.4);
    assert(calculateBMI(110, 5, 7) == 17.6);
    assert(calculateBMI(155, 5, 9) == 23.4);

}

// Test cases for getBMICategory function
void test_getBMICategory() {
    // 1) Boundary at 18.5 
    assert(getBMICategory(18.4) == "Underweight");
    assert(getBMICategory(18.5) == "Normal weight");
    assert(getBMICategory(18.6) == "Normal weight");

    // 2) Boundary at 24.9
    assert(getBMICategory(24.8) == "Normal weight");
    assert(getBMICategory(24.9) == "Normal weight");
    assert(getBMICategory(25.0) == "Overweight");

    // 3) Boundary at 29.9
    assert(getBMICategory(29.8) == "Overweight");
    assert(getBMICategory(29.9) == "Overweight");
    assert(getBMICategory(30.0) == "Obese");



  
}

int main() {
    test_calculateBMI();
    test_getBMICategory();
    cout << "All tests passed!" << endl;
    return 0;
}
#include <iostream>

using namespace std;

int findGCD(int number1, int number2);
int findLCM(int number1, int number2);

main()
 {
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    int result1 = findGCD(number1, number2);
    int result2 = findLCM(number1, number2);
    cout << "GCD: " << result1 << endl;
    cout << "LCM: " << result2 ;
}

int findGCD(int number1, int number2)   
{
    while (number1 != number2)
    {
    if (number1 > number2)
        number1=number1-number2; 
    else 
        number2=number2-number1;
    }
    return number1;
}
int findLCM(int number1, int number2)  
{
    int gcd = findGCD(number1, number2); 
    int lcm=(number1 * number2) / gcd;      
    return lcm; 
}

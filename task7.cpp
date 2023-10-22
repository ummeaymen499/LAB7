#include <iostream>
#include <iomanip> 
using namespace std;
main()
{
    int inputCount;
    cout << "Enter numbers count: ";
    cin >> inputCount;
    int i = inputCount;
    float per1 = 0, per2 = 0, per3 = 0, per4 = 0, per5 = 0;
    int number;
    while(inputCount>0)
    {
        cout << "Enter a number: ";
        cin >> number;
        if (number <= 199) 
            per1 += 1;
        else if (number < 200 || number < 400)
            per2 += 1;
        else if (number < 400 || number < 600)
            per3 += 1;
        else if (number < 600 || number < 800)
            per4 += 1;
        else if (number >= 800)  
            per5 += 1;    
        inputCount -= 1;        
    }
    
    cout << fixed << setprecision(2) << (per1 / i) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (per2 / i) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (per3 / i) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (per4 / i) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (per5 / i) * 100 << "%" ;
}



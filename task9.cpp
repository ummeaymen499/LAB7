#include <iostream>
using namespace std;
int calculatePrice(int money, int year);
main()
{
    int money, year;
    cout<<"Enter Money: ";
    cin>>money;
    cout<<"Enter Year: ";
    cin>>year;
    int result = calculatePrice(money, year);
    if (result > 0)
        cout<<"Yes! He will live a carefree life and will have " << result <<" dollars left.";
    else
    {
        result=result*(-1);
        cout<<"He will need "<<result<<" dollars to survive."; 
    }
}

int calculatePrice(int money, int year)
{
    int dollarEven=12000;
    int total=0;
    int age=18;

    for (int i=1800;i<=year;i++)
    {
        if(i%2==0)
            total+=dollarEven;
        else
            total+=dollarEven+50*age;    
        age++;
    }
    int cash_remaining = money - total; 
    return cash_remaining;
}
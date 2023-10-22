#include <iostream>
using namespace std;
int calculateMoney(int age, int price, int prices);
main()
{
    int age;
    cout<<"Enter Lilly's age: ";
    cin>>age;

    int washprice;
    cout<<"Enter the price of the washing machine: ";
    cin>>washprice;
    
    int price;
    cout<<"Enter the unit price of each toy: ";
    cin>>price;
    
    int amount = calculateMoney(age, washprice, price);
    if (washprice <= amount)
        cout<<"Yes!\n"<<(amount - washprice);
    if (washprice > amount)
        cout<<"No!\n"<<(washprice-amount);
}

int calculateMoney(int age, int price, int prices)
{
    int even=age/2;
    int odd=age-even;
    int current=10;
    int sum=0;

    odd=odd*prices;

    for (int i=0;i<even;i++)
    {
        sum=sum+current;
        current=current+10;
    }
    sum=sum+odd-even;
    return sum;
}
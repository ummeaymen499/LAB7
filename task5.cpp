#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result=digitSum(num);
    cout<<"Sum of digits: "<<result;
}
int digitSum(int number)
{   int sum=0;
    while(number>0)
    {
       int currentdigit=number%10;
        sum=sum+currentdigit;
       number=number/10;
        
    }
    return sum;

}
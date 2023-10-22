#include<iostream>
using namespace std;
int frequenyChecker(int number, int digit);
main()
{
  int num,digit;
  cout<<"Enter a number: ";
  cin>>num;
  cout<<"Enter the digit to check: ";
  cin>>digit;
  int result=frequenyChecker(num,digit);
  cout<<"Frequency: "<<result;



}
int frequenyChecker(int number, int digit)
{
   int frequency=0;
   while(number>0)
   {
     int num1=number%10;
     if(num1==digit)
     {frequency++;
      number=number/10;
      }
     else
     {
        number=number/10;
     }

   }
   return frequency;
}
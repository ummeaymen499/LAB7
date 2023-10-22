#include<iostream>
using namespace std;
int totalDigits(int num);
main()
{int num;
cout<<"Enter a number: ";
cin>>num;
int result=totalDigits(num);
cout<<"Total number of digits: "<<result;


}
int totalDigits(int num)
{
   int i=0; 
for(;num!=0;i++)
{num=num/10;

}
return i;

}
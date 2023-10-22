#include<iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
int len;
cout<<"Enter the length of the Fibonacci series: ";
cin>>len;
generateFibonacci(len);
}
void generateFibonacci(int length)
{
   if(length==0)
   {
      cout<<" ";
   }
   if(length==1)
  { cout<<"0";
  }
  if(length==2)
  {
   cout<<"0, 1";}
   if(length>=3)
   {
   int num1=0,num2=1;
   cout<<num1<<", "<<num2<<", ";
   int i=2;
   int ans;
   for(;i<length;i++)
   {
      ans=num1+num2;
      if(length-1==i)
    {cout<<ans<<" ";
    } 
    else{
     cout<<ans<<", ";
     num1=num2;
     num2=ans;}
     
   }
  }
   
   

}

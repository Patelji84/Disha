#include<iostream>
using namespace std;

int main()
{

         int num;
         cout<<"Enter the decimal Nmber ";
         cin>>num;
         int ans = 0, rem , mul =1;

         while(num >0)
         {
                  rem = num % 10;
                  num = num/10;
                  ans = rem*mul+ans;
                  mul = mul *2;
         }

             while(num >0)
           {
          rem = num % 8;
                  num = num/8;
                  ans = rem*mul+ans;
                  mul = mul *10;

        }
}
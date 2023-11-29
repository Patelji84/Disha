#include<iostream>
using namespace std;

int main()
{

         int num;
         cout<<"Enter the decimal Nmber ";
         cin>>num;
         int ans = 0, rem , mul =1;

        for(int i =num ; i>0; i= i/2)
         {
                  rem = num % 2;
                  num = num/2;
                  ans = rem*mul+ans;
                  mul = mul *10;
         }

         cout<<ans<<endl;
}
#include<iostream>
using namespace std;

int main()
{
           int n1,n2,n3;
         cout<<"Enter First number :";
         cin>>n1;

         cout<<"Enter Second number :";
         cin>>n2;

         cout<<"Enter Third Number :";
         cin>>n3;

         int lcm;

         if (n1>n2 && n1>n3)
         {
                  lcm =n1;
         }

         else if (n2> n3 && n3 >n1)
         {
                  lcm = n2;
         }

         else{
                  lcm = n3;
         }

         while (1)
         {
               if (lcm %n1 ==0 && lcm % n2 == 0 && lcm%n3 == 0 )
               {
                        cout<<"The Lcm of "<<n1 <<", "<<n2<<" and "<<n3<<" is "<<lcm;
                        break;
               }
               lcm++;
         }
         
         
         return 0;
}
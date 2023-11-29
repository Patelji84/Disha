#include<iostream>

using namespace std;



int main()
{

         int n1,n2,n3;
         cout<<"Enter First number"<<endl;
         cin>>n1;

         cout<<"Enter Second number"<<endl;
         cin>>n2;

         cout<<"Enter Third Number"<<endl;
         cin>>n3;
         int gcd;

         while (n1 != n2 && n1 != n3)
         {
                 if(n1 > n2 && n1 > n3)
                 {
                          gcd = n1;
                 }

                 if(n2> n3 && n2> n1)
                 {
                          n2 -=n3;
                          n2 -=n1;

                 }

                 else{
                          n3 -=n2;
                          n3-=n1;
                 }
         }

         cout<<"Hcf is :"<<n1;
         


         return 0;

}
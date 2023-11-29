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

         for (int i = 1; i <=n1 && i<=n2 && i<=n3; i++)
         {
                if (n1 %i ==0 && n2 % i==0 && n3%i==0)
                {
                        gcd =i;
                }
                
         }

         cout<<"Greatest Common Division :"<<gcd<<endl;

         return 0;
         

}
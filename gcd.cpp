//Gcd using of three numbers 


#include<iostream>
using namespace std;

int main()
{
         int x,y,z;

         int d,i;

         cout<<"first number : ";
         cin>>x;

         cout<<"second number : ";
         cin>>y;

         cout<<"Third Number : ";
         cin>>z;

         d =1;
         i=1;

         while (i<=x && i<=y && i<=z)
         {
                 if(x%i==0 && y%i== 0 && z%i==0)
                 
                          d=i;
                      i++;
         }

         cout<<"Gcd to - "<<x<<" "<<y<<" "<<z<<" is "<<d<<" ";

         return 0;
         


}
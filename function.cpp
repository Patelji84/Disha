#include <iostream>
using namespace std;

void monthly(int  n1 )
{
    cout<<"the expencess of medicine "<<n1<<endl;
}


void monthly(float n2 )
{
    cout<<"the expencess of food"<<n2<<endl;
}


void monthly(double n3 )
{
    cout<<"the expencess of clothes "<<n3<<endl;
}


void monthly(long long n4)
{
    cout<<"the expencess of rent "<<n4<<endl;
}




int main()

{
   monthly(1000);
   monthly(1230);
   monthly(550.60);
   monthly(1999);
 


   return 0;

}
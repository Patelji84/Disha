
#include<iostream>

using namespace std;

int main()
{
         int n;
         cout<<" Enter a number :";

         cin>>n;
         
         int range;
         cout<<" Enter Range :";
         cin>>range;

         for (int i = 0; i <=range; i++)
         {
                  cout<<n<<" * "<<i<<" = "<<n*i<<endl;
         }

         return 0;
         

}
#include<iostream> 
using namespace std;

int main()
{
         int row,col;

         int n;
         cout<<"Enter the input ->";
         cin>>n;


         for(row =1;  row<=n; row++)
         {
                   
                  for(col =1; col<= n-row; col++)
                  {
                           cout<<"  ";
                  }

                  for(col = 1; col <=row; col++)
                  {
                          char name = 'A' + (col-1);
                           cout<<name<<" ";
                  }
                  for(col =row-1; col >=1; col--)
                  {
                           char name = 'A' + (col-1);
                           cout<<name<<" ";
                  }

                  cout<<endl;
         }
}
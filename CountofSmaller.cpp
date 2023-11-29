#include<iostream>

using namespace std;

int countOfElement(int arr[], int n, int x);

int  main()
{

         int t;
         cin>>t;
         while(t--)
         {
                  int n,x;
                  cin>>n;
                  int arr[n];
                  for(int i=0; i<n; i++)
                  cin>>arr[i];

                  cin>>x;

                  cout<<countOfElement(arr,n,x)<<endl;

         }

         return 0;
         
}

int countOfElements(int arr[], int n, int x) 
{
    return upper_bound(arr,arr+n,x)-arr;
}
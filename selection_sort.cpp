#include <iostream>
using namespace std;

int selection(int *a,int n)
{
   int i,min;
   int j,swap;
   for(i=0;i<n-1;i++)
   {
    min = a[i];
      for(j=i+1;j<n;j++)
      {
        if(min > a[j])
         {
          swap = a[j];
          a[j] = min;
          min = swap;
         }
      }
      a[i] = min;

   }
}

int main()
{
  int n,i;
  cout << "Enter size" << endl;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
   cout<<"the unsorted array is"<<endl;
  for(i=0;i<n;i++)
   cout<<a[i]<<" ";
  selection(a,n);
      cout<<"\nSorted Array is"<<endl;
     for(i=0;i<n;i++)
     {
     cout<<a[i]<<" ";
     }
    
}
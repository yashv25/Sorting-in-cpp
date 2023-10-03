#include <iostream>
using namespace std;

int insertion(int *arr,int n)
{
    int m,j;
    for(int i =1;i<n;i++)
    {
         m = arr[i];
        for(j=i-1;j>=0;j--)
       {
        if(m<arr[j])
        {
            arr[j+1] = arr[j];
        }
        else
          break;
         }
        arr[j+1]=m;
    }
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion(a,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

}
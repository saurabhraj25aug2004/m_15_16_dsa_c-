//Check if the given array is almost sorted. (elements are at-most one position away)
#include<iostream>
using namespace std;
int main()
{
    int a[5] ={1,2,3,4,5};
    int n =5;

    for(int i=0;i<n-1;i++)
    {
        if(a[i] > a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i] > a[i+1])
        {
            cout<<"No";
            break;
        }
    }
    if(i==n-1) cout<<"yes";
    return 0;
}
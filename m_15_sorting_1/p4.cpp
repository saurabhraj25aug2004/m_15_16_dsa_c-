#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[] ={5,-4,0,3,26,1,99,-80};
    int n =8;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    //bubble sort

    for(int i=0;i<n-1;i++)
    {
        //traverse
        bool flag =true;
        for(int j=n-1;j>=1+i;j--)
        {
            if(arr[j]>arr[j-1])
            {
                swap(arr[j],arr[j-1]);
                flag =false;
            }
        }
        if(flag==true) break;
    }
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*
Q)Sort the array in descending order using Bubble Sort.
5 -4 0 3 26 1 99 -80
99 26 5 3 1 0 -4
Press any key to continue . . .

*/
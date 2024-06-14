#include<iostream>
using namespace std;
int main()
{
    int arr[] ={12,1,3,4,7,6,5,8,9,14,1};
    int n =11;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<((n/2) + 1);i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j] ,arr[j+1]);
            }
        }
    }

    for(int i=n/2;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

/*------------------------------OUTPUT------------------------
Given an array of n element ,the task is to find the elements in an array .in case of add element ,we 
need to print element larger than floor(n/2) element where  n is the total number of elements in the array
you can print the answer the answer in any order

12 1 3 4 7 6 5 8 9 14 1
6 7 8 9 12 14

Press any key to continue . . .

*/
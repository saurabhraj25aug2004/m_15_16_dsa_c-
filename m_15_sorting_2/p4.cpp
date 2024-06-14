#include<iostream>
using namespace std;
int main()
{
    int arr[] ={12,14,8,2,4,7,6,5,3,9,1};
    int k =3;
    int n =11;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    //selection sort upto k

    for(int i=0;i<n;i++)
    {
        int min =arr[i];
        int mindx =i;
        for(int j =i;j<n;j++)
        {
            if(min>arr[j])
            {
                min =arr[j];
                mindx =j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    //
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}

/*------------------------OUTPUT--------------------------
Given an integer array and an integer k where k<=size of array, We need to return the kth 
smallest element of the array

ans:
12 14 8 2 4 7 6 5 3 9 1
1 2 3 4 5 6 7 8 9 12 14

Press any key to continue . . .

*/
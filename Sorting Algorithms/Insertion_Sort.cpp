#include<iostream>
using namespace std;

void insertionSort(int arr[])
{
    int index = 0;
    int key ;

    for(int i =1; i<6; i++)
    {
        key = arr[i]; // picking the element
        index = i-1;

        while(index>= 0 && arr[index]>key)
        {
            arr[index+1] = arr[index];
            index = index-1;
        }
        arr[index+1] = key;
    }
}


int main (){
    int  myarr[6];

    cout<<"Enter 6 Numbers to sort : ";
    
    for(int i =0; i<6; i++)
    {
        cin>> myarr[i];
    }

    cout<<"Array Before Sorting : ";
    for(int i =0; i<6; i++)
    {
        cout<<myarr[i]<<" ";
    }

    insertionSort(myarr);

    cout<<"\nArray After Sorting : ";
    for(int i =0; i<6; i++)
    {
        cout<<myarr[i]<<" ";
    }
}
#include<iostream>
using namespace std;

int binary_Search(int arr[],int target,int size){
    //declaring right and left
    int left = 0;
    int right = size - 1;
    //while loop for searching
    while(left<=right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }


    return -1;

}


int main(){
    //varibale declaration
    int myarr[10];
    int size = sizeof(myarr) / sizeof(myarr[0]);
    int target;
    int output;

    //input array values
    cout<<"\n Enter 10 Elements in Array : ";
    for(int i=0; i<10; i++){
        cin>>myarr[i];
    }
    //input the element to search
    cout<<"\n Enter the Element to Search : ";
    cin>>target;

    output = binary_Search(myarr,target,size);

    if(output == -1)
    {
        cout<<"\n *Element Not in Array* \n";
    }
    else
    {
        cout<<"\n Element found at Index : "<<output<<endl;
    }

}
#include<iostream>
using namespace std;
// bool ispresent(int arr[][4],int target,int row,int col)
// {
//    for(int row=0;row<3;row++)
//    {
//     for(int col=0;col<4;col++)
//     {
//         if(arr[row][col]==target){
//             return 1;
//         }
//     }
//    }
//    return 0;
// }

// void printcolsum(int arr[][4],int row,int col){
//     for(int col=0;col<4;col++)
//     {
//         int sum1=0;
//         for(int row=0;row<3;row++)
//         {
//             sum1+=arr[row][col];
//         }cout<<sum1<<" ";}
//         cout<<endl;
    
// }
//row-wise sum
// void printsum(int arr[][4],int row,int col){
//     for(int row=0;row<3;row++)
//     { int sum=0;
//         for(int col=0;col<4;col++)
//         {
//             sum+=arr[row][col];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }
int largestrowsum(int arr[][4],int row,int col)
{
    int maxi= -1;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++)
        {
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=row;

        }
    }
cout<<maxi<<endl;
return rowindex;
}
int main()
{
    int arr[3][4];
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    for(int col=0;col<4;col++)
    {
        for(int row=0;row<3;row++)
        {
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    // cout<<"enter the element to search"<<endl;
    // int target;
    // cin>>target;
    // if(ispresent(arr,target,3,4)){
    //     cout<<"element found"<<endl;
    // }
    // else cout<<"not found";
    // printsum(arr,3,4);
    // printcolsum(arr,3,4);
    cout<<largestrowsum(arr,3,4)<<endl;
    return 0;
}
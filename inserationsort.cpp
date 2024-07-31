#include<iostream>
using namespace std;
int main(){
      int n;
    cout<<"enter the lenght of array : ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"enter the elemet : ";
        cin>>arr[i];
    }
    cout<<"array befor insertion sort: "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    for(int i =1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=current;
    }
     cout<<endl;
    cout<<"array after insertaion sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
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
    cout<<"array befor bubble sort: "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    int count=1;
    while(count<n){
        for(int i=0;i<n-count;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
         count++;
    }
    cout<<endl;
    cout<<"array after bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
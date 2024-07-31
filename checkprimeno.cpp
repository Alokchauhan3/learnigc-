#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int num){
    if(num<=1)return false;
    if(num%2==0)return false;
    if(num == 2)return true;

    for(int i=3;i<=sqrt(num); i+=2){
        if(num % i==0)return false;
    }
    return true;

}
int main(){
    int n;
    cout<<"enter the length of array :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter the elemet of array: ";
        cin>>arr[i];
    }
    cout<<"prime number in the array are : ";
    for(int i=0;i<n;i++){
        if(isprime(arr[i])){
        cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
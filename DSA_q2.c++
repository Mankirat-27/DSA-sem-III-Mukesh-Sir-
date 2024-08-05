#include<iostream>
#include<string>
#include<bitset>
using namespace std;
int main(){
    int arr[10], i;
    string temp[10];
    
    cout<<"Enter 10 consecutive numbers: ";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        bitset<20> binary(arr[i]);
        temp[i] = binary.to_string();
    }
    for(i=0;i<9;i++){
        if(temp[i][19] == temp[i+1][19])
        cout<<"The missing number is "<<i+2;
    }
    return 0;
}
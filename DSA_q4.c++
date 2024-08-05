#include<iostream>
using namespace std;
int main(){
    int num, pow;
    int ans = 1;
    int i;
    
    cout<<"Enter Number and Power: ";
    cin>>num>>pow;
    if(pow%2 == 0){
        for(i=0;i<pow/2;i++){
            ans = ans * num;
        }
        ans = ans * ans;
    }
    if(pow%2 != 0){
        for(i=0;i<(pow-1)/2;i++){
            ans = ans * num;
        }
        ans = ans * ans * num;
    }
    cout<<ans;
    return 0;
}
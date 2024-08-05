#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int i,j;
    float radius_square, base_height, top_height, lower_part, upper_part, volume;
    float stored_volume = 0;
    int stored_num1, stored_num2;
    
    cout<<"Enter 5 numbers: ";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            radius_square = 0.25*(j-i)*(j-i);
            
            if(arr[i]<arr[j]){
            base_height = arr[i];
            top_height = arr[j] - arr[i];
            }
        
            if(arr[i]>arr[j]){
            base_height = arr[j];
            top_height = arr[i] - arr[j];
            }
            
            lower_part = (3.14*radius_square*base_height);
            upper_part = (0.5*3.14*radius_square*top_height);
            
            volume =  lower_part + upper_part;
        
            
            if(volume < stored_volume)
            break;
            
            stored_volume = volume;
            stored_num1 = arr[i];
            stored_num2 = arr[j];
        }
    }
   cout<<stored_num1<<" and "<<stored_num2<<" corresponds to Maximum Volume = "<<stored_volume;
    return 0;
}
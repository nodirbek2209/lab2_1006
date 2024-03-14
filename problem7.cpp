
#include <iostream>
using namespace std;
#include <vector>
int main() {
    int n;
    cin>>n;
    int nums[n];
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        nums[i]=element;
        
    }
    for(int i=0;i<n;i++){
        nums[i]=nums[i]*nums[i];
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if (nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
        
    }
    // Big-O notation for sorting nested loop is used so O(x^2)
        
    
    
    
    
    
    
    
    
    

    return 0;
}
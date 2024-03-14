#include <iostream>
using namespace std;
#include <vector>
int main() {
    int n;
    cin>>n;
    vector <int> N_numbers;
    vector <int> N_indexs;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        N_numbers.push_back(element);
        N_indexs.push_back(0);
        
        
    }
    auto compare=N_numbers.begin();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (N_numbers[i]>N_numbers[j]){
                N_indexs[i]++;
            }else if(N_numbers[i]<N_numbers[j]){
                N_indexs[j]++;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<N_indexs[i]<<" ";
        
    }
    // Big-O notation is O(n^2) nested is used loop

    return 0;
}
    
    
    
    
    
    
    

   

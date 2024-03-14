
#include <iostream>
using namespace std;
#include <vector>
int main() {
    int n;
    cin>>n;
    int element;
    vector <int> N_numbers;
    for(int i=0;i<n;i++){
        
        cin>>element;
        N_numbers.push_back(element);
    }
    int search_N;
    cin>>search_N;
    auto compare=N_numbers.begin();
    for(int i=0;i<n;i++){
        
        
        if (*compare==search_N){
            cout<<i;
            return 0;
        }
        compare++;
    }
    cout<<-1;
    // our time complexity function goes like f(t)=Cn+C where C is constant number
    // Big O notation is O(n) and Big Omega notation is Ω(1)
    
    
    
    

    return 0;
}
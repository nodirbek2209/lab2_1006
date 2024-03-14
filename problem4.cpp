
#include <iostream>
using namespace std;
int main() {
    cout<<"enter:";
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
        
    }
    for(int i=n;i>0;i--){
        for(int i=n;i>0;i--){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<25;
    // function for time complexity f(t)=n*(n+1)+n+n^2+n+1=2n^2+3n+1
    // O(x^2)
    
    

    return 0;
}
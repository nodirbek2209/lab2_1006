#include <iostream>
using namespace std;
int main() {
    int a,b,n;
    cin>>a>>b>>n;
    int N=1;
    while(a%2==0 or b%2==0){
        if (a%2==0){
            N=N*2;
            a=a/2;
        }
        if (b%2==0){
            N=N*2;
            b=b/2;
        }
        
        
    }
    
    if (N>=n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    // time complexity Big-O notation is log(max(a,b))
    

    return 0;
}

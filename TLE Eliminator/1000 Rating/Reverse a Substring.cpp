#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    string s ;
    cin>> n ;
    cin>> s ;
    
    int prev = -1 ;
    int prevInd = -1 ;
    for(int i =0 ; i< n ; i++){
        int ch = s[i] - 'a' ;
        if(prev <= ch){
            prev = ch ;
            prevInd = i + 1 ;
        }    
        else{
            cout<<"YES"<<endl ;
            cout<< prevInd << " "<<i + 1<<endl ;
            return 0 ;
        }    
    }
    cout<<"NO"<<endl ;
    return 0 ;
    
}

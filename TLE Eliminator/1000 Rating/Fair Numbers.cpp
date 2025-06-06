#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isFair(ll n){
    ll num = n ;
    while(num != 0){
        ll x = num % 10 ;
        if(x != 0 && n % x != 0)
            return false ;
        
       num/= 10 ;    
    }
    return true ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k ;
    cin >> k ;
    while(k--){
    ll n ;
    cin >> n ;
    
    while(!isFair(n))
        n = n +1 ;
    
     cout<<n<<endl ;    
    }
   
    return 0 ;
    
}

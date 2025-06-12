#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main()
{
    int t ;
    cin >>t ;
    while(t--){
        ll n , x , y ;
        cin>>n >> x >> y ;
        
        ll tx = n / x ;
        ll ty = n / y ;
        ll val = (x*y) / (__gcd(x, y)) ;
        ll common = n / val ;
        
        tx = tx - common ;
        ty -= common ;
        
        ll sx = ((tx * (2*n + (tx - 1) * (-1))/ 2)) ;
        ll sy = ((ty  * (2*1 + (ty-1) * 1) / 2)) ;
        ll ans = sx - sy ;
        cout<<ans<<endl ;
        
    }

    return 0;
}

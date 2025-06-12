#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    vector<int> arr(n) ;
    int sum = 0 ;
    for(int i =0 ; i< n ; i++){
        cin >> arr[i] ;
        sum += arr[i] ;
    }    
    
   sort(arr.begin(), arr.end(), greater<int>());
    int left = 0 ;
    int ans = 0 ;
    for(int i =0 ; i< n ; i++){
        left += arr[i] ;
        sum -= arr[i] ;
        if(left > sum){
            ans = i+1 ;
            break ;
        }
    }
    cout<<ans<<endl ;
    return 0;
}

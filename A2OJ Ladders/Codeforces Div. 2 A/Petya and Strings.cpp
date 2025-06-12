#include<bits/stdc++.h>
using namespace std;

int main() {
    string s , t ;
    cin >> s>> t ;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    
    int ans = 0 ;
    for(int i =0 ; i< s.length() ; i++){
        int ch1 = s[i] -'0' ;
        int ch2 = t[i] - '0';
        
        if(ch1 != ch2){
            if(ch2 > ch1){
                ans = -1 ;
                break ;
            }
            else{
                ans = 1 ;
                break ;
            }
        }
    }
    cout<<ans<<endl ;
    
    return 0;
}

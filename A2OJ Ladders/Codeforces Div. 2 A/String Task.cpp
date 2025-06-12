#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'A' || 
    ch == 'i' || ch == 'o' || ch == 'u'
    || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'y' || ch =='Y')
        return true ;
    return false ;
}

int main() {
    string s ;
    cin >> s ;
    
    string ans = "" ;
    for(int i =0 ; i< s.length() ; i++){
        char ch = s[i] ;
        if(!isVowel(ch)){
            ans += '.' ;
            ans += ch ;
        }
    }
      transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
      cout<<ans<<endl;
    return 0;
}

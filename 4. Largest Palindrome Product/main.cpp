#include <iostream>
#include <vector>

using namespace std;
#define  LL long long
LL res = 0;

bool palindrome(LL x){
    vector<int> v;
    while(x>0){
        v.push_back(x%10);
        x /= 10;
    }

    int l = 0;
    int r = v.size()-1;
    while(l<=r){
        if(v[l] != v[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void solve(){
    for(int i=999; i>=100; i--){
        for(int j=999; j>=100; j--){
            LL n = i*j;
            if(palindrome(n)){
                res = max(res, n);
            }
        }
    }
}

int main(){
    solve();
    cout<<res<<endl;
}
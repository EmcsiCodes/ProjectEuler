#include <iostream>

using namespace std;

long long largest = 0;

bool prime(int x){
    for(int i = 2; i <= x/2; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    long long n = 600851475143;
    for(long long i=3; i<n/3; i = i + 2){
        if(prime(i) && n%i == 0){
            largest = max(largest, i);
            n /= i;
            i = i - 2;
            cout<<largest<<endl;
        }
    }
}

int main(){
    solve();
    cout<<largest<<endl;
}
#include <iostream>

using namespace std;

int main(){
    long long res = 0;
    int a = 1, b = 2;
    while(b <= 4000000){
        if(b%2 == 0){
            res += b;
        }
        int c = a + b;
        a = b;
        b = c;
    }
    cout << res << endl;
}
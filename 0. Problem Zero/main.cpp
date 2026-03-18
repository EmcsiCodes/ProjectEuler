#include <iostream>

using namespace std;

int main(){
    long long res = 0;
    for(long long i = 1; i<=890000; i = i + 2){
        res += i * i;
    }
    cout<< res << endl;
}
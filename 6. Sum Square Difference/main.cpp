#include <iostream>

using namespace std;
#define LL long long

int estimate_upper_bound(int n) {
    if (n < 6) return 15; // small safe bound
    double nn = (double)n;
    return (int)(nn * log(nn) + nn * log(log(nn))) + 10;
}

int main(){
    LL n = 100;
    LL sum_of_squares = n*(n+1)*(2*n+1)/6;
    LL sum_squared = (n*(n+1)/2)*(n*(n+1)/2);
    LL res = - sum_of_squares + sum_squared;
    cout<<res<<endl;
    
}
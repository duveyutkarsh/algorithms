#include<bits/stdc++.h>
using namespace std;

// O(log min(a , b)) using ternary operators
int gcd(int a, int b){
    return b ? gcd ( b, a % b ) : a ;
}

// O(log min(a , b))
// Iterative ---------------------------------------
int gcdi( int a, int b ){
    while (b){
        a %= b ;
        swap ( a, b ) ;
    }
    return a ;
} 

// O(log min(a , b)) , recursive 
int gcdr(int a, int b){
    if(b == 0)return a;
    else return gcdr(b , a%b);
}

// O( sqrt(min(a,b)) )
int gcdsq(int a ,int b){
    if(a<b)swap(a , b);
    if(b==0)return a;
    //trying all divisor of b since gcd(a,b) will be bounded by divisors of b.
    int ans = 1;
    for(int div = 1 ; div*div <= b ; div++){
        if(b%div != 0)continue;
        if(a%div == 0)ans = max(ans , div);
        if(a%(b/div) == 0)ans = max(ans , b/div);
    }
    return ans;
}

int lcm(int a , int b){
    return a*b/gcd(a,b);
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);cin.tie(0);
    cout << gcdsq(8 , 24);
    return 0;
}
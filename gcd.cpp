#include<bits/stdc++.h>
using namespace std;

// O(log min(a , b))
//recursive ----------------------------------------

int gcd(int a, int b){
    if(b == 0)return a;
    else return gcd(b , a%b);
}

// O(log min(a , b))
//using ternary operators --------------------------

int gcd(int a, int b){
    return b ? gcd ( b, a % b ) : a ;
}

// O(log min(a , b))
// Iterative ---------------------------------------

int gcd ( int a, int b ){
    while (b){
        a % = b ;
        swap ( a, b ) ;
    }
    return a ;
} 

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);cin.tie(0);
    
    return 0;
}
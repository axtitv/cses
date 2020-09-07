#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <forward_list>
#include <algorithm>
#include <bitset>
#include <string>
#include <cmath>

using namespace std;

#define ll long long
#define l long
#define ui unsigned int
#define ull unsigned long long
#define forf(i,n) for(int i=0;i<n;i++)
#define forb(i,n) for(int i=n-1;i>0;i--)
#define forab(i,a,b) for(int i=a;i<b;i++)
#define MOD 1e9+7

typedef vector<int> vi;
typedef vector<l> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int, int> p;
typedef vector<p> vp;


void sol(ll n){
    cout << n << " "; 
    while(n!=1){
        if(n&1){
            n = 3*n+1;
        }else{
            n /= 2;
        }
        cout << n << " ";
    }
    cout << endl;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll n;
    cin >> n;

    sol(n);

    return 0;
}
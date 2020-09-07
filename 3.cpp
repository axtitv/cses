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
#define fa(i,n) for(int i=0;i<n;i++)
#define fb(i,n) for(int i=n-1;i>0;i--)
#define fab(i,a,b) for(int i=a;i<b;i++)
#define fba(i,b,a) for(int i=b;i>a;i--)
#define MOD 1e9+7
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define mii map<int, int>
#define vpi vector<pair<int, int>>
#define INF 1e6

void debug(size_t i, size_t a){
    cout << "[i: " << i << "]  [" << "val: " << a << "]" << endl;
}

void print(vi a){
    fa(i, a.size()){
        cout << a[i] << " ";
    }
    cout << endl;
}

vi readn(int n){
    vi a (n);
    fa(i, n){
        cin >> a[i]; 
    }
    return a;
}

//Repetitions:TO.BE.DONE.
void sol(){
    ui len = 1, max_len = 1;
    
    string s;
    cin >> s;
    
    ui n = s.size();
    
    fab(i,1, n){
        if(s[i]==s[i-1]){
            len++;
        }else{
            len = 1;
        }
        max_len = max(max_len, len);
    }

    cout << max_len << endl;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    sol();

    return 0;
}

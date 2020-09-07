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
#define fb(i,n) for(int i=n;i>0;i--)
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

//Permutations:
void sol(){
    ui n;
    cin >> n;
    
    if(n==1){
        cout << 1 << endl;
    }

    if(n<=3){
        cout << "NO SOLUTION" << endl;
    }else if(n==4){
        cout << "3 1 4 2" << endl;
    }else{
        if(n%2){
            fb(i,n/2+1){
                cout << 2*i-1 << " ";  
            }
            fb(i, n/2){
                cout << 2*i << " ";
            }
            cout << endl;
        }else{
            fb(i,n/2){
                cout << 2*i-1 << " ";  
            }
            fb(i, n/2){
                cout << 2*i << " ";
            }
            cout << endl;
        }
    }

}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    sol();

    return 0;
}

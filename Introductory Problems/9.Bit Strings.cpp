#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <utility>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <iomanip>
#include <iterator>
typedef long long ll;
const ll MOD = 1e9 + 7;

using namespace std;

int main() {
    ll t;
    cin >> t;
    ll base = 2;

    ll res= 1;
    
    while(t > 0){
        if(t % 2 == 1){
            res= (res * base)% MOD;
        }
        base = (base * base) % MOD;
        t /=2;
    }

    cout<<res;
    return 0;
}
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
using namespace std;

int main() {
    ll t;
    cin >> t;
    
    ll sum= t*(t+1)/2;

    if(sum%2 !=0){
        cout<<"NO";
        return 0;
    }

    ll half = sum /2;
    vector<ll> s1;
    vector<ll> s2;

    for (ll i = t; i >0; --i) {
        if(i <= half){
            s1.push_back(i);
            half-=i;
        }else{
            s2.push_back(i);

        }
    }

    cout<<"YES"<<endl;
    cout<<s1.size()<<endl;
    for(ll i: s1){
        cout<<i<<" ";
    }
    cout << endl;
    cout<<s2.size()<<endl;
    for(ll i: s2){
        cout<<i<<" ";
    }

    

    return 0;
}
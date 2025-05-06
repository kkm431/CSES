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

using namespace std;

int main() {
    int n;
    cin >> n;
    long arr[n];

    vector<bool> check(n);
    for (int i = 0; i < n-1; ++i) {
        int x;
        cin>>x;

        check[x-1] = true;
    }

    for (int i = 0; i < n; ++i) {
        if(!check[i]){
            cout<<i+1;
            break;
        }
    }

    return 0;
}
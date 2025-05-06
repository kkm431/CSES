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
    long n;
    cin >> n;
    vector<long> arr(n);

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    long ctr = 0;

    for (int i = 1; i < n; ++i) {
        if(arr[i-1] > arr[i]){
            ctr += (arr[i-1] - arr[i]);
            arr[i]= arr[i-1];
        }
    }
    cout<<ctr;
    return 0;
}
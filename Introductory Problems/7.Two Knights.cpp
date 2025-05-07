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

    for(long long k=1; k<=n; k++){
        long long step= (k*k) * ((k*k) - 1) / 2;
        long long attack= 0;

        if(k >= 3){
            attack= 4*(k-1)*(k-2);
        }
        cout<<step - attack<<endl;
    }
    return 0;
}
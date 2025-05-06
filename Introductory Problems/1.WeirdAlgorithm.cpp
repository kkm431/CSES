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
    long long t;
    cin >> t;
    
    while(t != 1){
        cout<<t<<" ";
        if(t % 2 == 0){
            t /=2;
        }
        else{
            t = (t*3) + 1;
        }
    }
    cout<<t;
    return 0;
}
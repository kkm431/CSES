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
    int t;
    cin >> t;
    if(t == 2 || t ==3){
        cout<<"NO SOLUTION";
    }
    else{
        for(int i = 2; i<=t; i+=2){
            cout<<i<<" ";
        }
        for(int i = 1; i<=t; i+=2){
            cout<<i<<" ";
        }
        
    }

    return 0;
}
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
    
    long c=1, m=0;
    string dna;
    cin>>dna;

    long i =0, j=0;

    while(i < dna.length()){
        while(j < dna.length() && dna[j] == dna[j+1]){
            c++;
            j++;
        }

        j++;
        i=j;
        m= max(c, m);
        c=1;
        
    }
    cout<<m;
    return 0;
}
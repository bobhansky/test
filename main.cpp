#include<iostream>
#include<cstdlib>
#include<cmath>
#include<set>
#include<fstream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<queue>
#include <sstream>
#include<unordered_map>

using namespace std;




int main(){
    unordered_map<int, int> dp;
    dp[1] = 1;
    dp[2] = 2;

    unordered_map<int, int>::iterator it = dp.begin();
    while (it != dp.end()) {
        cout << it->first;
        it++;
    }


    return 0;
    
}











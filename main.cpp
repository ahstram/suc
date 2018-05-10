#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {

    unordered_map<string, int> htable;
    string line;

    
    while (cin >> line) {
        htable[line]++;
    }

    vector<string> keys;
    keys.reserve(htable.size());

    for (auto& it : htable) {
        keys.push_back(it.first);
    }

    sort(keys.begin(), keys.end());

    for (auto& it : keys) {

        cout << setfill(' ') << setw(7) << htable[it] << " " << it << endl;
    }

    exit(EXIT_SUCCESS);

}

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

    vector<string> keys;
    keys.reserve(htable.size());

    while (cin >> line) {
       if ( htable.find(line) == htable.end() ) // if not in htable already:
           keys.push_back(line); // add to keys vector
       htable[line]++;
    }

    sort(keys.begin(), keys.end()); //sort our keys vector

    for (auto& it : keys) //iterate through keys, printing from htable
        cout << setfill(' ') << setw(7) << htable[it] << " " << it << endl;

    exit(EXIT_SUCCESS);

}

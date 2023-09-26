
#include <iostream>
#include <math.h>
#include <map>
#include <set>

using namespace std;

int main()
{
    // Part 1:
    //  map<string, int> mp;
    //  mp["mindx"] = 1;
    //  mp["sman doe"] = 132123;

    // cout << mp["sman doe"] << endl;// KQ: 132123

    // Part 2:
    // map<string, string> mp;
    // mp["mindx"] = 24234;
    // mp["sman doe"] = 132 - 123;

    // map<string, string>::iterator it = mp.begin();
    // while (it != mp.end())
    // {
    //     cout << "Key: " << it->first << ", Value" << it->second << endl;
    //     it++;
    // }

    // Part 3: set
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(5);

    set<int>::iterator it = s.begin();

    while (it != s.end())
    {
        cout << *it << "";
        it++;
    }
    cout << endl;

    // cout << s.size() << endl;
    // cout << s.find(2);
    s.empty();

    cout << endl;

    return 0;
}

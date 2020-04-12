#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    string country;
    string woman;
    map<string, int> count;
    
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        cin >> country;
        getline(cin, woman); // reads remainder string with spaces (fullname woman loved)
        count[country]++;
    }

    map<string, int>::iterator it;
    for (it = count.begin(); it != count.end(); ++it)
        cout << it->first << " " << it->second << endl;

    return 0;
}
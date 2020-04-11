#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    string country;
    string woman;
    map<string, int> country_count;
    
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        cin >> country;
        getline(cin, woman); // reads remainder string with spaces (fullname woman loved)
        country_count[country]++;
    }

    map<string, int>::iterator it;
    for (it = country_count.begin(); it != country_count.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
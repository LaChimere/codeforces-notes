#include <iostream>
using namespace std;

int n;
string s;

int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        if (s.length() <= 10) {
            cout << s << "\n";
        } else {
            cout << s.front() << s.length() - 2 << s.back() << "\n";
        }
    }

    return 0;
}

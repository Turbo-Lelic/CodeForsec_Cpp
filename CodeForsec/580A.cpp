#include <iostream>

using namespace std;

int main(void) {
    int n = 0, x = 0, y = 0, s = 0, ans = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;

        if (y > x) {
            s = 0;
        }
        s++;
        if (ans < s) {
            ans = s;
        }
        y = x;
    }
    cout << ans;

    return 0;
}
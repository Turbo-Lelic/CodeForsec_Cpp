#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n = 0, cnt = 0;
	cin >> n;
	vector<char> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		if (arr[i] == '+') {
			cnt++;
		} else if (arr[i] == '-' && cnt == 0) {
			cnt = cnt;
		} else if (arr[i] == '-') {
			cnt--;
		}
	}
	cout << cnt;
	return 0;
}
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<char> arr(10);
	int cnt_1 = 0, cnt_0 = 0;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] == '1') {
			cnt_1++;
			cnt_0 = 0;
		} if (arr[i] == '0') {
			cnt_0++;
			cnt_1 = 0;
		} if (cnt_1 >= 7 || cnt_0 >= 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";

	return 0;
}
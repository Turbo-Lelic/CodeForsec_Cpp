#include <iostream>
#include <string>

using namespace std;

int main() {
	char numbers[4];

	for (int i = 0; i < 4; i++) {
		cin >> numbers[i];

		if (numbers[i] == 'H' || numbers[i] == 'Q' || numbers[i] == '9' || numbers[i] == '+') {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
#include <iostream>
using namespace std;

void func(const int n) {
	if ((n * n + n) / 2 % 2 != 0) {
		cout << "NO";
	}
	else {
		long long sum2 = (n * n + n) / 4;
		int petya_counter = 0, masha_counter = 0;
		long long petya_plate[100]{};
		long long masha_plate[100]{};
		long long petya_summa = 0, masha_summa = 0;
		for (int i = n; i > 0; i--) {
			if (i <= sum2) {
				masha_plate[masha_counter] += i;
				masha_counter++;
				masha_summa += i;
				sum2 -= i;
			}
			else {
				petya_plate[petya_counter] += i;
				petya_counter++;
				petya_summa += i;
			}
		}
		cout << "Counter of Petya's plates: " << petya_counter << endl;
		for (int i = 0; i < petya_counter; i++) {
			cout << petya_plate[i] << " ";
		}
		cout << endl;
		cout << "Counter of masha's plates: " << masha_counter << endl;
		for (int i = 0; i < masha_counter; i++) {
			cout << masha_plate[i] << " ";
		}
		cout << endl;
	}
}

int main() {
	long long n;
	cin >> n;
	func(n);
}

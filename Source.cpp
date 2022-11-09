#include <iostream>
using namespace std;
int main() {

	int L=0, w=0;
	cin >> L >> w;

	if (L == 1 && w == 1) {
		cout << 0;
		return 0;
	}

	if ( L ==1 && w >=2) {
		cout << w / 2;
		return 0;
	}

	if (w == 1 && L >= 2) {
		cout << L / 2;
		return 0;
	}

	if (L == 2) {
		cout << w;
		return 0;
	}

	if (L % 2 == 0) {
		int temp = w ;
		for (int i = 1; i < L/2; i++) {
			
			temp += w;
		}
		cout << temp;
		return 0;
	}
	
	else if (L % 2 != 0) {
		L--;
		int t = L / 2; 
		int temp = 0;
		int counter = 0;
			while (temp != w && counter + 1 != w  && counter < w) {
				counter += 2;
				temp++;
		}
			int t3 = w * t;
		cout <<  t3 +temp;
		return 0;
	}

	int L1 = 0;
		while (L1 != L&& L1+1!=L ) {
			L1 += 2;
		}

		int w1 = 0;
		while (w1!=w) {
			w1++;
			}

		int temp = 0;
		for (int i = 0; i < L1; i++) {
			temp += w1;
		}
		
		if (L - L1 > 0) {
			int temp1 = L / 2;
			cout << temp + temp1;
		}
		else
			cout << temp;
		
		
		return 0;
}

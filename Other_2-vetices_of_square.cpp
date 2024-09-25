#include<bits/stdc++.h>
using namespace std;

void findVertices(int x1, int y1, int x2, int y2) {
	// Check if the x-coordinates
	// are equal
	if (x1 == x2) {
		cout << (x1 + y2 - y1)
			<< ", " << y1 << endl;

		cout << (x2 + y2 - y1)
			<< ", " << y2;
	}
	// Check if the y-coordinates
	// are equal
	else if (y1 == y2) {
		cout << x1 << ", "
			<< (y1 + x2 - x1)
			<< endl;

		cout << x2 << ", "
			<< (y2 + x2 - x1);
	}
	// If the given coordinates
	// forms a diagonal of the square
	else if (abs(x2 - x1)
			== abs(y2 - y1)) {

		cout << x1 << ", " << y2
			<< endl;
		cout << x2 << ", " << y1;
	}
    // Square does not exist
    cout << "-1";
}

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    findVertices(x1, y1, x2, y2);

    return 0;
}
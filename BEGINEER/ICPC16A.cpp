#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i<t; i++){
	    int x1, y1;
	    cin >> x1 >> y1;
	    int x2, y2;
	    cin >> x2 >> y2;
	    if((x2-x1)<0 && y2 == y1)
	        cout << "left" << endl;
	    else if((x2-x1)>0 && y2 == y1)
	        cout << "right" << endl;

	    else if((y2-y1)<0 && x2 == x1)
	        cout << "down" << endl;
	    else if((y2-y1)>0 && x2 == x1)
	        cout << "up" << endl;
	    else
	        cout << "sad" << endl;
	}
	return 0;
}

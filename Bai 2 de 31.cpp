#include <iostream>

using namespace std;

int main()

{
	int r;// r la Ban kinh
	cout << "Nhap ban kinh r: "<< endl;
	cin >> r;
	
    double S, V;//S la dien tich, V la the tich
	S = 4 * r * r;
	V = r * S / 3;
    cout << "Dien tich la: " << S << endl;
    cout << "The tich la: " << V << endl;
    
	return 0;
}
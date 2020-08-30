#include <iostream>
#include <string>

int main () {
	float n, a, b, x, y;
	std :: cin >> n >> a >> b >> x >> y;
	if (n > a && n < b) {
		std :: cout << n*(1 - x / 100);
	} else if (n > b) {
		std :: cout << n*(1 - y / 100);
	} else {
		std :: cout << n;
	}
	
	return 0;
}

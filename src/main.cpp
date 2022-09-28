#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double h, p;
	while (cin >> h >> p)
	{
		cout << fixed << setprecision(2) << round(h * 100 / p) / 100 << '\n';
	}

	return 0;
}
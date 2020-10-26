#include<iostram>
using namespace std;

int get_dimensions(int x, int y) { int a; if (x > 0 && y > 0) a=1; else if (x < 0 && y > 0) a=2; else if (x < 0 && y < 0) a=3; else if (x > 0 && y < 0) a=4; else a=0; return a; }

int main()
{
	int x, y;
	cin >> x >> y;
	int a = get_dimensions(x, y);
	if (!a) cout << "Origin" << endl;
	else cout << "Quarter: " << a << endl;
}
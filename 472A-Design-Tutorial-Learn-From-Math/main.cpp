#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin >> n;
	if (n%2==0)
		cout << "8 " << (n-8);
	else 
		cout << "9 " << (n-9);
	return 0;
}

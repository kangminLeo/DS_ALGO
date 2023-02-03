#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	using uchar = unsigned char;
	using pis = pair<int, string>;
	using da10 = double[10];
	using func = void (*)(int);

	template <typename T>
	using matrix1d = vector<T>;

	void my_function(int n)
	{
		cout << "my_function : " << endl;
	}

	string str[] = {"I", "love", "you"};

	for (const auto &s : str)
		cout << s << " ";
	cout << endl;

	// lambda
	auto square = [](double a) { return a * a; } cout << "square(1.414) = " << square(1.414) << endl;
}
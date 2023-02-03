#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec1{1, 2, 3, 4};
	cout << vec1.capacity() << ":" << vec1.size() << endl;

	vec1.push_back(5);

	cout << vec1.capacity() << ":" << vec1.size() << endl;

	vec1.push_back(6);

	vec1.insert(vec1.begin(), 0);

	vec1.erase(vec1.begin() + 1, vec1.begin() + 3);

    for(int i = 0 ; i < vec1.size(); i++)
    {
        cout << vec1[i];
    }
    cout << '\n';
}
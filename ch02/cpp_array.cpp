#include <array>
#include <iostream>

using namespace std;

int main()
{
	array<int, 5> scores = {50, 60, 70, 80, 90};
    int sum = 0; 

    for(int i = 0; i < scores.size(); i++)
    {
        sum += scores[i];
    }

    float m = (float)sum / scores.size();

    cout << "Mean score : " << sum << endl;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<vector<int>> mat1 ( 2, vector<int>(3, 0));


    for(int r = 0; r < mat1.size();r++)
    {
        for(int c = 0 ; c < mat1[r].size(); c++)
        {
            cout << mat1[r][c];
        }
        cout << endl;
    }
}
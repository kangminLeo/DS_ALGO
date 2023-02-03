#include <iostream>

using namespace std;

template <typename T>
class DynamicArray
{
    private:
        unsigned int sz;
        T* arr;
    public:
        explicit DynamicArray(int n) : sz(n){
            arr = new T[sz] {};
        }

        ~DynamicArray() { delete[] arr;}

        unsigned int size() { return sz;}

        T& operator[](const int i) { return arr[i];}
        const T& operator[] (const int i) const{return arr[i];}

};


int main()
{
    DynamicArray<float> da(5);
    da[0] = 10.2f;
    da[1] = 20.5f;
    da[2] = 242.123f;

    for(int i = 0 ; i < da.size(); i++)
    {
        cout << da[i] << endl; 
    }
}

// template<class T, class Allocator = std::allocator<T>> class vector;
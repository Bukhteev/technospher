#include <iostream>
#include <cstdint>

using namespace std;
int global = 0;

int main()
{
    int* heap = (int*) malloc(sizeof(int));

    cout << (uint64_t) main << '\n';
    cout << (uint64_t) &global << '\n';
    cout <<(uint64_t) heap << '\n';
    cout << (uint64_t) &heap << '\n';

    char c;
    std::cin >> c;
    return 0;
}

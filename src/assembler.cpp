#include <iostream>
#include <fstream>
using namespace std;

#define word int32_t

int main()
{
    word prog[] = {
        15,  17,   -1,
        17,  -1,   -1,
        16,   1,   -1,
        16,   3,   -1,
        15,  15,    0,
        0,   -1,   72,
        101, 108, 108,
        111,  44,  32,
        119, 111, 114,
        108, 100,  33,
        10, 0
    };

    int size = sizeof(prog) / sizeof(prog[0]);

    ofstream f {"program.bin"};
    for(size_t i = 0; i < size; i++)
        f.write((char*)(&prog[i]), sizeof(prog[i]));
}
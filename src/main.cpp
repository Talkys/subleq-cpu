#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "cpu.hpp"
/*
subleq instruction preview
sbuleq a, b, c
mem[b] := mem[b] - mem[a]
if (mem[b]<= 0) goto c
*/

int main(int argc, char* argv[])
{
    std::string filename;
    std::vector<word> prog;
    std::ifstream in;
    word current;
    cpu* TVC;
    switch (argc)
    {    
    case 2:
        filename = std::string(argv[1]);
        in.open(filename);
        while (in.good())
        {
            in.read((char*)(&current), sizeof(current));
            prog.push_back(current);
        }
        TVC = new cpu(prog);
        TVC->run();
        TVC->showmem();
        break;
    
    default:
        break;
    }
}
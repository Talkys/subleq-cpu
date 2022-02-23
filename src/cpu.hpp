#include <vector>
#include <iostream>

#define word int32_t

class cpu
{
    private:
    std::vector<word> mem;

    public:
    cpu(std::vector<word> prog);
    void run();
    void showmem();
};

cpu::cpu(std::vector<word> prog)
{
    for(int i = 0; i < prog.size(); i++)
        this->mem.push_back(prog[i]);
}

void cpu::run()
{
    word pc = 0, next, a, b, c;
    char z;
    do{
        next = pc + 3;
        a = mem[pc]; b = mem[pc+1]; c = mem[pc+2];
        if(a == -1)
        {
            std::cin >> z;
            mem[b] = z;
        }
        else if(b == -1)
            std::cout << (char) mem[a];
        else
        {
            mem[b] -= mem[a];
            if(mem[b] <= 0) next = c;
        }
        pc = next;
    }while(pc >= 0);
}

void cpu::showmem()
{
    for(int i = 0; i < this->mem.size(); i++)
    {
        std::cout<<this->mem[i]<<" ";
    }
    std::cout<<std::endl;
}
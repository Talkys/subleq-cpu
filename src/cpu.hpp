#include <vector>
#include <iostream>

class cpu
{
    private:
    std::vector<int> mem;

    public:
    cpu(std::vector<int> prog);
    void run();
    void showmem();
};

cpu::cpu(std::vector<int> prog)
{
    for(int i = 0; i < prog.size(); i++)
        this->mem.push_back(prog[i]);
}

void cpu::run()
{
    int pc = 0, next, a, b, c;
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
            std::cout << mem[a];
        else
        {
            mem[b] -= mem[a];
            if(mem[b] <= 0) next = c;
        }
        pc = next;
    }while(pc >= 0);
}
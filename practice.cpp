#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class pc_specs {
    public:
        string CPU;
        string RAM;
        string GPU;
        pc_specs(string x,string y,string z) {
        CPU = x;
        RAM = y;
        GPU = z;
        }
};

int main() {

    pc_specs my_pc("Ryzen 5 7600","32GB","Nvidia RTX 4070ti Super");

    cout << "CPU: "<< my_pc.CPU<< endl;
    cout << "RAM: "<< my_pc.RAM<< endl;
    cout << "GPU: "<< my_pc.GPU<< endl;

    return 0;
}

#include <iostream>
#include <fstream>
#include <sstream>

int absqq(int a)
{
    if (a < 0) {
        a = -a;
    }
    return a;
}

int main()
{
    std::string npt;
    std::ifstream file ("input.txt");
    getline(file, npt);
    std::stringstream m;
    int b = stoi(npt);
    int a = absqq(b - 9);
    m << b << 9 << a;
    std::ofstream f ("output.txt");
    npt = m.str();
    f << npt;
    return 0;
}

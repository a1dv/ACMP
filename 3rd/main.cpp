#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
    long long res = 0;
    std::string npt;
    std::string a = "25";
    std::ifstream file ("input.txt");
    getline(file, npt);
    int b = stoi(npt);
    res = (b / 10) * ((b / 10) + 1);
    std::ofstream f ("output.txt");
    std::stringstream m;
    m << res << a;
    npt = m.str();
    f << stoll(npt);
    return 0;
}

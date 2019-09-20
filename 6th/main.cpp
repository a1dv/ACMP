#include <fstream>

int main()
{
    std::ifstream file ("input.txt");
    std::ofstream f ("output.txt");
    std::string npt;
    getline(file,npt);
    f << npt;
}

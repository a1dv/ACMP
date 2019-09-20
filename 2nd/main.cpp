#include <iostream>
#include <fstream>

int main()
{
    long long res = 0;
    std::string npt;
    std::ifstream file ("input.txt");
    getline(file, npt);
    int k = stoi(npt);
    int eff = k;
    for (int i = 0; i <= k/2; i++) {
        res += i + eff;
        eff--;
    }
    std::ofstream f ("output.txt");
    f << res;
}

#include <fstream>

int substringing(std::string* input)
{
    std::string num = input->substr(0, input->find(' '));
    input->replace(0, input->find(' ') + 1, "");
    return stoi(num);
}


int main()
{
    int first;
    int second;
    int num;
    std::string npt;
    std::ifstream file ("input.txt");
    getline(file, npt);
    first  = substringing(&npt);
    second = substringing(&npt);
    num = substringing(&npt);
    int diff = second - first;
    int third = first + diff * (num - 1);
    std::ofstream fole ("output.txt");
    fole << third;
    file.close();
    fole.close();
}

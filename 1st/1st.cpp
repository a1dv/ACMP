#include <iostream>
#include <fstream>

int substringing(std::string* input)
{
    std::string num = input->substr(0, input->find(' '));
    input->replace(0, input->find(' ') + 1, "");
    return stoi(num);
}


int main(void)
{
    std::string npt;
    std::ifstream file ("input.txt");
    getline(file,npt);
    std::cout << npt;
    int a = 0;
    int b = 0;
    a = substringing(&npt);
    b = stoi(npt);
    int sum = a + b;
    std::ofstream item ("output.txt");
    item << sum;
}

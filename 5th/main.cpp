#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int substringing(std::string* input)
{
    std::string num = input->substr(0, input->find(' '));
    input->replace(0, input->find(' ') + 1, "");
    return stoi(num);
}

int main()
{
    std::string npt;
    std::string input;
    std::ifstream file ("input.txt");
    getline(file, npt);
    getline(file, input);
    int k = stoi(npt);
    int a[k];
    std::stringstream m;
    std::ofstream f ("output.txt");
    int counter = 0;
    int iterations = 0;
    for (int i = 0; i < k; i++)
    {
        a[i] = substringing(&input);
        if (a[i] % 2 != 0) {
            f << a[i] << ' ';
            counter++;
        }
        else {
            m << a[i] << ' ';
            iterations++;
        }
    }
    npt = m.str();
    f << "\n";
    f <<  npt;
    if (counter <= iterations) {
        f << "\n";
        f << "YES";
    }
    else {
      f << "\n";
      f << "NO";
    }
}

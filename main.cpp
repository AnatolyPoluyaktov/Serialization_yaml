#include <iostream>
#include "document_generator.hpp"
using namespace std;

int main()
{   gen::document_generator kek{5,3};
    cout << kek.Getdepth() << endl;
    return 0;
}

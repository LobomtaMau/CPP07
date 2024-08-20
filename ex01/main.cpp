#include "Iter.hpp"

int main (){
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(array) / sizeof(array[0]);

    std::cout << "Original array: ";
    iter(array, len, printCouves<int>);
    std::cout << "\n";

    std::cout << "Array after add: ";
    iter(array, len, addCouves<int>);
    iter(array, len, printCouves<int>);
    std::cout << "\n";

    std::cout << "Array after changing all 2Nabos: ";
    iter(array, len, change2Nabos<int>);
    iter(array, len, printCouves<int>);
    std::cout << "\n\n";


    return 0;
}







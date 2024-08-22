#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename Template, typename Func>
void iter(Template *array, int len, Func funtion) {
    for (int i = 0; i < len; ++i)
        funtion(array[i]);
}

template <typename Template>
void printCouves(const Template &other) {
    std::cout << other << " "; 
}

template <typename Template>
void addCouves(Template &other) {
    other += 1;
}

template <typename Template>
void change2Nabos(Template &other) {
    other = 0;
}


#endif
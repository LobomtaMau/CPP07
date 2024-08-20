#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename Template>
void swap(Template &a, Template &b) {
    Template temp = a;
    a = b;
    b = temp;
}

template <typename Template>
Template min(Template a, Template b) {
    return (a < b) ? a : b;
}

template <typename Template>
Template max(Template a, Template b) {
    return (a > b) ? a : b;
}

#endif
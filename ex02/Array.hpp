#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template <typename Template>
class Array {
    private:
        Template *_array;
        unsigned int _size;
    
    public:
        Array() : _array(NULL), _size(0) {};
        
        Array(unsigned int n) : _array(new Template[n]()), _size(n) {}

        Array(const Array &other) : _array(NULL), _size(0) {
            *this = other;
        }

        Array &operator=(const Array &other) {
            if (this != &other) {
                delete[] _array;
                _size = other._size;
                if(_size > 0) {
                    _array = new Template[_size];
                    for (unsigned int i = 0; i < _size; i++){
                        _array[i] = other._array[i];
                    }
                }
                else 
                    _array = NULL;
            }
            return *this;
        }

        ~Array() {
            delete[] _array;
        }

        unsigned int len() const {
            return _size;
        }

        Template &operator[](unsigned int idx) {
            if (idx < _size)
                return _array[idx];
            else
                throw std::exception();
        }

        const Template &operator[](unsigned int idx) const {
            if (idx < _size)
                return _array[idx];
            else
                throw std::exception();
        }




};


#endif
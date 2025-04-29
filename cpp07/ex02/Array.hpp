#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
private:
    T* _elements;
    unsigned int _n;

public:
    Array() : _elements(NULL), _n(0) {}

    explicit Array(unsigned int n) : _n(n) {
        _elements = new T[n]();
    }

    Array(Array const &other) : _elements(NULL), _n(0) {
        *this = other;
    }

    ~Array() {
        if (_elements)
            delete[] _elements;
    }

    Array& operator=(Array const &other) {
        if (this != &other) {
            if (_elements)
                delete[] _elements;
            _n = other._n;
            _elements = new T[_n];
            for (unsigned int i = 0; i < _n; i++)
                _elements[i] = other._elements[i];
        }
        return *this;
    }

    T& operator[](unsigned int i) {
        if (i >= _n)
            throw std::exception();
        return _elements[i];
    }

    const T& operator[](unsigned int i) const {
        if (i >= _n)
            throw std::exception();
        return _elements[i];
    }

    unsigned int size() const {
        return _n;
    }
};

#endif

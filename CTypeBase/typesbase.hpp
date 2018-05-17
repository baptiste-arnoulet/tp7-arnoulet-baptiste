#ifndef TYPESBASE_HPP
#define TYPESBASE_HPP
#include <cstdint>

namespace std{
template <class T>
class TypeBase{
    T myval;

public:
    explicit TypeBase (T val = T())noexcept : myval(val){}
    operator T & () noexcept { return myval;}
    operator const T & () const noexcept { return myval; }
};// TypeBase
typedef TypeBase <int32_t> Integer;
typedef TypeBase <int16_t> Short;
typedef TypeBase <unsigned char> Caracter;

}// std

#endif // TYPESBASE_HPP

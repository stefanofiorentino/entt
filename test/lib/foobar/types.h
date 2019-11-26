#ifndef TYPES_H
#define TYPES_H


#include "attribute.h"


template<typename...>
struct FOOBAR_API identifier {
    inline static int value{};
};


template<typename, typename... Gen>
struct FOOBAR_API generator {
    static int type() {
        static const int value = identifier<Gen...>::value++;
        return value;
    }
};


struct FOOBAR_API foo {};
struct FOOBAR_API bar {};
struct FOOBAR_API quux {};


template<typename Type>
using quux_gen = generator<Type, quux>;


#endif // TYPES_H

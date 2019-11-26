#define FOOBAR_API_EXPORT

#include "attribute.h"
#include "types.h"

template int quux_gen<foo>::type();

FOOBAR_EXPORT int get_bar() {
    return quux_gen<bar>::type();
}

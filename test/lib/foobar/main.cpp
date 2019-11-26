#define FOOBAR_API_IMPORT

#include <gtest/gtest.h>
#include "attribute.h"
#include "types.h"

FOOBAR_IMPORT int get_bar();

TEST(Foo, Bar) {
    const auto foo_type = quux_gen<foo>::type();
    const auto bar_type = quux_gen<bar>::type();

    ASSERT_NE(foo_type, get_bar()) << bar_type;
    ASSERT_EQ(bar_type, get_bar()) << foo_type;
}

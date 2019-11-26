#include <entt/signal/emitter.hpp>

struct test_emitter
        : entt::emitter<test_emitter>
{};

struct event {
    int payload;
};

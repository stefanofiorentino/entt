#include <entt/core/hashed_string.hpp>
#include <entt/lib/attribute.h>
#include <entt/meta/factory.hpp>
#include "types.h"

ENTT_EXPORT void bind_ctx(entt::meta_ctx context) {
    entt::meta_ctx::bind(context);
}

ENTT_EXPORT void meta_init() {
    entt::meta<char>().type("char"_hs).data<'c'>("c"_hs);
    entt::meta<int>().type("int"_hs).data<0>("0"_hs);
}

ENTT_EXPORT void meta_deinit() {
    entt::meta<char>().reset();
    entt::meta<int>().reset();
}

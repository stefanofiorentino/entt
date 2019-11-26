#include <entt/lib/attribute.h>
#include <entt/signal/emitter.hpp>
#include "types.h"

ENTT_EXPORT void emit_event(int value, test_emitter &emitter) {
    emitter.publish<event>(value);
}

#define ENTT_API_EXPORT

#include <entt/lib/attribute.h>
#include <entt/signal/dispatcher.hpp>
#include "types.h"

ENTT_EXPORT void trigger_event(int value, entt::dispatcher &dispatcher) {
    dispatcher.trigger<event>(value);
}

#include "entity.h"

Entity entity_init() {
    return (Entity) {
        .component_count = 0,
    };
}

void entity_add_component(Entity* e, Component* c) {
    e->components[e->component_count] = c;
    ++e->component_count;
}

Component* entity_get_component(Entity* e, ComponentType type) {
    for (size_t i = 0; i < e->component_count; ++i) {
        if (e->components[i]->type == type)
            return e->components[i];
    }

    return NULL;
}

void entity_free_all_components(Entity* e) {
    for (size_t i = 0; i < e->component_count; ++i) {
        free(e->components[i]);
    }
}

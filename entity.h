#ifndef C_COMPONENT_PATTERN_ENTITY_H
#define C_COMPONENT_PATTERN_ENTITY_H

#include <stdlib.h>

#include "components.h"

#define MAX_COMPONENT_COUNT 100

typedef struct Entity {
    Component*  components[MAX_COMPONENT_COUNT];
    size_t      component_count;
} Entity;

Entity entity_init(void);
void entity_add_component(Entity* e, Component* c);
Component* entity_get_component(Entity* e, ComponentType type);
void entity_free_all_components(Entity* e);

#endif //C_COMPONENT_PATTERN_ENTITY_H

#ifndef C_COMPONENT_PATTERN_COMPONENTS_H
#define C_COMPONENT_PATTERN_COMPONENTS_H

#include <stdlib.h>
#include <string.h>

typedef enum ComponentType {
    kPositionComponent  = 0,
    kHealthComponent    = 1,
    kNameComponent      = 2,
} ComponentType;

typedef struct Component {
    ComponentType   type;
} Component;

typedef struct PositionComponent {
    Component   parent;
    float       x;
    float       y;
} PositionComponent;

typedef struct HealthComponent {
    Component   parent;
    float       health;
} HealthComponent;

#define MAX_NAME_LENGTH 100

typedef struct NameComponent {
    Component   parent;
    char        name[MAX_NAME_LENGTH];
} NameComponent;

PositionComponent* position_init(float x, float y);
HealthComponent* health_init(float value);
NameComponent* name_init(const char* name);

#endif //C_COMPONENT_PATTERN_COMPONENTS_H

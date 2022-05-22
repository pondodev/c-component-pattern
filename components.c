#include "components.h"

PositionComponent* position_init(float x, float y) {
    PositionComponent* c = malloc(sizeof(PositionComponent));
    c->parent.type = kPositionComponent;

    c->x = x;
    c->y = y;

    return c;
}

HealthComponent* health_init(float value) {
    HealthComponent* c = malloc(sizeof(HealthComponent));
    c->parent.type = kHealthComponent;

    c->health = value;

    return c;
}

NameComponent* name_init(const char* name) {
    NameComponent* c = malloc(sizeof(NameComponent));
    c->parent.type = kNameComponent;

    strncpy(c->name, name, MAX_NAME_LENGTH - 1);

    return c;
}

#include "main.h"

int main() {
    Entity a = entity_init();
    Entity b = entity_init();

    entity_add_component(&a, (Component*)name_init("foo"));
    entity_add_component(&a, (Component*)position_init(1.3f, 2.4f));

    entity_add_component(&b, (Component*)name_init("bar"));
    entity_add_component(&b, (Component*)health_init(20.5f));

    NameComponent* a_name = (NameComponent*)entity_get_component(&a, kNameComponent);
    if (a_name != NULL) {
        printf("name is: %s\n", a_name->name);
    } else {
        printf("failed to get name for entity a!");
    }

    NameComponent* b_name = (NameComponent*)entity_get_component(&b, kNameComponent);
    if (b_name != NULL) {
        printf("name is: %s\n", b_name->name);
    } else {
        printf("failed to get name for entity b!");
    }

    entity_free_all_components(&a);
    entity_free_all_components(&b);

    return 0;
}

#include "types.h"
extern "C" {
void *get_equip_field_d04__10TObjPlayerFPv(void *p, s32 slot);
void *TObjPlayer__sub_8011C0B8(void *item, void *equip);
void *find_unique_combination_target(void *player, void *item);
}

extern "C" {

void *find_unique_combination_target(void *player, void *item) {
    s32 count = 0;
    void *found;
    s32 i;
    void *e;
    for (i = 0; i != 13; i++) {
        e = get_equip_field_d04__10TObjPlayerFPv(player, i);
        if (TObjPlayer__sub_8011C0B8(item, e) != NULL) {
            found = e;
            count++;
        }
    }
    if (count != 1) {
        found = NULL;
    }
    return found;
}

}

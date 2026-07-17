#include "types.h"

extern "C" {

int TObjPlayer__sub_80154E3C(void*);
void* initialize_linked_object_reference(void* p, void* a1);
int TObjPlayer__sub_801564A0(void*);
int check_object_collisions__10TObjPlayerFPv(void*);
void clear_obj_links(void* p);

void update_collisions__10TObjPlayerFPv(void* p) { check_object_collisions__10TObjPlayerFPv(p); TObjPlayer__sub_801564A0(p); }

}

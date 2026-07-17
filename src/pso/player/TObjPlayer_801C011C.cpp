#include "types.h"

extern "C" {

int TObjPlayer__sub_801C00FC(void);
int TObjPlayer__sub_801C0104(void);
void set_technique_id__10TObjPlayerFPvs(void* p, s16 v);
int get_item_count_max__10TObjPlayerFv(void);

void set_technique_id__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }

}

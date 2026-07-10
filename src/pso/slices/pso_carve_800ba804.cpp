#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_alive__9TObjEneDDFPv(void *arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
int TObjEneDD__sub_800BA754(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void TObjEneDD__sub_800BA728(void* p, void* a1);
int TObjEneDD__sub_800BA6B8(void* p);
int TObjEneDD__sub_800BA6C4(void* p);

int TObjEneDD__sub_800BA804(void) { return 0; }
int TObjEneDD__sub_800BA828(void) { return 0; }
int TObjEneDD__sub_800BA838(void) { return 0; }
int TObjEneDD__sub_800BA870(void) { return 0; }
int TObjEneDD__sub_800BA88C(void) { return 0; }
int TObjEneDD__vt87(void) { return 0; }

}

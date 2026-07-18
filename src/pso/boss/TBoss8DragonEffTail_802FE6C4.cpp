#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void enable__19TBoss8DragonEffTailFPv(void* p);
void disable__19TBoss8DragonEffTailFPv(void* p);
int get_state__19TBoss8DragonEffTailFPv(void* p);
void *__dt__19TBoss8DragonEffTailFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
int fn_8002B094(void*);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void TBoss8Dragon__sub_800BC5A0(void *, int);

void enable__19TBoss8DragonEffTailFPv(void* p) { *(int*)((char*)p + 0xbc) = 1; get_state__19TBoss8DragonEffTailFPv(p); }
void disable__19TBoss8DragonEffTailFPv(void* p) { *(int*)((char*)p + 0xbc) = 0; get_state__19TBoss8DragonEffTailFPv(p); }
int get_state__19TBoss8DragonEffTailFPv(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

extern M2C_UNK __vt__19TBoss8DragonEffTail[];

void *__dt__19TBoss8DragonEffTailFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TBoss8DragonEffTail;
        TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0xB8), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0xB8) = 0;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

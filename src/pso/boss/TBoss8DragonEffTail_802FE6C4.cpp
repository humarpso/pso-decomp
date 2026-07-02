#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss8DragonEffTail__sub_802FE6C4(void* p);
void TBoss8DragonEffTail__sub_802FE6EC(void* p);
int TBoss8DragonEffTail__sub_802FE714(void* p);
void *__dt__19TBoss8DragonEffTailFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
int fn_8002B094(void*);
void fn_800BC40C(void *, int);
void fn_800BC5A0(void *, int);

void TBoss8DragonEffTail__sub_802FE6C4(void* p) { *(int*)((char*)p + 0xbc) = 1; TBoss8DragonEffTail__sub_802FE714(p); }
void TBoss8DragonEffTail__sub_802FE6EC(void* p) { *(int*)((char*)p + 0xbc) = 0; TBoss8DragonEffTail__sub_802FE714(p); }
int TBoss8DragonEffTail__sub_802FE714(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

extern M2C_UNK __vt__19TBoss8DragonEffTail[];

void *__dt__19TBoss8DragonEffTailFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TBoss8DragonEffTail;
        fn_800BC5A0(M2C_FIELD(arg0, void **, 0xB8), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0xB8) = 0;
        fn_800BC40C(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

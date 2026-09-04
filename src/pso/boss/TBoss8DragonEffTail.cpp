#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8DragonEffTail__vt18(s32 arg0, s32 arg1);
void *__dt__19TBoss8DragonEffTailFv(void *arg0, s16 arg1);
void disable__19TBoss8DragonEffTailFPv(void* p);
void enable__19TBoss8DragonEffTailFPv(void* p);
void fn_802FE48C(void);
void free_statics__19TBoss8DragonEffTailFv(void);
int get_state__19TBoss8DragonEffTailFPv(void* p);
void render__19TBoss8DragonEffTailFv(void);
M2C_UNK TBoss4Zako__sub_803D8910(s32, s32, s32);
void TBoss8Dragon__sub_800BC5A0(void *, int);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
int fn_8002B094(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void fn_802FE48C(void) {  }
void render__19TBoss8DragonEffTailFv(void) {  }

void TBoss8DragonEffTail__vt18(s32 arg0, s32 arg1) {
    TBoss4Zako__sub_803D8910(arg1 + 0x308, arg0 + 0xC0, arg0);
}

void enable__19TBoss8DragonEffTailFPv(void* p) { *(int*)((char*)p + 0xbc) = 1; get_state__19TBoss8DragonEffTailFPv((void*)(p)); }
void disable__19TBoss8DragonEffTailFPv(void* p) { *(int*)((char*)p + 0xbc) = 0; get_state__19TBoss8DragonEffTailFPv((void*)(p)); }
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

extern s32 lbl_805D69C8;
extern u32 lbl_805D69CC;

void free_statics__19TBoss8DragonEffTailFv(void) {
    if ((u32) lbl_805D69CC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D69CC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D69CC);
        lbl_805D69CC = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D69C8, 1);
    lbl_805D69C8 = 0;
}

}

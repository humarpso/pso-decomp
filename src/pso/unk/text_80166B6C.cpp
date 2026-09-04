#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOFenceAncient02__vt12(void* p);
void TOFenceAncient02__vt13(void* p);
void TOFenceAncient02__vt14(void);
void *__dt__16TOFenceAncient01Fv(void *arg0, s16 arg1);
void *create__16TOFenceAncient01FPv(void *arg0);
int fn_80166E64(void);
int fn_80166EA8(void);
void *TOFenceAncient01__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);
int set_indexed_flags(void*, void*, void*);

extern void *tl_05;

void *create__16TOFenceAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TOFenceAncient01[];

void *__dt__16TOFenceAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int fn_80166E64(void) { return 0; }
int fn_80166EA8(void) { return 0; }

void TOFenceAncient02__vt14(void) {  }
void TOFenceAncient02__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)0, (void*)8); }
void TOFenceAncient02__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; set_indexed_flags(p, (void*)0, (void*)8); }

}

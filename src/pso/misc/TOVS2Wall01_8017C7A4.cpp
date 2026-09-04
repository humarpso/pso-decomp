#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TOVS2Wall01__vt24(void);
int TOVS2Wall01__vt25(void);
int TOVS2Wall01__vt18(void);
int TOVS2Wall01__vt19(void);
int TOVS2Wall01__vt20(void* p);
int take_hit__11TOVS2Wall01FPvUi(void*);
int TOVS2Wall01__vt21(void* p);
int take_hit__11TOVS2Wall01FPvUi(void*);
int TOVS2Wall01__vt22(void* p);
int take_hit__11TOVS2Wall01FPvUi(void*);
}

extern "C" {

void TOVS2Wall01__sub_8017CA48(void* p, s32 v);
s32 TOVS2Wall01__sub_8017CA50(void* p);
void TOVS2Wall01__vt23(void);
void *TObjGoalWarpAncient__create(void *arg0);
void byteswap_hit_packet__11TOVS2Wall01FPv(void* p);
void *destroy__11TOVS2Wall01FPvs(void *arg0, s16 arg1);
void* init__11TOVS2Wall01FPv(void* p);
void release_model__11TOVS2Wall01Fv(void);
void update_and_send__11TOVS2Wall01FPv(void* p);
int TLobby__send_and_handle_60(void*);
void TLobby__sub_8001FE7C(void*, int);
void TObjEneGibbles__sub_80156720(void *);
void *TObjGoalWarpAncient__ct(void *, void *, void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);
void destroy_key_base__5TOKeyFPvs(void *, int);
int init__17TOBarrierEnergy01FPv(void*);
void queue_destruction__7TObjectFv(void *);

extern u32 TOVS2Wall01__data_805D5AE8;

void release_model__11TOVS2Wall01Fv(void) {
    if ((u32) TOVS2Wall01__data_805D5AE8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOVS2Wall01__data_805D5AE8, 1);
        TOVS2Wall01__data_805D5AE8 = 0U;
    }
}

extern M2C_UNK lbl_804B528C[];

void *destroy__11TOVS2Wall01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B528C;
        if (M2C_FIELD(arg0, void **, 0xC8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xC8)); M2C_FIELD(arg0, M2C_UNK *, 0xC8) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TOVS2Wall01__vt24(void) { return 1; }

int TOVS2Wall01__vt25(void) { return 1; }

int TOVS2Wall01__vt18(void) { return 1; }

int TOVS2Wall01__vt19(void) { return 1; }

int TOVS2Wall01__vt20(void* p) { return take_hit__11TOVS2Wall01FPvUi(p); }

int TOVS2Wall01__vt21(void* p) { return take_hit__11TOVS2Wall01FPvUi(p); }

int TOVS2Wall01__vt22(void* p) { return take_hit__11TOVS2Wall01FPvUi(p); }

void TOVS2Wall01__vt23(void) {  }

void TOVS2Wall01__sub_8017CA48(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 TOVS2Wall01__sub_8017CA50(void* p) { return *(s32*)((char*)p + 0x33c); }
void byteswap_hit_packet__11TOVS2Wall01FPv(void* p) { bswap_header__6TLobbyFi(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); }
void update_and_send__11TOVS2Wall01FPv(void* p) { byteswap_hit_packet__11TOVS2Wall01FPv((void*)(p)); TLobby__send_and_handle_60(p); }
void* init__11TOVS2Wall01FPv(void* p) { init__17TOBarrierEnergy01FPv(p); *(short*)((char*)p + 0xc) = 0; *(short*)((char*)p + 0xe) = 0; *(unsigned char*)(p) = 134; *(unsigned char*)((char*)p + 0x1) = 4; return p; }

extern void *tl_05;

void *TObjGoalWarpAncient__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TObjGoalWarpAncient__ct(o, tl_05, arg0);
    }
    return o;
}

}

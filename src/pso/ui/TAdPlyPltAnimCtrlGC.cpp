#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdPlyPltAnimCtrlGC__sub_80355148(void);
int TAdPlyPltAnimCtrlGC__sub_80355168(void*);
void *__dt__19TAdPlyPltAnimCtrlGCFv(void *arg0, s16 arg1);
int fn_8035510C(void*, void*);
u32 get_instance__19TAdPlyPltAnimCtrlGCFi(s32 arg0);
int get_table_value__19TAdPlyPltAnimCtrlGCFi(int a0);
void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1);
int render__19TAdPlyPltAnimCtrlGCFv(void);
u32 TAdPlyPltAnimCtrlGC__ct(u32, s32);
int TObjPlayer__sub_8001BEF8(void*, int);
void TObjPlayer__sub_80354F8C(void* p);
int TObjPlayer__sub_80354FB0(void* p);
int TObjPlayer__sub_8035501C(void* p);
s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
int __dl__FPv();
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int clear_id__10TObjPlayerFPv(void*);
int clear_lock_flag__10TObjPlayerFPv(void* p);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*, void*);
s32 get_quest_thread_id__10TObjPlayerFPv(void* p);
void* init_and_reset_forward__10TObjPlayerFPv(void* p);
int init_forward__10TObjPlayerFPv(void*);
void reset_field4__10TObjPlayerFPv(void* p);
int set_flag0_bits01__10TObjPlayerFPv(void* p);
int set_flag1__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
void set_player_index__10TObjPlayerFPvi(void* p, s32 v);

int fn_8035510C(void*, void*) { return 0; }
int render__19TAdPlyPltAnimCtrlGCFv(void) { return 0; }
int TAdPlyPltAnimCtrlGC__sub_80355148(void) { return 0; }
int TAdPlyPltAnimCtrlGC__sub_80355168(void*) { return 0; }

void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1) { TAdPlyPltAnimCtrlGC__sub_80355168((void*)(p)); copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((char*)p + 0x24, a1); *(int*)((char*)p + 0x1c) = 1; }

extern M2C_UNK __vt__19TAdPlyPltAnimCtrlGC[];
extern u32 lbl_805D6F08;

void *__dt__19TAdPlyPltAnimCtrlGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TAdPlyPltAnimCtrlGC;
        if ((u32) lbl_805D6F08 != 0U) {
            lbl_805D6F08 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D6F08;

u32 get_instance__19TAdPlyPltAnimCtrlGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) lbl_805D6F08 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x2C);
        if (var_r0 != 0U) {
            var_r0 = TAdPlyPltAnimCtrlGC__ct(var_r0, arg0);
        }
        lbl_805D6F08 = var_r0;
    }
    return lbl_805D6F08;
}

    extern int lbl_804F142C[];
int get_table_value__19TAdPlyPltAnimCtrlGCFi(int a0) {  return lbl_804F142C[a0]; }

}

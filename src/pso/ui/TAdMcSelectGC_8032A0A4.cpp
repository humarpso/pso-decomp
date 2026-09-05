#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TAdMcSelectGC__sub_8032A180(void* p, s32 v);
void TAdMcSelectGC__sub_8032A188(u8 *arg0, s32 arg1);
}

extern "C" {

void TAdMcSelectGC__sub_8032A140(void* p);
void TAdMcSelectGC__sub_8032A15C(void* p);
void close__13TAdMcSelectGCFv(void);
void * create__13TAdMcSelectGCFPv(void *arg0);
int get_mc_count__13TAdMcSelectGCFv(void);
s32 get_slot_index__13TAdMcSelectGCFPv(void* p);
void open__13TAdMcSelectGCFv(void);
void set_field20__13TAdMcSelectGCFPvf(void* p, f32 v);
void set_field_0x1c__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field_13c__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field_20__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field_24__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_float_1c__13TAdMcSelectGCFPvf(void* p, f32 v);
void set_select_index__13TAdMcSelectGCFPvi(void* p, s32 v);
int TAdMcSelectCursorGC__sub_8032A668(void);
void *TAdMcSelectGC__ct(void *, void *);
int TAdMcSelectMcGC__sub_8032AA54(void);
int TLobby__sub_802C78EC(void);
int TLobby__sub_802C7920(void);
void *__nw__7TObjectFUl(int);
int init_memorycard__15TAdMcSelectMcGCFv(void);
int init_resource__19TAdMcSelectCursorGCFv(void);

extern void *lbl_805D6C88;

void * create__13TAdMcSelectGCFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TAdMcSelectGC__ct(o, arg0);
    }
    lbl_805D6C88 = o;
    return o;
}

void open__13TAdMcSelectGCFv(void) { TLobby__sub_802C78EC(); TAdMcSelectMcGC__sub_8032AA54(); TAdMcSelectCursorGC__sub_8032A668(); }
void close__13TAdMcSelectGCFv(void) { init_resource__19TAdMcSelectCursorGCFv(); init_memorycard__15TAdMcSelectMcGCFv(); TLobby__sub_802C7920(); }
void TAdMcSelectGC__sub_8032A140(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

    extern int lbl_805D6C94;
int get_mc_count__13TAdMcSelectGCFv(void) {  return lbl_805D6C94; }

s32 get_slot_index__13TAdMcSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x20); }
void TAdMcSelectGC__sub_8032A15C(void* p) { *(s32*)((char*)p + 0x1c) = 1; }
void set_field_13c__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x13c) = v; }
void set_field_0x1c__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
void set_select_index__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x124) = v; }
void TAdMcSelectGC__sub_8032A180(void* p, s32 v) { *(s32*)((char*)p + 0x28) = v; }

void TAdMcSelectGC__sub_8032A188(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x134) = arg1;
    TAdMcSelectGC__sub_8032A180((void*)((int) (M2C_FIELD(arg0, s32 *, 0x130))), (s32)(arg1));
}

void set_field_24__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void set_field20__13TAdMcSelectGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x20) = v; }
void set_field_20__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void set_float_1c__13TAdMcSelectGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }

}

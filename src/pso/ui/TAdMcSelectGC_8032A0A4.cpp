#include "types.h"

extern "C" {
void TAdMcSelectGC__sub_8032A180(void* p, s32 v);
void set_field_134__13TAdMcSelectGCFPvi(u8 *arg0, s32 arg1);
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
int release_cursor_entry__19TAdMcSelectCursorGCFv(void);
void *TAdMcSelectGC__ct(void *, void *);
int release_selected_entry__15TAdMcSelectMcGCFv(void);
int TLobby__sub_802C78EC(void);
int TLobby__sub_802C7920(void);
void *__nw__7TObjectFUl(int);
int init_memorycard__15TAdMcSelectMcGCFv(void);
int init_resource__19TAdMcSelectCursorGCFv(void);

extern void *TAdMcSelectGC__instance;

void * create__13TAdMcSelectGCFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TAdMcSelectGC__ct(o, arg0);
    }
    TAdMcSelectGC__instance = o;
    return o;
}

void open__13TAdMcSelectGCFv(void) { TLobby__sub_802C78EC(); release_selected_entry__15TAdMcSelectMcGCFv(); release_cursor_entry__19TAdMcSelectCursorGCFv(); }
void close__13TAdMcSelectGCFv(void) { init_resource__19TAdMcSelectCursorGCFv(); init_memorycard__15TAdMcSelectMcGCFv(); TLobby__sub_802C7920(); }
void TAdMcSelectGC__sub_8032A140(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

    extern int TAdMcSelectCursorGC__instance;
int get_mc_count__13TAdMcSelectGCFv(void) {  return TAdMcSelectCursorGC__instance; }

s32 get_slot_index__13TAdMcSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x20); }
void TAdMcSelectGC__sub_8032A15C(void* p) { *(s32*)((char*)p + 0x1c) = 1; }
void set_field_13c__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x13c) = v; }
void set_field_0x1c__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
void set_select_index__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x124) = v; }
void TAdMcSelectGC__sub_8032A180(void* p, s32 v) { *(s32*)((char*)p + 0x28) = v; }

void set_field_134__13TAdMcSelectGCFPvi(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0x134) = arg1;
    TAdMcSelectGC__sub_8032A180((void*)((int) (*(s32 *)((s8 *)arg0 + 0x130))), (s32)(arg1));
}

void set_field_24__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void set_field20__13TAdMcSelectGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x20) = v; }
void set_field_20__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void set_float_1c__13TAdMcSelectGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }

}

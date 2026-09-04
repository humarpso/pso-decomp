#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__14TAdPlyStatusGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);

void render__14TAdPlyStatusGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x802E1128
#include "types.h"

extern "C" {

s32 get_field_498__14TAdPlyStatusGCFPv(void* p);
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p);
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p);
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p);
void* get_status_data__14TAdPlyStatusGCFPv(void* p);
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p);
void* get_status_sub__14TAdPlyStatusGCFPv(void* p);

s32 get_field_498__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x498); }
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x1b8; }
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x49c); }
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a0); }
void* get_status_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x324; }
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a4); }
void* get_status_sub__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x490; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E1160
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_status_param__14TAdPlyStatusGCFii(int a0, int a1);
int get_index__14TAdPlyStatusGCFv(void);
void set_status_index__14TAdPlyStatusGCFii(int a0, int a1);
void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1);
M2C_UNK TWindow__close(void *);

    extern int lbl_805D6DAC;
void set_status_param__14TAdPlyStatusGCFii(int a0, int a1) { lbl_805D6DAC = a1; }

    extern int lbl_805D6DA8;
int get_index__14TAdPlyStatusGCFv(void) {  return lbl_805D6DA8; }

    extern int lbl_805D6DB4;
void set_status_index__14TAdPlyStatusGCFii(int a0, int a1) { lbl_805D6DB4 = a1; }

extern s32 TAdPlyStatusGC__data_805D6DB0;

void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1) {
    TAdPlyStatusGC__data_805D6DB0 = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E11BC
#include "types.h"

extern "C" {

void TAdPlyStatusGC__sub_802E11BC(void* p);
void TAdPlyStatusGC__sub_802E11C8(void* p);

void TAdPlyStatusGC__sub_802E11BC(void* p) { *(s32*)((char*)p + 0x1c) = 0; }
void TAdPlyStatusGC__sub_802E11C8(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033FA88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_window__14TAdPlyStatusGCFPv(void *arg0);
M2C_UNK TWindow__close(void *);
M2C_UNK disallow_rendering__7TObjectFv();
u32 get_player_index__14TAdPlyStatusGCFv();

void close_window__14TAdPlyStatusGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if ((u32) temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if (get_player_index__14TAdPlyStatusGCFv() != 0U) {
        disallow_rendering__7TObjectFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033FD48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_instance__14TAdPlyStatusGCFii(s32 arg0, s32 arg1);
u32 TAdPlyStatusGC__ct(u32, s32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D6DA8;

u32 get_instance__14TAdPlyStatusGCFii(s32 arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) lbl_805D6DA8 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x70);
        if (var_r0 != 0U) {
            var_r0 = TAdPlyStatusGC__ct(var_r0, arg0, arg1);
        }
        lbl_805D6DA8 = var_r0;
    }
    return lbl_805D6DA8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033FDA8
#include "types.h"

extern "C" {

int get_player_index__14TAdPlyStatusGCFv(void);

    extern int lbl_805D6D04;
int get_player_index__14TAdPlyStatusGCFv(void) {  return lbl_805D6D04; }

}
#endif
#endif

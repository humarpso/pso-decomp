#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s16 TWindowDD__sub_8034214C(u8 *arg0);
s32 TWindowDD__sub_8034217C(u8 *arg0);
}

extern "C" {

int TWindowDD__sub_80342158(void);
void add_scroll_offset__9TWindowDDFPvi(void* a0, int a1);
void free_child__9TWindowDDFPv(void *arg0);
s32 get_cursor_index__9TWindowDDFPv(void* p);
s32 get_field_0x74__9TWindowDDFPv(void* p);
s32 get_field_68__9TWindowDDFPv(void* p);
void init_and_mark_field8C__9TWindowDDFPv(void* p);
void init_child__9TWindowDDFPvPv(void* p, void* a1);
void reset_cursor__9TWindowDDFPv(void* p);
void reset_fields__9TWindowDDFPv(void* a0);
void set_mode_2__9TWindowDDFPv(void* p);
void set_pos_and_data__9TWindowDDFPvf(u8 *arg0, f32 farg0);
s32 update_if_field28_set__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80341AC0(void);
int TWindowDD__sub_80341F9C(void*);
int TWindowDD__sub_80341FFC(void*);
void TWindowSubStatusDisp__sub_80257CB8(void *);
void free__11TOBoss4RockFUi(void *);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);
s32 get_field_20__17TWindowSubComCardFPv(void);
int spawn_window__9TWindowDDFv(void);

void set_mode_2__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x64) = 2; }
void reset_cursor__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x64) = 0; }

void init_and_mark_field8C__9TWindowDDFPv(void* p) { TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); *(int*)((char*)p + 0x8c) = 1; }

void free_child__9TWindowDDFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0;
    }
    TWindowSubStatusDisp__sub_80257CB8((void *)((char *)arg0 + 36));
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    M2C_FIELD(arg0, u32 *, 0x7C) = 0;
}

void init_child__9TWindowDDFPvPv(void* p, void* a1) { free_child__9TWindowDDFPv((void *)(p)); *(void**)((char*)p + 0x70) = a1; TWindowDD__sub_80341F9C(p); TWindowDD__sub_80341FFC(p); reset_fields__9TWindowDDFPv((void*)(p)); *(int*)((char*)p + 0x8c) = 1; }

    extern const float TWindowDD__data_805DFCA8;
void reset_fields__9TWindowDDFPv(void* a0) { *(float*)((char*)a0 + 0x88) = TWindowDD__data_805DFCA8; *(float*)((char*)a0 + 0x84) = TWindowDD__data_805DFCA8; *(int*)((char*)a0 + 0x68) = 0; *(int*)((char*)a0 + 0x6c) = 0; *(int*)((char*)a0 + 0x8c) = 1; }

extern s32 TWindowDD__data_805DFB50;

void set_pos_and_data__9TWindowDDFPvf(u8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) TWindowDD__data_805DFB50;
}

s32 get_field_0x74__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x74); }

s16 TWindowDD__sub_8034214C(u8 *arg0) {
    return (s16) M2C_FIELD(arg0, s32 *, 0x70);
}

int TWindowDD__sub_80342158(void) { return 0; }

s32 TWindowDD__sub_8034217C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68) - M2C_FIELD(arg0, s32 *, 0x6C);
}

s32 get_cursor_index__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x6c); }
s32 update_if_field28_set__9TWindowDDFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x6C));
        return get_field_20__17TWindowSubComCardFPv();
    }
    return 0;
}

s32 get_field_68__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x68); }
void add_scroll_offset__9TWindowDDFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x68) = (*(int*)((char*)a0 + 0x68) + a1); *(int*)((char*)a0 + 0x8c) = 1; spawn_window__9TWindowDDFv(); }

}

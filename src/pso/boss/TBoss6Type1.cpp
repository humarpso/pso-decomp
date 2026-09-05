#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
u8 * TBoss6Type1__sub_802B96C0(s32 arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_800F5E08();
extern const f32 lbl_805DE3D0;
void render_shadows__11TBoss6Type1Fv(u8 *arg0);
}

extern "C" {

int TBoss6Type1__sub_802B8624(void);
void TBoss6Type1__vt42(void);
void TBoss6Type1__vt43(void);
void TBoss6Type1__vt44(void);
void TBoss6Type1__vt45(void);
void TBoss6Type1__vt46(void);
void TBoss6Type1__vt47(void);
void TBoss6Type1__vt48(void);
void TBoss6Type1__vt60(u8 *arg0);
void TBoss6Type1__vt61(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
void copy_transform__11TBoss6Type1FPvPv(void* p, void* q);
s32 create__11TBoss6Type1Fi(s32 arg0);
void do_attack__11TBoss6Type1FPv(void *arg0);
void enable_parts__11TBoss6Type1FPv(void *arg0);
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p);
int is_idle__11TBoss6Type1FPv(void* p);
void latch_phase_counter__11TBoss6Type1FPv(void *arg0);
void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1);
int read_be16_field2__11TBoss6Type1FPv(void* p);
void reset_param__11TBoss6Type1FPv(void *arg0);
void set_child_flags__11TBoss6Type1FPv(void *arg0);
void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
void step_and_send_60__11TBoss6Type1FPv(void* p);
void update_parts_flags__11TBoss6Type1FPv(void *arg0);
void update_position__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);
s32 TBoss6Type1__ct(s32, s32, s32);
M2C_UNK TBoss6Type1__sub_802B7944();
int TBoss6Type1__sub_802B865C(void*, void*);
M2C_UNK TBoss6Type1__sub_802B8EE0(void *, M2C_UNK *);
M2C_UNK TBoss6Type1__sub_802B909C(void *, M2C_UNK *);
M2C_UNK TBoss6Type1__sub_802B9178(void *, M2C_UNK, M2C_UNK *);
int TLobby__send_and_handle_60(void*);
s32 TObjControl__ct(s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 rand__11TOBoss4RockFv();
int read_be16_field2__10TObjPlayerFPv(void*);

extern f32 TBoss6Type1__data_805DE2D0;

void reset_param__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2D0;
}

void enable_parts__11TBoss6Type1FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x70) | 1);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x9C) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x9C) | 1);
        temp_r4_3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_3, s32 *, 0xC8) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 0xC8) | 1);
        temp_r4_4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_4, s32 *, 0xF4) = (s32) (M2C_FIELD(temp_r4_4, s32 *, 0xF4) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x120) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x120) | 1);
    }
}

void set_child_flags__11TBoss6Type1FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x44) | 1);
    }
}

void update_parts_flags__11TBoss6Type1FPv(void *arg0) {
    TBoss6Type1__sub_802B7944();
    if (M2C_FIELD(arg0, s32 *, 0x418) & 1) {
        set_child_flags__11TBoss6Type1FPv((void *)(arg0));
    }
    if (M2C_FIELD(arg0, s32 *, 0x418) & 2) {
        enable_parts__11TBoss6Type1FPv((void *)(arg0));
    }
}

extern const f32 lbl_805DE3A0;
extern const f32 lbl_805DE3A4;

void update_position__11TBoss6Type1FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x438) != 0) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A0);
}

s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4B0) - M2C_FIELD(arg0, s16 *, 0x32C);
}

void latch_phase_counter__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4B0) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}

void copy_transform__11TBoss6Type1FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

int TBoss6Type1__sub_802B8624(void) { return 0; }

void render_shadows__11TBoss6Type1Fv(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DE3D0) {
        TObjPlayer__sub_800F5E08();
    }
}

void TBoss6Type1__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 40) { TBoss6Type1__sub_802B865C(p, (void*)40); } }

extern const f32 TBoss6Type1__data_805DE2E4;

void TBoss6Type1__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) TBoss6Type1__data_805DE2E4;
    TBoss3Volopt__sub_8022675C(0x39E01, arg0 + 0x584, 0, 1, arg0);
}

void do_attack__11TBoss6Type1FPv(void *arg0) {
    M2C_UNK sp8;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        TBoss6Type1__sub_802B909C(arg0, &sp8);
    } else {
        TBoss6Type1__sub_802B8EE0(arg0, &sp8);
    }
    M2C_FIELD(arg0, s32 *, 0x438) = 1;
    TBoss6Type1__sub_802B9178(arg0, 2, &sp8);
}

void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) (s8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x414) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0x41C) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
}

extern M2C_UNK TBoss6Type1__data_80471040;
extern f32 TBoss6Type1__data_805DE304;
extern f32 lbl_805DE3EC;

void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg1, s8 *, 8) = (s8) M2C_FIELD(arg0, s32 *, 0x438);
    M2C_FIELD(arg1, s8 *, 9) = (s8) M2C_FIELD(arg0, s32 *, 0x414);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) (lbl_805DE3EC * (TBoss6Type1__data_805DE304 * (f32) rand__11TOBoss4RockFv()));
}

extern s32 tl_04;

u8 * TBoss6Type1__sub_802B96C0(s32 arg0, s32 arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    return (u8 *)arg0;
}

s32 create__11TBoss6Type1Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x684);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type1__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss6Type1__vt42(void) {  }
void TBoss6Type1__vt43(void) {  }
void TBoss6Type1__vt44(void) {  }
void TBoss6Type1__vt45(void) {  }
void TBoss6Type1__vt46(void) {  }
void TBoss6Type1__vt47(void) {  }
void TBoss6Type1__vt48(void) {  }
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p) { return (char*)p + 0x388; }
int is_idle__11TBoss6Type1FPv(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int read_be16_field2__11TBoss6Type1FPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void step_and_send_60__11TBoss6Type1FPv(void* p) { read_be16_field2__11TBoss6Type1FPv((void*)(p)); TLobby__send_and_handle_60(p); }
void build_6xA4_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 164; *(u8*)((char*)p + 0x1) = 5; }

}

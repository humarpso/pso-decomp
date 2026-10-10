#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_8006C668 { s32 a; void *p; };

struct G_8006C668 { E_8006C668 e[8]; };

struct Entry_8006C6CC {
    s32 id;
    s32 f4;
};

struct Bank_8006C6CC {
    Entry_8006C6CC *entries;
    u32 count;
};

extern "C" {
extern G_8006C668 TCameraCtrl__camera_banks;
void xfree__FPv(void *);
void free_entries__11TCameraCtrlFv(void);
s32 load_relocatable_file(s32, void *);
s32 update_lobby_scene__6TSceneFPv(s32);
s32 get_global_state__14TOKeyMachine01Fv();
void *xmalloc__FUl(s32);
extern Bank_8006C6CC camera_path_bank_table[];
extern G_8006C668 TCameraCtrl__camera_banks;
void load_camera_banks__11TCameraCtrlFv(void);
}

extern "C" {

void *TCameraCtrl__vt10(void);
void *__dt_deleting_5__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void* reset__11TCameraCtrlFPv(void* a0);
void update__11TCameraCtrlFPv(void *arg0);
void TCameraCtrl__sub_800686BC(void *, int);
int TCameraCtrl__sub_80068714(void);
void *get_player_by_client_id(M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void *get_params__11TCameraCtrlFPv(u32);
void *init_subobject__11TCameraCtrlFPv(void *);

    extern unsigned char lbl_80488B68[];
    extern int TCameraCtrl__saved_projection_angle;
    extern int scripted_camera_projection_angle;
    extern const float lbl_805D9028;
void* reset__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B68; *(int*)((char*)a0 + 0x38) = 0; scripted_camera_projection_angle = 0; TCameraCtrl__saved_projection_angle = 0; *(unsigned char*)((char*)a0 + 0x99) = 0; *(unsigned char*)((char*)a0 + 0x98) = 0; *(short*)((char*)a0 + 0x9a) = 0; *(float*)((char*)a0 + 0x9c) = lbl_805D9028; *(float*)((char*)a0 + 0xa0) = lbl_805D9028; *(float*)((char*)a0 + 0x6c) = lbl_805D9028; *(float*)((char*)a0 + 0x70) = lbl_805D9028; *(float*)((char*)a0 + 0x74) = lbl_805D9028; *(float*)((char*)a0 + 0x78) = lbl_805D9028; *(float*)((char*)a0 + 0x7c) = lbl_805D9028; *(float*)((char*)a0 + 0x80) = lbl_805D9028; *(int*)((char*)a0 + 0x84) = 0; *(int*)((char*)a0 + 0x88) = 0; *(int*)((char*)a0 + 0x8c) = 0; *(int*)((char*)a0 + 0x90) = 0; *(int*)((char*)a0 + 0x94) = 0; return a0; }

void free_entries__11TCameraCtrlFv(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (TCameraCtrl__camera_banks.e[i].p != 0) {
            xfree__FPv(TCameraCtrl__camera_banks.e[i].p);
            TCameraCtrl__camera_banks.e[i].p = 0;
        }
    }
}

void load_camera_banks__11TCameraCtrlFv(void) {
    u32 j;
    Bank_8006C6CC *b;
    u32 n;
    u32 k;
    s32 i;
    s32 sz;
    for (i = 0; i < 8; i++) {
        TCameraCtrl__camera_banks.e[i].p = 0;
    }
    b = &camera_path_bank_table[get_global_state__14TOKeyMachine01Fv()];
    if (b->entries == 0) {
        return;
    }
    n = b->count;
    if (n >= 8) {
        return;
    }
    for (j = 0; j < n; j++) {
        sz = update_lobby_scene__6TSceneFPv(b->entries[j].id);
        if (sz <= -1) {
            return;
        }
        TCameraCtrl__camera_banks.e[j].p = xmalloc__FUl(sz);
    }
    for (k = 0; k < n; k++) {
        TCameraCtrl__camera_banks.e[k].a = load_relocatable_file(b->entries[k].id, TCameraCtrl__camera_banks.e[k].p);
    }
}

void *TCameraCtrl__vt10(void) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = init_subobject__11TCameraCtrlFPv(o);
    }
    return o;
}

extern u32 camera_ctrl_instance;
extern const f32 lbl_805D9038;

void update__11TCameraCtrlFPv(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    if ((u32) camera_ctrl_instance != 0U) {
        temp_r31 = get_params__11TCameraCtrlFPv(camera_ctrl_instance);
        temp_r3 = get_player_by_client_id(0);
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (lbl_805D9038 + M2C_FIELD(temp_r3, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x40);
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r31, f32 *, 0x1C);
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r31, f32 *, 0x20);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r31, f32 *, 0x24);
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(temp_r31, f32 *, 0x10);
        }
    }
}

extern M2C_UNK lbl_80488D70[];

void *__dt_deleting_5__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488D70;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

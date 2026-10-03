#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8019D4E4 { char pad[0x18]; };
struct VObj_8019D4E4 : Base_8019D4E4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s32 m31();
};
struct Base_8019D880_8019D4E4 { char pad[0x18]; };
struct VObj_8019D880_8019D4E4 : Base_8019D880_8019D4E4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s32 m31();
};

struct RecoveredGlobal_8019D850_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8019D818_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

#include "pso/object/TObjMapWarp.h"
typedef s32 M2C_UNK;
struct V3_8019D764 { f32 x, y, z; };

struct W_8019D764 {
    s32 type;
    u8 pad04[0x14];
    M2C_UNK *vt;
    u8 pad1c[0x60 - 0x1C];
    s32 sourceYaw;
    u8 pad64[4];
    f32 destination[3];
    u8 pad74[0xBC - 0x74];
    V3_8019D764 destinations[4];
    void *playerPopups[4];
};

extern "C" {
u8 TWindowShortListCtrl__check_controller_button(void *, int);
extern RecoveredGlobal_8019D850_lbl_8050E208 lbl_8050E208;
void TObjWarpBase__vt14(void);
u8 TWindowShortListCtrl__check_controller_button(void *, int);
extern RecoveredGlobal_8019D850_lbl_8050E208 lbl_8050E208;
void TObjWarpBase__vt15(M2C_UNK arg0, s32 arg1);
s32 fn_8019DD24(void *, int);
void *get_player_by_client_id(u32);
s32 TWindow__close(int);
void TObjMapWarp__sub_8019D644(s32 arg0, u16 arg1);
s32 get_localized_text_entry(s32, s32);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s32, s32);
s32 create_window_menu(s32, s32, s32);
s32 get_window_layout_position(s32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK TWindowSubComCard__sub_80265F60(int);
void open_player_warp_window__11TObjMapWarpFii(s32 arg0, s32 arg1);
void *TObjWarpBase__ct(void *, void *, void *);
int push_matrix_from(void *);
void post_translate_matrix(void *);
void rotate_matrix_y(void *, s32);
void matrix_mult_vec(void *, void *, void *);
void pop_matrix();
extern M2C_UNK __vt__11TObjMapWarp[];
extern u8 lbl_8058D490[];
extern V3_8019D764 lbl_804B910C[];
extern s32 lbl_805D3460;
void *TObjMapWarp__ct(W_8019D764 *self, void *parent, void *set);
}

extern "C" {

struct Base_8019D6F8_8019D4E4 { char pad[0x18]; };
struct VObj_8019D6F8_8019D4E4 : Base_8019D6F8_8019D4E4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

u8 TObjWarpBase__vt13(void *arg0);
void *__dt__11TObjMapWarpFv(void *arg0, s16 arg1);
u8 can_warp__11TObjMapWarpFiUs(s32 arg0, u16 arg1);
M2C_UNK TObjWarpBase__vt0(void *, M2C_UNK);
void *get_player_by_client_id(u32);
M2C_UNK __dl__7TObjectFPv(void *);
s32 check_flag_100__10TObjPlayerFPv();
s32 is_flag_400_set__10TObjPlayerFPv(void *);
s32 test_flag_2000000__10TObjPlayerFPv(void *);

extern s32 lbl_805D3458;
extern s32 lbl_805D55C0;

u8 can_warp__11TObjMapWarpFiUs(s32 arg0, u16 arg1) {
    void *var_r31;
    u32 id;

    id = arg1;
    var_r31 = NULL;
    if ((id != 0xFFFF) &&((var_r31 = get_player_by_client_id(id), ((var_r31 == NULL) != 0)) || (check_flag_100__10TObjPlayerFPv() != 0))) {
        return 0U;
    }
    if ((s32) lbl_805D3458 == 0) {
        return 0U;
    }
    if ((s32) lbl_805D55C0 != 0) {
        return 0U;
    }
    if ((var_r31 != NULL) && (((VObj_8019D4E4 *)var_r31)->m31() != 0)) {
        return 0U;
    }
    if (var_r31 != NULL) {
        return (u8) (is_flag_400_set__10TObjPlayerFPv(var_r31) == 0);
    }
    return 1U;
}

extern M2C_UNK __vt__11TObjMapWarp[];

#pragma push
#pragma opt_common_subs off
void open_player_warp_window__11TObjMapWarpFii(s32 arg0, s32 arg1) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    if ((u32) M2C_FIELD(temp_r31, u32 *, 0xEC) == 0U) {
        M2C_FIELD(temp_r31, u32 *, 0xEC) = create_window_menu(get_window_layout_position(0x33), 1, arg1);
        TWindowSubTradeMain__sub_80266200(M2C_FIELD(temp_r31, u32 *, 0xEC), get_localized_text_entry(9, 0x25), 2, 0, -1);
        TWindowSubComCard__sub_80265F60((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        align_menu_entry_positions((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        set_flag70_bit10__16TObjCityMainWarpFPv((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        set_flag_40__16TAdChrSelASlotGCFPv((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
void TObjMapWarp__sub_8019D644(s32 arg0, u16 arg1) {
    u32 temp_r3;
    u32 temp_r3_2;
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + ((arg1 * 4) & 0x3FFFC));
    temp_r3 = M2C_FIELD(temp_r31, u32 *, 0xEC);
    if (temp_r3 != 0U) {
        TWindow__close((int) (temp_r3));
        M2C_FIELD(temp_r31, u32 *, 0xEC) = 0U;
        temp_r3_2 = ((u32)get_player_by_client_id((u32)((void *) ((s32) arg1))));
        if (temp_r3_2 != 0U) {
            fn_8019DD24((void *) (temp_r3_2 + 0x550), (int) (4));
        }
    }
}
#pragma pop

void TObjMapWarp::closeAllPlayerWindows() {
    for(s32 slot=0;slot<4;++slot)closePlayerWindow((u16)slot);
}

void *__dt__11TObjMapWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_8019D6F8_8019D4E4 *o = (struct VObj_8019D6F8_8019D4E4 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjMapWarp;
        o->m12();
        TObjWarpBase__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D3458;
extern s32 lbl_805D55C0;

typedef char RecoveredGlobal_8019D850_lbl_8050E208_size[sizeof(RecoveredGlobal_8019D850_lbl_8050E208) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_8019D818_lbl_8050E208_size[sizeof(RecoveredGlobal_8019D818_lbl_8050E208) == 0x1B0 ? 1 : -1];

void *TObjMapWarp__ct(W_8019D764 *self, void *parent, void *set) {
    s32 i;
    TObjWarpBase__ct(self, parent, set);
    self->vt = __vt__11TObjMapWarp;
    self->type = lbl_805D3460;
    for (i = 0; i < 4; i++) {
        push_matrix_from(lbl_8058D490);
        post_translate_matrix(self->destination);
        rotate_matrix_y(0, self->sourceYaw);
        matrix_mult_vec(0, &lbl_804B910C[i], &self->destinations[i]);
        pop_matrix();
        self->playerPopups[i] = 0;
    }
    return self;
}

void TObjWarpBase__vt15(M2C_UNK arg0, s32 arg1) {
    TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&(*(RecoveredGlobal_8019D818_lbl_8050E208 *)&lbl_8050E208).value + (arg1 * 0x50) + 0x20), (int) (4));
}

void TObjWarpBase__vt14(void) {
    TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + 0x20), (int) (4));
}

u8 TObjWarpBase__vt13(void *arg0) {
    void *var_r31;
    u32 id = M2C_FIELD(arg0, u16 *, 0xB8);

    var_r31 = NULL;
    if ((id != 0xFFFF) && ((var_r31 = get_player_by_client_id(id), ((var_r31 == NULL) != 0)) || (check_flag_100__10TObjPlayerFPv() != 0))) {
        return 0U;
    }
    if ((s32) lbl_805D3458 == 0) {
        return 0U;
    }
    if ((s32) lbl_805D55C0 != 0) {
        return 0U;
    }
    if ((var_r31 != NULL) && (((VObj_8019D880_8019D4E4 *)var_r31)->m31() != 0)) {
        return 0U;
    }
    if (var_r31 != NULL) {
        return (u8) (is_flag_400_set__10TObjPlayerFPv(var_r31) == 0);
    }
    if ((var_r31 != NULL) && (test_flag_2000000__10TObjPlayerFPv(var_r31) != 0)) {
        return 0U;
    }
    return 1U;
}

}

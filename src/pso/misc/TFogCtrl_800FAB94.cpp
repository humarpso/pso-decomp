#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800FAD08_TFogCtrl__data_80501188 {
    M2C_UNK value;
    u8 remaining[0xC];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

struct M2CCopy_20 { u8 bytes[0x20]; };

typedef s32 M2C_UNK;
struct Row_800FAFE0 { u8 pad[0x40]; s32 identity; };

struct Ctrl_800FAFE0 {
    u8 pad[0x174];
    struct Row_800FAFE0 *slots[4];
    s32 selected;
};

struct GXFogAdjTable_800FAE1C {
    u16 r[10];
};

struct TFogCtrl_800FAE1C {
    u8 pad[0x188];
    u32 color;
    f32 end;
    f32 start;
    f32 width;
};

extern "C" {
void request_transition__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 get_param__8TFogCtrlFPv(void* p);
s32 restore_fog__8TFogCtrlFPvi(u8 *arg0, s32 arg1);
s32 is_split_screen();
extern M2C_UNK TFogCtrl__data_80501188[];
s32 TFogCtrl__sub_800FAB94(s32 arg0, s32 arg1, s32 arg2);
s32 is_split_screen();
s32 restore_fog__8TFogCtrlFPvi(u8 *arg0, s32 arg1);
extern M2C_UNK TFogCtrl__data_80501188[];
s32 TFogCtrl__sub_800FAC10(s32 arg1, s32 arg0);
s32 get_param__8TFogCtrlFPv(void* p);
void request_transition__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK load_entry_into_slot__8TFogCtrlFPvii(int, int, int);
s32 TFogCtrl__sub_800FB06C(u8 *arg0, s32 arg1, s32 arg2);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 TCameraCtrl__sub_80068958(int);
void clear_active_flag__8TFogCtrlFPv(void *arg0);
extern M2C_UNK TFogCtrl__data_80501188[];
void TFogCtrl__sub_800FAD08(void);
void copy_fog_entry(u8 *arg0, u8 *arg1);
void request_transition__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 get_param__8TFogCtrlFPv(void* p);
M2C_UNK load_entry_into_slot__8TFogCtrlFPvii(int, int, int);
s32 select_fog__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 is_split_screen();
void end_effect_render__13TParticleCtrlFv(void);
void GXInitFogAdjTable(GXFogAdjTable_800FAE1C *, s32, void *);
void GXSetFogRangeAdj(s32, s32, GXFogAdjTable_800FAE1C *);
void fn_803E1FC8(u32);
void fn_803E1FFC(f32, f32);
void TParticleCtrl__sub_803E2008(s32);
extern u8 lbl_8058CA60[];
extern const f32 TFogCtrl__data_805DA948;
extern const f32 TFogCtrl__data_805DA94C;
extern const f32 lbl_805DA950;
s32 apply_fog_entry(void *arg0);
}

extern "C" {

s32 TFogCtrl__sub_800FAC84(void* p);
void clear_active_flag__8TFogCtrlFPv(void *arg0);
void* get_entry__8TFogCtrlFi(int a0);
void update_all__8TFogCtrlFv(void);
s32 get_param__8TFogCtrlFPv(void* p);
s32 is_split_screen();

s32 TFogCtrl__sub_800FAB94(s32 arg0, s32 arg1, s32 arg2) {
    if (is_split_screen() == 0) {
        arg0 = 0;
    }
    if ((arg0 >= 0) && (arg0 < 4) && ((u32) TFogCtrl__data_80501188[arg0] != 0U)) {
        return ((s32)select_fog__8TFogCtrlFPvii((u8 *)((s32)(TFogCtrl__data_80501188[arg0])), (s32)((s32)(arg1)), (s32)((s32)(arg2))));
    }
    return 0;
}

s32 TFogCtrl__sub_800FAC10(s32 arg1, s32 arg0) {
    if (is_split_screen() == 0) {
        arg1 = 0;
    }
    if ((arg1 >= 0) && (arg1 < 4)) {
        s32 elem = *(s32 *)(((s8 *)&TFogCtrl__data_80501188) + arg1 * 4);
        if ((u32) elem != 0U) {
            return restore_fog__8TFogCtrlFPvi((u8 *)(elem), (s32)(arg0));
        }
    }
    return 0;
}

s32 TFogCtrl__sub_800FAC84(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x174) + 0x40); }

    extern int lbl_805D5388;

void copy_fog_entry(u8 *arg0, u8 *arg1) {
    s32 var_r5;
    s32 var_r7;
    u8 *var_r6;
    var_r5 = M2C_FIELD(arg1, s32 *, 0);
    var_r6 = (u8 *)(arg1) + 0x14;
    var_r7 = (long) ((u8 *)(arg0) + 0x14);
    M2C_FIELD(arg0, s32 *, 0) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = var_r5;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    var_r5 = M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x14) = var_r5;
    *(M2CCopy_20 *)(var_r7 + 4) = *(const M2CCopy_20 *)((s32) var_r6 + 4);
    var_r7 += 0x20;
    var_r6 += 0x20;
    *(M2CCopy_8 *)((s32) arg0 + 0x38) = *(const M2CCopy_8 *)((s32) arg1 + 0x38);
}

void* get_entry__8TFogCtrlFi(int a0) {  return (char*)(lbl_805D5388) + a0 * 64; }

extern M2C_UNK TFogCtrl__data_80501188[];

typedef char RecoveredGlobal_800FAD08_TFogCtrl__data_80501188_size[sizeof(RecoveredGlobal_800FAD08_TFogCtrl__data_80501188) == 0x10 ? 1 : -1];
void TFogCtrl__sub_800FAD08(void) {
    u32 temp_r3;
    if (is_split_screen() == 1) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_800FAD08_TFogCtrl__data_80501188 *)&TFogCtrl__data_80501188).value, M2C_UNK *, ((TCameraCtrl__sub_80068958((int) (get_camera_mode__11TCameraCtrlFv())) * 4) & 0x3FFFC));
        if (temp_r3 != 0U) {
            clear_active_flag__8TFogCtrlFPv((void *)((int) (temp_r3)));
        }
    }
}

void update_all__8TFogCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    s32 temp_r3;

    if (is_split_screen() == 0) {
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r3 = *(TFogCtrl__data_80501188 + var_r31);
            if ((u32)temp_r3 != 0U) {
                clear_active_flag__8TFogCtrlFPv((void *)(temp_r3));
            }
            var_r29 += 1;
            var_r31 += 1;
        } while (var_r29 != 4);
    }
}

void clear_active_flag__8TFogCtrlFPv(void *arg0) {
    s32 temp_r3;

    if (is_split_screen() == 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_r3 & 1) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r3 & 0xFFFFFFFE);
            apply_fog_entry((void *)(arg0));
        }
    } else {
        apply_fog_entry((void *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFFFE);
    }
}

s32 apply_fog_entry(void *arg0) {
    TFogCtrl_800FAE1C *self = (TFogCtrl_800FAE1C *)arg0;
    GXFogAdjTable_800FAE1C tbl;
    TParticleCtrl__sub_803E2008(2);
    fn_803E1FC8((self->color << 8) | (self->color >> 24));
    fn_803E1FFC(self->start, self->end);
    if (is_split_screen() == 0) {
        if (self->width >= TFogCtrl__data_805DA94C) {
            self->width = TFogCtrl__data_805DA94C;
        } else if (self->width <= TFogCtrl__data_805DA948) {
            self->width = TFogCtrl__data_805DA948;
        }
        GXInitFogAdjTable(&tbl, (s32)self->width, lbl_8058CA60);
        GXSetFogRangeAdj(1, 0x140, &tbl);
    } else {
        if (self->width >= lbl_805DA950) {
            self->width = lbl_805DA950;
        } else if (self->width <= TFogCtrl__data_805DA948) {
            self->width = TFogCtrl__data_805DA948;
        }
        GXInitFogAdjTable(&tbl, (s32)self->width, lbl_8058CA60);
        GXSetFogRangeAdj(1, 0xA0, &tbl);
    }
    end_effect_render__13TParticleCtrlFv();
}

s32 restore_fog__8TFogCtrlFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    if (get_param__8TFogCtrlFPv((void*)arg0) != 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x184);
    if (temp_r0 == 0) {
        return 1;
    }
    if ((temp_r0 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B4) == 0)) {
        return 1;
    }
    if (arg1 & 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(arg0, s32 *, 0x184);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    return 1;
}

s32 select_fog__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    struct Ctrl_800FAFE0 *self = (struct Ctrl_800FAFE0 *)arg0;
    if (get_param__8TFogCtrlFPv((void*)((void *)arg0)) != 0) {
        return 0;
    }
    if (self->slots[self->selected]->identity == arg1) {
        return 1;
    }
    load_entry_into_slot__8TFogCtrlFPvii((int)arg0, 2, arg1);
    request_transition__8TFogCtrlFPvii(arg0, 1, arg2);
    return 1;
}

s32 TFogCtrl__sub_800FB06C(u8 *arg0, s32 arg1, s32 arg2) {
  s32 var_r30;
  s32 var_r31;
  s32 var_r4;
  s32 var_r5;
  u8 *var_r29;
  u8 *var_r3;
  var_r29 = arg0;
  var_r30 = arg1;
  var_r31 = arg2;
  if (get_param__8TFogCtrlFPv((void*)(arg0)) != 0)
  {
    var_r3 = (u8 *) 0;
    return 0;
  }
  var_r3 = (u8 *) (var_r29 + ((*((s32 *) (((s8 *) var_r29) + 0x184))) * 4));
  var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r3) + 0x174)));
  if (((s32) (*((s32 *) (((s8 *) var_r3) + 0x40)))) == var_r30)
  {
    var_r3 = (u8 *) ((void *) 1);
    if (var_r3 && var_r3)
    {
    }
    return 1;
  }
  var_r3 = (u8 *) var_r29;
  var_r5 = var_r30;
  var_r4 = 2;
  load_entry_into_slot__8TFogCtrlFPvii((int) var_r3, (int) 2, (int) var_r5);
  var_r3 = (u8 *) var_r29;
  var_r5 = var_r31;
  var_r4 = 0;
  request_transition__8TFogCtrlFPvii((u8 *)((int) var_r3), (s32)((int) 0), (s32)((int) var_r5));
  var_r3 = (u8 *) ((void *) 1);
  return 1;
}

void request_transition__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg2 & 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(arg0, s32 *, 0x184);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 2;
    M2C_FIELD(arg0, s32 *, 0x1A4) = arg1;
}

}

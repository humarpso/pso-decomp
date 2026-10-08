#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct RecoveredGlobal_800F81A8_lbl_80499970 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef char RecoveredGlobal_800F81A8_lbl_80499970_size[sizeof(RecoveredGlobal_800F81A8_lbl_80499970) == 0x18 ? 1 : -1];

struct RecoveredGlobal_800F8428_lbl_80499988 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef char RecoveredGlobal_800F8428_lbl_80499988_size[sizeof(RecoveredGlobal_800F8428_lbl_80499988) == 0x18 ? 1 : -1];

struct Quad_800F7E28 {
    f32 *pos;
    u32 *col;
    s32 start;
    s32 count;
};

struct Fade_800F7E28 {
    u8 pad[0x1C];
    f32 level;
    union {
        u32 color;
        u8 c[4];
    } u;
};

struct Quad_800F88D8 {
    f32 *pos;
    u32 *col;
    s32 start;
    s32 count;
};

struct Fade_800F88D8 {
    u8 pad[0x1C];
    f32 level;
    union {
        u32 color;
        u8 c[4];
    } u;
};

void queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
void destroy_task_object__12TBoss3VoloptFPvs(void *, int);
void init_object__12TBoss3VoloptFPvPv(void *, void *);
void TCameraCtrl__sub_80068EF0(void);
void restore_full_screen_view__11TCameraCtrlFv(void);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
u32 prs_decompress_buffer(s32 arg0, s32 arg1);
void dispatch_state__6TLobbyFPv(void *arg0);
void TLobby__sub_800F7FB8(u8 *arg0);
void step_fade_opacity_increase(u8 *arg0);
void init_fadeout_state__6TLobbyFi(s32 arg0);
void step_fade_opacity_decrease(u8 *arg0);
void set_fade_params__6TLobbyFi(s32 arg0);
s32 get_quest_thread_state__6TLobbyFv(void);
u8 * TLobby__sub_800F81A8(u8 *arg0, s16 arg1);
void * ct_register__6TLobbyFPv(void *arg0);
s32 TLobby__sub_800F8250(void *arg0, f32 farg0);
void TLobby__sub_800F838C(u8 *arg0);
u8 * TLobby__sub_800F8428(u8 *arg0, s16 arg1);
void * TLobby__sub_800F8498(void *arg0, void *arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7);
void TLobby__sub_800F8530(void);
void TLobby__sub_800F8534(u8 *arg0);
void * TLobby__sub_800F85C0(void *arg0, s16 arg1);
void* init_entry_fields__6TLobbyFPviii(void* a0, int a1, int a2, int a3);
void TLobby__sub_800F8690(u8 *arg0);
void * TLobby__sub_800F86FC(void *arg0, s16 arg1);
void * init_fade__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2);
void TLobby__sub_800F87B4(u8 *arg0);
void * THunterGuildSeqOffline__sub_800F8820(void *arg0, s16 arg1);
void * init__22THunterGuildSeqOfflineFPvPvPv(void *arg0, void *arg1, void *arg2);
void draw_tri_fan_2d__14TObjCMHairMenuFPviif(Quad_800F7E28 *, s32, s32, f32);
void __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, int);
void __ct__7TObjectFP7TObject(void *);
u32 TWindowCtrlMain__sub_8024CD5C(s32);
void set_value__15TWindowCtrlMainFii(s32, s32);
u32 prs_decompress(int, int, int, int);
M2C_UNK destroy_ep3_exist__6TLobbyFis(int, int);
u32 reset_counters__6TLobbyFPv();
void abs__4cXyzCFv(s32, s32);

extern RecoveredGlobal_800F81A8_lbl_80499970 lbl_80499970;
extern RecoveredGlobal_800F8428_lbl_80499988 lbl_80499988;
extern M2C_UNK lbl_804999A0[];
extern M2C_UNK lbl_804999B8[];
extern M2C_UNK lbl_804999D0[];
extern void *lbl_805D5330;
extern s32 lbl_805D53A0;
extern void *tl_fade;

#pragma push
#pragma scheduling off
u32 prs_decompress_buffer(s32 arg0, s32 arg1) {
  s32 var_r28;
  s32 var_r29;
  s32 var_r4;
  s32 var_r5;
  s32 var_r6;
  u32 var_r30;
  u32 var_r30_2;
  u32 var_r31;
  u32 var_r3;
  u32 phi_r30;
  M2C_UNK saved_reg_r30;
  var_r30 = saved_reg_r30;
  var_r28 = arg0;
  var_r29 = arg1;
  var_r3 = 0x30U;
  var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv((int) 0x30);
  phi_r30 = saved_reg_r30;
  if (var_r31 != 0U)
  {
    var_r31 = reset_counters__6TLobbyFPv();
  }
  if (var_r31 != 0U)
  {
    var_r3 = var_r31;
    var_r4 = var_r29;
    var_r5 = var_r28;
    var_r6 = 0;
    var_r30_2 = prs_decompress((int) var_r3, (int) var_r4, (int) var_r5, (int) 0);
    phi_r30 = var_r30_2;
  }
  if (var_r31 != 0U)
  {
    var_r3 = var_r31;
    var_r4 = 1;
    destroy_ep3_exist__6TLobbyFis((int) var_r3, (int) 1);
  }
  var_r3 = phi_r30;
  return var_r3;
}
extern int fold_flush_0;
#pragma pop

void render_screen_fade(Fade_800F7E28 *self) {
    Quad_800F7E28 q;
    u32 col[4];
    f32 pos[8];

    restore_full_screen_view__11TCameraCtrlFv();
    abs__4cXyzCFv(0, 8);
    abs__4cXyzCFv(1, 6);
    q.pos = pos;
    q.col = col;
    q.start = 0;
    q.count = 4;
    self->u.c[3] = (s32)self->level;
    q.pos[0] = (0.0f);
    q.pos[1] = (0.0f);
    q.col[0] = self->u.color;
    q.pos[2] = (6.4e+02f);
    q.pos[3] = (0.0f);
    q.col[1] = self->u.color;
    q.pos[4] = (6.4e+02f);
    q.pos[5] = (4.8e+02f);
    q.col[2] = self->u.color;
    q.pos[6] = (0.0f);
    q.pos[7] = (4.8e+02f);
    q.col[3] = self->u.color;
    if ((0.0f) != (f32)self->u.c[3]) {
        draw_tri_fan_2d__14TObjCMHairMenuFPviif(&q, 4, 0x16, (-1e+01f));
    }
    TCameraCtrl__sub_80068EF0();
}

void dispatch_state__6TLobbyFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 1:
        step_fade_opacity_decrease((u8 *)(arg0));
        return;
    case 2:
        step_fade_opacity_increase((u8 *)(arg0));
        return;
    case 3:
        TLobby__sub_800F7FB8((u8 *)(arg0));
    case 0:
        return;
    }
}

#pragma push
#pragma opt_common_subs off
void TLobby__sub_800F7FB8(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) += 1.0f;
    if (M2C_FIELD(arg0, f32 *, 0x1C) >= (128.0f)) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (128.0f);
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x28);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma opt_common_subs off
void step_fade_opacity_increase(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) += 8.0f;
    if (M2C_FIELD(arg0, f32 *, 0x1C) >= (255.0f)) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (255.0f);
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x28);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
}
extern int fold_flush_2;
#pragma pop

void init_fadeout_state__6TLobbyFi(s32 arg0) {
    if ((void *) lbl_805D5330 != NULL) {
        M2C_FIELD(lbl_805D5330, s32 *, 0x28) = arg0;
        M2C_FIELD(lbl_805D5330, f32 *, 0x1C) = (f32) (0.0f);
        M2C_FIELD(lbl_805D5330, s8 *, 0x20) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x21) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x22) = 0;
        M2C_FIELD(lbl_805D5330, s32 *, 0x24) = 2;
    }
}

#pragma push
#pragma opt_common_subs off
void step_fade_opacity_decrease(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - (8.0f));
    if (M2C_FIELD(arg0, f32 *, 0x1C) <= (0.0f)) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (0.0f);
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x28);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
}
extern int fold_flush_3;
#pragma pop

void set_fade_params__6TLobbyFi(s32 arg0) {
    if ((void *) lbl_805D5330 != NULL) {
        M2C_FIELD(lbl_805D5330, s32 *, 0x28) = arg0;
        M2C_FIELD(lbl_805D5330, f32 *, 0x1C) = (f32) (255.0f);
        M2C_FIELD(lbl_805D5330, s8 *, 0x20) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x21) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x22) = 0;
        M2C_FIELD(lbl_805D5330, s32 *, 0x24) = 1;
    }
}

s32 get_quest_thread_state__6TLobbyFv(void) {
    if ((void *) lbl_805D5330 != NULL) {
        return M2C_FIELD(lbl_805D5330, s32 *, 0x24);
    }
    return 0;
}

u8 *TLobby__sub_800F81A8(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80499970.value;
        (*(s32 *)&lbl_805D5330) = 0;
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            ((s32 (*)(void *))__dl__7TObjectFPv)((void *) (arg0));
        }
    }
    return arg0;
}

void *ct_register__6TLobbyFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = ((M2C_UNK *)&lbl_80499970);
    lbl_805D5330 = arg0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

#pragma push
#pragma fp_contract on
s32 TLobby__sub_800F8250(void *arg0, f32 farg0) {
    u8 temp_r10;
    u8 temp_r11;
    u8 temp_r12;
    u8 temp_r31;

    temp_r10 = M2C_FIELD(arg0, u8 *, 0x29);
    temp_r12 = M2C_FIELD(arg0, u8 *, 0x2A);
    temp_r11 = M2C_FIELD(arg0, u8 *, 0x28);
    temp_r31 = M2C_FIELD(arg0, u8 *, 0x2B);
    return (((((((s32) ((farg0 * (f32) (M2C_FIELD(arg0, u8 *, 0x2C) - temp_r11)) + (f32) temp_r11) << 0x18)) | (((s32) ((farg0 * (f32) (M2C_FIELD(arg0, u8 *, 0x2D) - temp_r10)) + (f32) temp_r10) << 0x10) & 0xFF0000 & ~0xFF000000)) & ~0xFF00) | (((s32) ((farg0 * (f32) (M2C_FIELD(arg0, u8 *, 0x2E) - temp_r12)) + (f32) temp_r12) << 8) & 0xFF00)) & ~0xFF) | ((s32) ((farg0 * (f32) (M2C_FIELD(arg0, u8 *, 0x2F) - temp_r31)) + (f32) temp_r31) & 0xFF);
}
extern int fold_flush_4;
#pragma pop

void TLobby__sub_800F838C(u8 *arg0) {
    s32 temp_r3;
    set_value__15TWindowCtrlMainFii(lbl_805D53A0, TLobby__sub_800F8250(arg0, (f32) M2C_FIELD(arg0, s32 *, 0x20) / (f32) M2C_FIELD(arg0, s32 *, 0x24)));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x20) + 1;
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r3;
    if (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

u8 *TLobby__sub_800F8428(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80499988.value;
        set_value__15TWindowCtrlMainFii(lbl_805D53A0, TLobby__sub_800F8250(arg0, (1.0f)));
        ((u8 * (*)(void *, s16))__dt__7TObjectFv)(arg0, 0);
        if (arg1 > 0) {
            ((void (*)(s32))__dl__7TObjectFPv)((s32) arg0);
        }
    }
    return arg0;
}

void *TLobby__sub_800F8498(void *arg0, void *arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7) {
    u32 c;
    ((void (*)(void *, void *))__ct__7TObjectFP7TObject)(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80499988.value;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    c = TWindowCtrlMain__sub_8024CD5C(lbl_805D53A0);
    M2C_FIELD(arg0, u8 *, 0x2B) = c;
    M2C_FIELD(arg0, u8 *, 0x2A) = c >> 8;
    M2C_FIELD(arg0, u8 *, 0x29) = c >> 16;
    M2C_FIELD(arg0, u8 *, 0x28) = c >> 24;
    M2C_FIELD(arg0, u8 *, 0x2F) = arg4;
    M2C_FIELD(arg0, u8 *, 0x2C) = arg5;
    M2C_FIELD(arg0, u8 *, 0x2D) = arg6;
    M2C_FIELD(arg0, u8 *, 0x2E) = arg7;
    return arg0;
}

void TLobby__sub_800F8530(void) {  }

void TLobby__sub_800F8534(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) += 2.0f;
    if (M2C_FIELD(arg0, f32 *, 0x1C) >= 128.0f) {
        M2C_FIELD(arg0, f32 *, 0x1C) = 128.0f;
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x28);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        ((void (*)(void *))set_flag_4__9TObjLukerFPv)((void *) (arg0));
    }
    M2C_FIELD(arg0, s8 *, 0x23) = (s8) M2C_FIELD(arg0, f32 *, 0x1C);
    set_value__15TWindowCtrlMainFii(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x20));
}

void *TLobby__sub_800F85C0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999A0;
        ((void (*)(void *, int))set_value__15TWindowCtrlMainFii)(M2C_FIELD(arg0, void **, 0x24), 0);
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void* init_entry_fields__6TLobbyFPviii(void* a0, int a1, int a2, int a3) { ((int (*)(void))init_object__12TBoss3VoloptFPvPv)(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_804999A0); *(int*)((char*)a0 + 0x28) = a2; *(float*)((char*)a0 + 0x1c) = (0.0f); *(unsigned char*)((char*)a0 + 0x21) = 0; *(unsigned char*)((char*)a0 + 0x22) = 0; *(unsigned char*)((char*)a0 + 0x20) = 255; *(int*)((char*)a0 + 0x24) = a3; return a0; }

#pragma push
#pragma opt_common_subs off
void TLobby__sub_800F8690(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - (8.0f));
    if (M2C_FIELD(arg0, f32 *, 0x1C) <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) 0.0f;
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x24);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        set_flag_4__9TObjLukerFPv((void *) (arg0));
    }
}
extern int fold_flush_5;
#pragma pop

void *TLobby__sub_800F86FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999B8;
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *init_fade__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999B8;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = (255.0f);
    M2C_FIELD(arg0, u8 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 0x21) = 0;
    M2C_FIELD(arg0, u8 *, 0x22) = 0;
    return arg0;
}

#pragma push
#pragma opt_common_subs off
void TLobby__sub_800F87B4(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) += 8.0f;
    if (M2C_FIELD(arg0, f32 *, 0x1C) >= (255.0f)) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (255.0f);
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x24);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        set_flag_4__9TObjLukerFPv((void *) (arg0));
    }
}
extern int fold_flush_6;
#pragma pop

void *THunterGuildSeqOffline__sub_800F8820(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999D0;
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *init__22THunterGuildSeqOfflineFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999D0;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = (0.0f);
    M2C_FIELD(arg0, u8 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 0x21) = 0;
    M2C_FIELD(arg0, u8 *, 0x22) = 0;
    return arg0;
}

void draw_screen_fade__12TBoss3VoloptFPv(Fade_800F88D8 *self) {
    Quad_800F88D8 q;
    u32 col[4];
    f32 pos[8];

    restore_full_screen_view__11TCameraCtrlFv();
    abs__4cXyzCFv(0, 8);
    abs__4cXyzCFv(1, 6);
    q.pos = pos;
    q.col = col;
    q.start = 0;
    q.count = 4;
    self->u.c[3] = (s32)self->level;
    q.pos[0] = (0.0f);
    q.pos[1] = (0.0f);
    q.col[0] = self->u.color;
    q.pos[2] = (6.4e+02f);
    q.pos[3] = (0.0f);
    q.col[1] = self->u.color;
    q.pos[4] = (6.4e+02f);
    q.pos[5] = (4.8e+02f);
    q.col[2] = self->u.color;
    q.pos[6] = (0.0f);
    q.pos[7] = (4.8e+02f);
    q.col[3] = self->u.color;
    if ((0.0f) != (f32)self->u.c[3]) {
        ((void (*)(Quad_800F88D8 *, s32, s32, f32))draw_tri_fan_2d__14TObjCMHairMenuFPviif)(&q, 4, 0x16, (-1e+01f));
    }
    TCameraCtrl__sub_80068EF0();
}

}

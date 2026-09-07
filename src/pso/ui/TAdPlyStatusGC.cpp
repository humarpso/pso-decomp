#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033F93C_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8033FB8C___vt__14TAdPlyStatusGC { M2C_UNK value; u8 remaining[0x14]; };

struct RecoveredFields_8033F9DC_arg0 {
    u8 unknown_0[0x1C];
    s32 field_1C;
    u8 unknown_20[0x4C];
    u32 field_6C;
};

struct RecoveredGlobal_8033F9DC_lbl_804783E0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8033F9DC_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
M2C_UNK allow_rendering__7TObjectFv();
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
M2C_UNK TWindow__close(void *);
s32 get_status__22TAdMultiPlyChrSelectGCFv();
M2C_UNK TAdGuideButtonGC__sub_8032D600(int, void *);
u32 get_player_index__14TAdPlyStatusGCFv();
extern RecoveredGlobal_8033F93C_lbl_8050E3B8 lbl_8050E3B8;
extern s32 TAdPlyStatusGC__data_805D6DB0;
extern s32 TAdPlyStatusGC__data_805D6DB8;
void TAdPlyStatusGC__sub_8033F93C(u8 *arg0);
u8 * __dt__7TObjectFv(void *, s16);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8033FB8C___vt__14TAdPlyStatusGC __vt__14TAdPlyStatusGC;
extern u32 lbl_805D6DA8;
u8 *__dt__14TAdPlyStatusGCFv(u8 *arg0, s16 arg1);
M2C_UNK allow_rendering__7TObjectFv();
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
s32 get_status__22TAdMultiPlyChrSelectGCFv();
M2C_UNK TAdGuideButtonGC__sub_8032D600(int, void *);
u32 TAdPlyStatusGC__sub_8033F8B0(void *, int);
u32 get_player_index__14TAdPlyStatusGCFv();
extern RecoveredGlobal_8033F9DC_lbl_804783E0 lbl_804783E0;
extern RecoveredGlobal_8033F93C_lbl_8050E3B8 lbl_8050E3B8;
extern s32 TAdPlyStatusGC__data_805D6DB0;
extern s32 TAdPlyStatusGC__data_805D6DB8;
void TAdPlyStatusGC__sub_8033F9DC(struct RecoveredFields_8033F9DC_arg0 *arg0);
extern s32 TAdPlyStatusGC__data_805D6DB8;
void TAdPlyStatusGC__sub_8033F900(u8 *arg0, s32 arg1);
}

extern "C" {

void close_window__14TAdPlyStatusGCFPv(void *arg0);
void render__14TAdPlyStatusGCFv(void* p);
M2C_UNK TWindow__close(void *);
int abs__4cXyzCFv(void*, void*);
M2C_UNK disallow_rendering__7TObjectFv();
u32 get_player_index__14TAdPlyStatusGCFv();
int get_state_flag__9TMainTaskFv(void*);

void render__14TAdPlyStatusGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

typedef char RecoveredGlobal_8033F93C_lbl_8050E3B8_size[sizeof(RecoveredGlobal_8033F93C_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

void TAdPlyStatusGC__sub_8033F900(u8 *arg0, s32 arg1) {
    s32 var_r4;
    if (arg1 > 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            var_r4 = 2;
            if ((s32) TAdPlyStatusGC__data_805D6DB8 != 0) {
                var_r4 = 1;
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
        }
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void TAdPlyStatusGC__sub_8033F93C(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    TAdPlyStatusGC__data_805D6DB8 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((s32) TAdPlyStatusGC__data_805D6DB0 < 3) {
        temp_r3 = ((s32)get_player_index__14TAdPlyStatusGCFv());
        if (temp_r3 != 0) {
            allow_rendering__7TObjectFv();
            TAdGuideButtonGC__sub_8032D600((int) (temp_r3), (void *) (arg0 + 0x48));
        }
        temp_r5 = get_status__22TAdMultiPlyChrSelectGCFv() * 0x50;
        if (TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E3B8.value + temp_r5 + 0x20), (int) (0x400), (int) (temp_r5)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
    }
}

typedef char RecoveredGlobal_8033F9DC_lbl_804783E0_size[sizeof(RecoveredGlobal_8033F9DC_lbl_804783E0) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8033F9DC_lbl_8050E3B8_size[sizeof(RecoveredGlobal_8033F9DC_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
void TAdPlyStatusGC__sub_8033F9DC(struct RecoveredFields_8033F9DC_arg0 *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    TAdPlyStatusGC__data_805D6DB8 = 1;
    if ((s32) TAdPlyStatusGC__data_805D6DB0 < 3) {
        if ((u32) arg0->field_6C == 0) {
            arg0->field_6C = TAdPlyStatusGC__sub_8033F8B0(arg0, (s32) ((u8 *)(&lbl_804783E0.value) + (TAdPlyStatusGC__data_805D6DB0 * 8)));
        }
        temp_r3 = ((s32)get_player_index__14TAdPlyStatusGCFv());
        if (temp_r3 != 0) {
            allow_rendering__7TObjectFv();
            TAdGuideButtonGC__sub_8032D600(temp_r3, &arg0->unknown_20[4]);
        }
        temp_r5 = get_status__22TAdMultiPlyChrSelectGCFv() * 0x50;
        if (TWindowShortListCtrl__check_controller_button((u8 *)(((u8 *)(&(*(RecoveredGlobal_8033F9DC_lbl_8050E3B8 *)&lbl_8050E3B8).value) + temp_r5)) + 0x20, 0x400, temp_r5) != 0) {
            arg0->field_1C = 2;
        }
    }
}

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
u8 *__dt__14TAdPlyStatusGCFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TAdPlyStatusGC.value;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x6C));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u8 **, 0x6C) = NULL;
        }
        if ((u32) lbl_805D6DA8 != 0U) {
            lbl_805D6DA8 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}

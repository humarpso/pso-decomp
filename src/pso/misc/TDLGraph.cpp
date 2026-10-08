#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8007F77C___vt__8TDLGraph {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct TDLGraph_8007F66C { u8 pad[0x24]; s32 frame; };

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8007F77C___vt__8TDLGraph __vt__8TDLGraph;
extern s32 TDLGraph__data_805D4EB0;
u8 *__dt__8TDLGraphFv(u8 *arg0, s16 arg1);
void reset_transform_state__10TObjPlayerFv(void);
void restore_full_screen_view__11TCameraCtrlFv(void);
void TCameraCtrl__sub_80068EF0(void);
void fn_8007F27C(TDLGraph_8007F66C *self, void *a, void *b);
void fn_8007F0E4(TDLGraph_8007F66C *self, f32 x, f32 y);
void draw_percent_text(void *arg0, f32 farg0, f32 farg1);
M2C_UNK fn_8007F5A4(TDLGraph_8007F66C *self);
extern u8 lbl_80438AA4[];
extern u8 lbl_80438AAC[];
extern const f32 lbl_805D92CC;
extern const f32 lbl_805D92D0;
extern const f32 lbl_805D92D4;
void render__8TDLGraphFv(TDLGraph_8007F66C *self);
void queue_destruction__7TObjectFv(s32);
void fn_8007ECF0(s32, s32, s32);
void create__8TDLGraphFv(void);
extern s32 TDLGraph__data_805D4EB0;
void update_graph__8TDLGraphFii(s32 arg0, s32 arg1);
}

extern "C" {

void reset__8TDLGraphFPv(void *arg0);
void run_task__8TDLGraphFv(void);
void set_graph_param__8TDLGraphFPvi(void* p, s32 v);

void reset__8TDLGraphFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    fn_8007F5A4((TDLGraph_8007F66C *)(arg0));
}

void render__8TDLGraphFv(TDLGraph_8007F66C *self) {
    reset_transform_state__10TObjPlayerFv();
    restore_full_screen_view__11TCameraCtrlFv();
    fn_8007F27C(self, lbl_80438AA4, lbl_80438AAC);
    fn_8007F0E4(self, lbl_805D92CC, lbl_805D92D0);
    draw_percent_text(self, lbl_805D92D4, lbl_805D92D0);
    TCameraCtrl__sub_80068EF0();
    fn_8007F5A4((TDLGraph_8007F66C *)(self));
    self->frame++;
}

void run_task__8TDLGraphFv(void) {  }
void set_graph_param__8TDLGraphFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
typedef char RecoveredGlobal_8007F77C___vt__8TDLGraph_size[sizeof(RecoveredGlobal_8007F77C___vt__8TDLGraph) == 0x18 ? 1 : -1];

#define G ((u32) TDLGraph__data_805D4EB0)
void update_graph__8TDLGraphFii(s32 arg0, s32 arg1) {
    if (arg0 < 0 || arg1 <= 0) {
        return;
    }
    if (arg0 == 0) {
        if (G != 0) {
            queue_destruction__7TObjectFv(TDLGraph__data_805D4EB0);
            return;
        }
        create__8TDLGraphFv();
    } else if (G == 0) {
        return;
    }
    if (G != 0) {
        fn_8007ECF0(TDLGraph__data_805D4EB0, arg0, arg1);
    }
}
#undef G

u8 *__dt__8TDLGraphFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TDLGraph.value;
        TDLGraph__data_805D4EB0 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}

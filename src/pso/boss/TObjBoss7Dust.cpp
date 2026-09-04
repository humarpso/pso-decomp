#include "pso/TObjBoss7Dust.h"

TObjBoss7Dust::~TObjBoss7Dust() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_802F105C(void);
void fn_802F1084(void);
void init_scene_boss2_tunnel(void);
void render__13TObjBoss7DustFv(void* p);
void run_task__13TObjBoss7DustFv(void *arg0);
int TObjBoss2Tunnel__sub_802F2C4C(void);
int TObjBoss2Tunnel__sub_802F2C50(void);
int TObjBoss2Tunnel__sub_802F2C84(void);
int TObjBoss7DustCtrl__sub_802F1450(void);
int create__17TObjBoss7DustCtrlFv(void);
int fn_802F0E24(void);
int fn_802F0E94(void);
int fn_802F1200(void*, void*);
int fn_802F1454(void);
int fn_802F19C0(void);
M2C_UNK queue_destruction__7TObjectFv();

void fn_802F105C(void) { TObjBoss7DustCtrl__sub_802F1450(); TObjBoss2Tunnel__sub_802F2C4C(); fn_802F0E24(); }
void fn_802F1084(void) { TObjBoss2Tunnel__sub_802F2C50(); fn_802F19C0(); create__17TObjBoss7DustCtrlFv(); }
void init_scene_boss2_tunnel(void) { fn_802F0E94(); TObjBoss2Tunnel__sub_802F2C84(); fn_802F1454(); }
void render__13TObjBoss7DustFv(void* p) { fn_802F1200((char*)p + 0x24, *(void**)((char*)p + 0x20)); }

extern const f32 lbl_805DEC68;

void run_task__13TObjBoss7DustFv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - lbl_805DEC68);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) >= 0x5A) {
        queue_destruction__7TObjectFv();
    }
}

}

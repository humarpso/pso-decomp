#include "pso/TBoss5GryphonDemo.h"

TBoss5GryphonDemo::~TBoss5GryphonDemo() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_80066304 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_80066304 { u8 pad[0xa4]; E_80066304 *entries; s32 count; };

struct E_8006633C { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_8006633C { u8 pad[0xa4]; E_8006633C *entries; s32 count; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_active_player__10TObjPlayerFi(int);
M2C_UNK TCameraCtrl__sub_80069DA8();
u8 *get_scripted_camera_playback();
void run_task__17TBoss5GryphonDemoFv(u8 *arg0);
void TBoss5GryphonDemo__sub_80066304(O_80066304 *self);
void TBoss5GryphonDemo__sub_8006633C(O_8006633C *self);
}

extern "C" {

void TBoss5GryphonDemo__sub_80066268(void);
void TBoss5GryphonDemo__sub_8006626C(void* p);
void *destroy__17TBoss5GryphonDemoFPvs(void *arg0, s16 arg1);
void draw_model__17TBoss5GryphonDemoFPvPvPv(void* p, void* a1, void* a2);
void render__17TBoss5GryphonDemoFv(void);
int TCameraCtrl__sub_803D8934(void*, void*, void*);
int TOHangerMachine01__sub_803D9C00(void*);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
int TObjPlayer__sub_80154E3C(void*);
int TObjPlayer__sub_803D8CD4(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

void TBoss5GryphonDemo__sub_80066268(void) {  }
void TBoss5GryphonDemo__sub_8006626C(void* p) { TBoss5GryphonDemo__sub_80066304((O_80066304 *)((void*)(p))); }
void draw_model__17TBoss5GryphonDemoFPvPvPv(void* p, void* a1, void* a2) { TObjPlayer__sub_803D9B2C(p); TObjPlayer__sub_803D8CD4((void*)0); TOHangerMachine01__sub_803D9C00(a1); TObjPlayer__sub_803D9214((void*)0, a2); TCameraCtrl__sub_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); TObjPlayer__sub_803D9B78(); *(void**)((char*)p + 0x60) = a2; TObjPlayer__sub_80154E3C(p); TBoss5GryphonDemo__sub_8006633C((O_8006633C *)((void*)(p))); }

void TBoss5GryphonDemo__sub_80066304(O_80066304 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->entries[i].flags &= ~1;
    }
}

extern M2C_UNK lbl_804886AC[];

void TBoss5GryphonDemo__sub_8006633C(O_8006633C *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->entries[i].flags |= 1;
    }
}

void *destroy__17TBoss5GryphonDemoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804886AC;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__17TBoss5GryphonDemoFv(void) {  }

void run_task__17TBoss5GryphonDemoFv(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = get_scripted_camera_playback();
    set_active_player__10TObjPlayerFi((int) (0x8F));
    if ((M2C_FIELD(temp_r31, u16 *, 2) & 1) || ((s32) *M2C_FIELD(arg0, s32 **, 0x24) == 0)) {
        TCameraCtrl__sub_80069DA8();
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_80190BA0 { u32 header; s32 target; s32 event; };

struct Row_80190AA0 { u32 cue; s32 mode; };

struct VBase_80190AA0 { char pad[0x18]; };

struct VObj_80190AA0 : VBase_80190AA0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Obj_80190AA0 {
    s32 unk0;
    u8 pad4[0x18 - 0x4];
    void *vtbl;
    u8 pad1C[0x70 - 0x1C];
    f32 authoredRadius;
    u8 pad74[0x84 - 0x74];
    s32 index;
    s32 authoredAttenuation;
    s32 unk8C;
    f32 radius;
    s32 attenuation;
    Row_80190AA0 sound;
};

extern "C" {
s32 fn_80190884(void *, int);
s32 fn_801908F8(f32);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void run_task__12TObjEnvSoundFv(u8 *arg0);
void byteswap_event_packet__6TLobbyFi(Pkt_80190BA0 *pkt);
s32 TObjPlayer__sub_800196EC(void);
void TLobby__sub_80208B7C(s32, s32, s32);
void TLobby__sub_80208C78(s32, s32);
void handle_6x67_trigger_set_event(Pkt_80190BA0 *pkt);
void queue_destruction__7TObjectFv(void *);
void disallow_rendering__7TObjectFv(void *);
void copy_pair__18TObjEnvSoundGlobalFPvPv(Row_80190AA0 *, Row_80190AA0 *);
void TPhotonMagicSquare__sub_801A2640(void *, void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern Row_80190AA0 *lbl_804B7A70[];
extern M2C_UNK __vt__12TObjEnvSound[];
extern s32 lbl_805D3348;
extern const f32 lbl_805DBE18;
extern const f32 lbl_805DBE1C;
void *TObjEnvSound__ct(Obj_80190AA0 *self, void *parent, void *arg2);
}

extern "C" {

void *__dt__12TObjEnvSoundFv(void *arg0, s16 arg1);
void render__12TObjEnvSoundFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__12TObjEnvSoundFv(void) {  }

extern M2C_UNK __vt__12TObjEnvSound[];

void run_task__12TObjEnvSoundFv(u8 *arg0) {
    f32 temp_f0;
    s32 temp_r0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x90);
    if ((fn_801908F8((f32) (temp_f0 * temp_f0)) != 0) && (fn_80190884((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x98))) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x9C);
        switch (temp_r0) {
        case 0:
            break;
        case 1:
            TOTrapAncient01__sub_80226578((int) (M2C_FIELD(arg0, s32 *, 0x98)), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            return;
        case 2:
            TOTrapAncient01__sub_80226578((int) (M2C_FIELD(arg0, s32 *, 0x98)), (void *) (arg0), (void *) (arg0 + 0x38), (int) (M2C_FIELD(arg0, s32 *, 0x94)), (int) (2));
            break;
        }
    }
}

void *__dt__12TObjEnvSoundFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjEnvSound;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjEnvSound__ct(Obj_80190AA0 *self, void *parent, void *arg2) {
    Row_80190AA0 *table;
    TPhotonMagicSquare__sub_801A2640(self, parent);
    self->vtbl = __vt__12TObjEnvSound;
    self->unk0 = lbl_805D3348;
    ((VObj_80190AA0 *)self)->m5(arg2);
    table = lbl_804B7A70[get_global_state__14TOKeyMachine01Fv()];
    if (table != NULL) {
        copy_pair__18TObjEnvSoundGlobalFPvPv(&self->sound, &table[self->index]);
    } else {
        queue_destruction__7TObjectFv(self);
        return self;
    }
    self->radius = self->authoredRadius;
    if (self->radius <= lbl_805DBE18) {
        self->radius = lbl_805DBE1C;
    }
    self->attenuation = self->authoredAttenuation;
    if (self->attenuation < -127) {
        self->attenuation = -127;
    }
    if (self->attenuation > 127) {
        self->attenuation = 127;
    }
    disallow_rendering__7TObjectFv(self);
    return self;
}

void handle_6x67_trigger_set_event(Pkt_80190BA0 *pkt) {
    byteswap_event_packet__6TLobbyFi(pkt);
    if (pkt->target != TObjPlayer__sub_800196EC()) {
        TLobby__sub_80208B7C(pkt->target, pkt->event, 4);
    } else {
        TLobby__sub_80208C78(pkt->target, pkt->event);
    }
}

}

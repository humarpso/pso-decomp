#include "pso/effect/TDPBShower.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8035D7D0___vt__10TDPBShower {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 create_particle_emitter(s32, s32);
void set_flags__11TBoss4Type2FPvUi(void *, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8035D7D0___vt__10TDPBShower __vt__10TDPBShower;
extern s32 TDPBShower__class_name;
extern const f32 lbl_805E01C4;
u8 *TDPBShower__ct(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {
void request_destroy__11TBoss4Type2FUi(void*);
void queue_destruction__7TObjectFv(void*);
void copy_pos__11TNowLoadingFPvPv(void*, void*);
int query_teammate_state__9TObjEneDDFPv(void*);
extern const f32 lbl_805E01C0;
void* __nw__7TObjectFUl(int);
}

void TDPBShower::run_task() {
    if (query_teammate_state__9TObjEneDDFPv(this) == 0) {
        m_position[1] += lbl_805E01C0;
        if (m_2c != NULL) {
            copy_pos__11TNowLoadingFPvPv(m_2c, m_position);
        }
        if (--m_countdown < 0) {
            queue_destruction__7TObjectFv(this);
        }
    }
}

TDPBShower::~TDPBShower() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}

typedef char RecoveredGlobal_8035D7D0___vt__10TDPBShower_size[sizeof(RecoveredGlobal_8035D7D0___vt__10TDPBShower) == 0x18 ? 1 : -1];
u8 *TDPBShower__ct(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TDPBShower.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TDPBShower__class_name;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + lbl_805E01C4);
    temp_r3 = (u8 *)(create_particle_emitter((s32) (arg0 + 0x1C), 0x134));
    M2C_FIELD(arg0, u8 **, 0x2C) = temp_r3;
    if (temp_r3 != NULL) {
        set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, u8 **, 0x2C), 0x40);
    }
    return arg0;
}

extern "C" void* create_TDPBShower(void* arg0, void* arg1) {
    void* o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TDPBShower__ct((u8 *)(o), (u8 *)(arg0), (u8 *)(arg1));
    }
    return o;
}

#include "types.h"
#include "pso/boss/TBoss3Volopt_8004812C.h"
#include "pso/math/MatrixVector.h"
#include "pso/misc/TLobby_801E43E4.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/byteswap.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss3VoloptP02.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/player/TObjPlayer.h"

struct G_8004816C { u8 pad[0x18]; s32 arr[1]; };

extern "C" {
extern G_8004816C *lbl_805D4D1C;
int read_be16_field2__10TObjPlayerFv(void*);

f32 TBoss3Volopt__sub_8004812C(s32 index) {
    return volopt_p02_params->float_params[index];
}

void TBoss3VoloptP02::load_params_from_table(s32 index) {
    model = (void *)lbl_805D4CE4->models[index].model;
    texture_id = lbl_805D4CE4->models[index].m_c;
}

s32 TBoss3Volopt__sub_8004816C(s32 i) {
    return lbl_805D4D1C->arr[i];
}

void TBoss3Volopt::update_and_send_60() { swap_6x85_fields(); TLobby__send_and_handle_60((u8 *)this); }
void TBoss3Volopt__sub_800481B4(void* p) { *(u8*)((char*)p + 0x0) = 133; *(u8*)((char*)p + 0x1) = 5; }
void TBoss3Volopt::swap_6x18_fields() { read_be16_field2__10TObjPlayerFv(this); { int i; for (i = 0; i < 4; i++) { bswap_16((u16 *)((char*)this + 0x4 + i * 2)); } } }
void TBoss3Volopt::broadcast_state() { swap_6x18_fields(); TLobby__send_and_handle_60((u8 *)this); }
void TBoss3Volopt__sub_8004824C(void* p) { *(u8*)((char*)p + 0x0) = 24; *(u8*)((char*)p + 0x1) = 3; }

}

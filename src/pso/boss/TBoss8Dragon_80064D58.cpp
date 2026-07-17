#include "types.h"

extern "C" {

void reset_radius__12TBoss8DragonFPv(void* a0);
void set_anim_speed__12TBoss8DragonFPv(void* a0);
void reset_float_3c__12TBoss8DragonFPv(void* a0);
void reset_angle__12TBoss8DragonFPv(void* a0);
void set_phase__12TBoss8DragonFPv(void* p);
void set_attack_phase__12TBoss8DragonFPv(void* p);
void set_flag_4e4__12TBoss8DragonFPv(void* p);
void clear_timer__12TBoss8DragonFPv(void* p);

    extern const float lbl_805D8EC4;
void reset_radius__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8EC4; }

    extern const float lbl_805D8E20;
void set_anim_speed__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8E20; }

    extern const float lbl_805D8DEC;
void reset_float_3c__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8DEC; }

    extern const float lbl_805D8D84;
void reset_angle__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8D84; }

void set_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 3; }
void set_attack_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 2; }
void set_flag_4e4__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 1; }
void clear_timer__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 0; }

}

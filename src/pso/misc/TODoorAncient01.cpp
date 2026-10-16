#include "types.h"
#include "pso/misc/TODoorAncient01.h"
#include "pso/unk/TUnk_804B0BB8.h"

extern "C" {

void vfunc_20__13TUnk_804B0BB8Fv(void);
void vfunc_20__15TODoorAncient01Fv(void);
void* init_door_base(void* a0);
int init_map_object_base(void);

    extern unsigned char lbl_804B0BB8[];
    extern const float lbl_805DB3DC;
void* init_door_base(void* a0) { init_map_object_base(); *(int*)((char*)a0 + 0x18) = (int)lbl_804B0BB8; *(int*)((char*)a0 + 0xc8) = -1; *(int*)((char*)a0 + 0xcc) = 0; *(int*)((char*)a0 + 0xd0) = 0; *(int*)((char*)a0 + 0xac) = 0; *(float*)((char*)a0 + 0xb8) = lbl_805DB3DC; return a0; }

void TUnk_804B0BB8::vfunc_20() {  }
void TODoorAncient01::vfunc_20() {  }

}

#include "pso/misc/CharacterAppearance.h"
extern "C" {
extern CharacterAppearanceFields* lbl_805D6520;
s32 creation_motion_group() {
    if(lbl_805D6520->classFlags&1)return 0;
    s32 group=1;
    if((s32)lbl_805D6520->classId==6)group=2;
    return group;
}
}

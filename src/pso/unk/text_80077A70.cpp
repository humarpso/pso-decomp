#include "types.h"
#include "pso/unk/text_80077A70.h"

extern "C" {

s32 fn_80077AA4(s32);

s32 fn_80077A70(s32 arg0) {
    fn_80077AA4(arg0 + 0x70);
    return arg0;
}

}

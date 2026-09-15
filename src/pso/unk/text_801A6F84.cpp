#include "types.h"
struct InputRepeatRecord {u8 unused[0x2c];s16 heldTicks[14];u32 held,pressed;};

extern "C" {
extern u32 lbl_804469A0[14];
s32 input_press_or_repeat(InputRepeatRecord* input,u32 mask,s32 delay,s32 period);
}

extern "C" {

s32 input_press_or_repeat(InputRepeatRecord* input,u32 mask,s32 delay,s32 period) {
    if(!mask)return 0;
    if(input->pressed&mask)return 1;
    s32 result=0;
    for(int i=0;i<14;++i) {
        if(mask&lbl_804469A0[i]) {
            const s32 elapsed=input->heldTicks[i]-(delay+1);
            if(elapsed>=0&&elapsed%period==0)result|=1;
        }
    }
    return result;
}

}

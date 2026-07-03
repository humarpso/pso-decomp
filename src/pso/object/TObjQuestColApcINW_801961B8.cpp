#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestColApcINW__ct(void *arg0);
void TObjQuestColBase__ct(void *);

extern const f32 lbl_805DBF04;
extern M2C_UNK __vt__18TObjQuestColApcINW[];
extern void *lbl_805D3400;

void *TObjQuestColApcINW__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjQuestColApcINW;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3400;
    M2C_FIELD(arg0, f32 *, 0xBC) = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DBF04;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBF04;
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DBF04;
    return arg0;
}

}

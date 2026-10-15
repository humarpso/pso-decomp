#include "types.h"

struct Ent_803DAF70 { s32 a; s32 b; u8 *p; };

struct Tbl_803DAF70 { Ent_803DAF70 *arr; };

struct G_803DAF70 { u8 pad[0x20]; Tbl_803DAF70 *f20; };

extern "C" {
extern u8 *current_render_context;
void set_index__9TLanguageFPvi(u8 *arg0, s32 arg1);
void set_entry_index__9TLanguageFii(s32 i, s32 x);
}

extern "C" {

void set_index__9TLanguageFPvi(u8 *arg0, s32 arg1);

void set_index__9TLanguageFPvi(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 8) = arg1;
}
#pragma push
#pragma scheduling off
#pragma peephole off
void set_entry_index__9TLanguageFii(s32 i, s32 x) {
    set_index__9TLanguageFPvi(((G_803DAF70 *)current_render_context)->f20->arr[i].p, x);
}
#pragma pop

}

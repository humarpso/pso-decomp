#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
#define TBL ((Ent_803ACEC4 *)((u8 *)t + 0x4E00))
#define macTimeQueueRoot ((SYNTH_VOICE_803B19AC *)lbl_805D7420)
#define macActiveMacroRoot ((SYNTH_VOICE_803B19AC *)lbl_805D741C)
#define macRealTime lbl_805D7428
#define FLAGS (*(u64 *)&o->fh)
#define HEAD (*(Voice_803B2128 **)&lbl_805D741C)
#define synthVoice ((SYNTH_VOICE_803B2438 *)lbl_805D73B0)
#define vidCurrentId (*(u32 *)&lbl_805D7438)
#define vidRoot (*(VID_LIST_SV **)&lbl_805D743C)
#define vidFree (*(VID_LIST_SV **)&lbl_805D7440)
extern "C" {

s32 calc_sound_pitch_semitone_up(s32 current) {
    return (s32)(lbl_805E0B78 * (f32)(u16)current);
}

u32 calc_sound_base_pitch(u8 note, u32 r) {
    u32 base;
    f32 v;
    if (r == 0xFFFFFFFF) {
        r = 0x40005622;
    }
    base = r >> 24;
    if (note != base) {
        f32 m;
        if (base < note) {
            m = lbl_804F6358[note - base];
        } else {
            m = lbl_804F6558[base - note];
        }
        v = (f32)(r & 0xFFFFFF) * m;
    } else {
        v = (f32)(r & 0xFFFFFF);
    }
    return lbl_805E0B88 * v / (f32)*(u32 *)lbl_80557348.pad;
}

}

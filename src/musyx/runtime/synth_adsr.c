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
#define synthVoice ((SYNTH_VOICE_803B2438 *)synthVoice)
#define vidCurrentId (*(u32 *)&lbl_805D7438)
#define vidRoot (*(VID_LIST_SV **)&lbl_805D743C)
#define vidFree (*(VID_LIST_SV **)&lbl_805D7440)
extern "C" {

u32 adsrConvertTimeCents(s32 arg0) {
    return (u32)(1000.0f * powf(2.0f, 1.27156579e-08f * (f32)arg0, 1.27156579e-08f));
}

#define arg0 ((u8 *)a0)
s32 salChangeADSRState(void *a0) {
    s32 var_r0;
    s32 var_r5;
    u32 temp_r4_3;
    u32 temp_r4_4;
    u32 temp_r4_6;
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_5;
    temp_r4 = M2C_FIELD(arg0, u8 *, 0);
    var_r0 = 0;
    switch ((s32) temp_r4) {
    case 0:
        temp_r4_2 = M2C_FIELD(arg0, u8 *, 1);
        switch ((s32) temp_r4_2) {
        case 0:
            temp_r4_3 = M2C_FIELD(arg0, u32 *, 0x14);
            M2C_FIELD(arg0, u32 *, 4) = temp_r4_3;
            if (temp_r4_3 != 0) {
                M2C_FIELD(arg0, u8 *, 1) = 1U;
                M2C_FIELD(arg0, s32 *, 8) = 0;
                M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0x7FFF0000U / (u32) M2C_FIELD(arg0, u32 *, 0x14));
            } else {
            case 1:
                temp_r4_4 = M2C_FIELD(arg0, u32 *, 0x18);
                M2C_FIELD(arg0, u32 *, 4) = temp_r4_4;
                if (temp_r4_4 != 0) {
                    M2C_FIELD(arg0, u8 *, 1) = 2U;
                    M2C_FIELD(arg0, s32 *, 8) = 0x7FFF0000;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) -(s32) ((u32) (0x7FFF0000 - (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10)) / (u32) M2C_FIELD(arg0, u32 *, 0x18));
                } else {
                case 2:
                    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
                        M2C_FIELD(arg0, u8 *, 1) = 3U;
                        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10);
                        M2C_FIELD(arg0, u32 *, 0x10) = 0U;
                    } else {
                    case 4:
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                        var_r0 = 1;
                    }
                }
            }
            break;
        }
        break;
    case 1:
        temp_r4_5 = M2C_FIELD(arg0, u8 *, 1);
        switch ((s32) temp_r4_5) {
        case 0:
            temp_r4_6 = M2C_FIELD(arg0, u32 *, 0x14);
            M2C_FIELD(arg0, u32 *, 4) = temp_r4_6;
            if (temp_r4_6 != 0) {
                M2C_FIELD(arg0, u8 *, 1) = 1U;
                if ((u8) M2C_FIELD(arg0, u8 *, 0x26) == 0) {
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0x7FFF0000U / (u32) M2C_FIELD(arg0, u32 *, 4));
                } else {
                    M2C_FIELD(arg0, s32 *, 0xC) = 0;
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0xC10000U / (u32) M2C_FIELD(arg0, u32 *, 4));
                }
            } else {
            case 1:
                M2C_FIELD(arg0, u32 *, 4) = (u32) ((u32) (M2C_FIELD(arg0, u32 *, 0x18) * ((u32)((0xC1 - M2C_FIELD(arg0, u16 *, 0x1C)) << 0x10) / 193)) >> 0x10U);
                if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0) {
                    M2C_FIELD(arg0, u8 *, 1) = 2U;
                    M2C_FIELD(arg0, s32 *, 8) = 0x7FFF0000;
                    M2C_FIELD(arg0, s32 *, 0xC) = 0xC10000;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) -(s32) ((u32) ((0xC1 - M2C_FIELD(arg0, u16 *, 0x1C)) << 0x10) / (u32) M2C_FIELD(arg0, u32 *, 4));
                } else {
                case 2:
                    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
                        M2C_FIELD(arg0, u8 *, 1) = 3U;
                        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10);
                        var_r5 = 0xC1 - ((s32) (M2C_FIELD(arg0, s32 *, 0xC) + 0x8000) >> 0x10);
                        if (var_r5 < 0) {
                            var_r5 = 0;
                        }
                        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(((u8 *)(lbl_804F6758) + (var_r5 * 2)), u16 *, 0) << 0x10);
                        M2C_FIELD(arg0, u32 *, 0x10) = 0U;
                    } else {
                    case 4:
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                        var_r0 = 1;
                    }
                }
            }
            break;
        }
        break;
    }
    return var_r0;
}
#undef arg0

u32 adsrSetup(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[1]; s8 field_1; };
    ((Fields_arg0*)arg0)->field_1 = 0;
    return salChangeADSRState((void *)(arg0));
}
#define dspScale2IndexTab lbl_804F68DC
#pragma push
#pragma opt_common_subs on

u32 adsrStartRelease(ADSR_VARS_803B41C8 *adsr, u32 rtime) {
    switch (adsr->mode) {
    case 0:
        adsr->state = 4;
        adsr->cnt = rtime;
        if (rtime == 0) {
            adsr->cnt = 1;
            adsr->currentDelta = 0;
            return 1;
        }
        adsr->currentDelta = -(adsr->currentVolume / rtime);
        break;
    case 1:
        if (adsr->data.dls.aMode == 0 && adsr->state == 1) {
            adsr->currentIndex = (193 - dspScale2IndexTab[adsr->currentVolume >> 21]) * 0x10000;
        }

        adsr->cnt = (u32)(3.238342E-4f * (float)adsr->currentIndex * (float)rtime) >> 12;
        adsr->state = 4;
        if (adsr->cnt == 0) {
            adsr->cnt = 1;
            adsr->currentDelta = adsr->currentIndex = adsr->currentVolume = 0;
            return 1;
        }

        adsr->currentDelta = -(adsr->currentIndex / adsr->cnt);
        break;
    }

    return 0;
}

#pragma pop
#undef dspScale2IndexTab

s32 adsrRelease(struct Envelope_803B431C *e) {
    switch (e->mode) {
    case 0:
    case 1:
        return adsrStartRelease((ADSR_VARS_803B41C8 *)e, e->release);
    default:
        return 0;
    }
}

#define e ((Env_803B4360 *)arg0)
#define out ((u16 *)arg1)
#define dlt ((u16 *)arg2)
u32 adsrHandle(void *arg0, void *arg1, void *arg2) {
    s32 ret = 0;
    s32 old;
    s32 d;
    s32 v;
    switch (e->mode) {
    case 0:
        if (e->phase != 3) {
            old = e->level;
            e->level = old + e->step;
            *out = old >> 16;
            if (e->step >= 0) {
                *dlt = e->step >> 21;
            } else {
                *dlt = -(-e->step >> 21);
            }
            if (--e->remaining == 0) {
                ret = salChangeADSRState(arg0);
            }
        } else {
            *out = e->level >> 16;
            *dlt = 0;
        }
        break;
    case 1:
        if (e->phase != 3) {
            old = e->level;
            if (e->f26 == 0 && e->phase == 1) {
                e->level = old + e->step;
            } else {
                e->c += e->step;
                v = 0xC1 - ((e->c + 0x8000) >> 16);
                if (v < 0) {
                    v = 0;
                }
                e->level = lbl_804F6758[v] << 16;
            }
            *out = old >> 16;
            d = e->level - old;
            if (d >= 0) {
                *dlt = d >> 21;
            } else {
                *dlt = -(-d >> 21);
            }
            if (--e->remaining == 0) {
                ret = salChangeADSRState(arg0);
            }
        } else {
            *out = e->level >> 16;
            *dlt = 0;
        }
        break;
    }
    return ret;
}
#undef e
#undef out
#undef dlt

u32 adsrHandleLowPrecision(void *arg0, void *arg1, void *arg2) {
    u8 i;

    for (i = 0; i < 15; i++) {
        if (adsrHandle((void *)(arg0), (void *)(arg1), (void *)(arg2)) != 0) {
            return 1;
        }
    }
    return 0;
}

}

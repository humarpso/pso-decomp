#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
extern "C" {

s32 sndFXCtrl(u32 vid, u8 ctrl, u8 value) {
    s32 ret;
    hwDisableIrq();
    ret = synthFXSetCtrl(vid, ctrl, value);
    hwEnableIrq();
    return ret;
}

s32 sndFXCtrl14(u32 vid, u8 ctrl, u16 value) {
    s32 ret;
    hwDisableIrq();
    ret = synthFXSetCtrl14(vid, ctrl, value);
    hwEnableIrq();
    return ret;
}

s32 sndFXKeyOff(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    var_r31 = arg0;
    hwDisableIrq();
    var_r3 = var_r31;
    var_r31 = synthSendKeyOff((int)((int) (var_r3)));
    hwEnableIrq();
    var_r3 = var_r31;
    return var_r3;
}

s32 sndFXStartParaInfo(s16 arg0, u8 arg1, u8 arg2, s32 arg3, Req_803AA1E0 *req) {
    u32 id;
    u8 i;
    Ent_803AA1E0 *e;
    u8 t;
    hwDisableIrq();
    id = synthFXStart(arg0, arg1, arg2, arg3, lbl_80557C1C[(u8)arg3].b1);
    if (id != 0xFFFFFFFF) {
        e = req->ents;
        i = 0;
        while (i < req->count) {
            t = e->type;
            if (t < 0x40 || t == 0x80 || t == 0x84) {
                synthFXSetCtrl14(id, t, e->v.w);
            } else {
                synthFXSetCtrl(id, t, e->v.b);
            }
            e++;
            i++;
        }
    }
    hwEnableIrq();
    return id;
}

u32 sndFXCheck(u32 id) {
    if (vidGetInternalId((u32)(id)) != 0xFFFFFFFF) return id;
    return 0xFFFFFFFF;
}

void sndVolume(u8 arg0, u16 arg1, u8 arg2) {
    hwDisableIrq();
    synthVolume(arg0, arg1, arg2, 0, -1);
    hwEnableIrq();
}

void sndOutputMode(s32 mode) {
    u32 old = lbl_805D73AC;
    u32 i;

    switch (mode) {
    case 0:
        lbl_805D73AC = old | 1;
        lbl_805D73AC &= ~2;
        hwDisableHRTF();
        break;
    case 1:
        lbl_805D73AC = old & ~1;
        lbl_805D73AC &= ~2;
        hwDisableHRTF();
        break;
    case 2:
        lbl_805D73AC = old & ~1;
        lbl_805D73AC |= 2;
        hwDisableHRTF();
        break;
    }
    if (old != (u32)lbl_805D73AC) {
        for (i = 0; i < lbl_80557348.count; i++) {
            ((Rec_803AA35C *)lbl_805D73B0)[i].flags |= 0x200000000000ULL;
        }
        streamOutputModeChanged();
    }
}

void sndSetAuxProcessingCallbacks(u8 studio, void *auxA, s32 userA, u8 midiA, u32 seqIDA, void *auxB, s32 userB, u8 midiB, u32 seqIDB) {
    hwDisableIrq();
    if (auxA != 0) {
        if ((lbl_805D739C[studio] = midiA) != 0xFF) {
            lbl_805D7394[studio] = seqGetPrivateId(seqIDA);
            lbl_80557BBC[studio] = auxA;
            lbl_80557B9C[studio] = userA;
        }
    } else {
        lbl_80557BBC[studio] = 0;
        lbl_805D739C[studio] = 0xFF;
    }
    if (auxB != 0) {
        if ((lbl_805D738C[studio] = midiB) != 0xFF) {
            lbl_805D7384[studio] = seqGetPrivateId(seqIDB);
            lbl_80557BFC[studio] = auxB;
            lbl_80557BDC[studio] = userB;
        }
    } else {
        lbl_80557BFC[studio] = 0;
        lbl_805D738C[studio] = 0xFF;
    }
    hwSetAUXProcessingCallbacks(studio, (s32)auxA, userA, (s32)auxB, userB);
    hwEnableIrq();
}
#pragma push
#pragma opt_common_subs on
void synthActivateStudio(u8 studio, u32 isMaster, u32 type) {
    hwDisableIrq();
    lbl_80557BBC[studio] = 0;
    lbl_80557BFC[studio] = 0;
    lbl_805D739C[studio] = 0xFF;
    lbl_805D738C[studio] = 0xFF;
    lbl_80557C1C[studio].b1 = 0;
    lbl_80557C1C[studio].b0 = 0;
    hwActivateStudio(studio, isMaster, type);
    hwEnableIrq();
}
#pragma pop

void synthDeactivateStudio(u8 studio) {
    u32 i;
    for (i = 0; i < (*(Cfg_803AA66C *)&lbl_80557348).voiceNum; ++i) {
        Rec_803AA66C *sv;
        if (studio == (sv = &(*(Rec_803AA66C * *)&lbl_805D73B0)[i])->studio) {
            if (sv->id != 0xFFFFFFFF) {
                voiceKillSound(sv->vidList->vid);
            } else if (hwIsActive(i)) {
                hwOff(i);
            }
        }
    }
    hwDisableIrq();
    lbl_80557BBC[studio] = 0;
    lbl_80557BFC[studio] = 0;
    lbl_805D739C[studio] = 0xFF;
    lbl_805D738C[studio] = 0xFF;
    hwEnableIrq();
    hwDeactivateStudio(studio);
}

void synthAddStudioInput(u8 arg0, void *in_desc) {
    void hwAddInput(u8, void *);
    hwAddInput(arg0, in_desc);
}

void synthRemoveStudioInput(u8 arg0, void *in_desc) {
    void hwRemoveInput(u8, void *);
    hwRemoveInput(arg0, in_desc);
}

}

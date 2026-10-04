#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
extern "C" {

s32 TLobby__sub_803AA0E0(u32 vid, u8 ctrl, u8 value) {
    s32 ret;
    sound_disable_irq();
    ret = TLobby__sub_803A9200(vid, ctrl, value);
    sound_enable_irq();
    return ret;
}

s32 TLobby__sub_803AA140(u32 vid, u8 ctrl, u16 value) {
    s32 ret;
    sound_disable_irq();
    ret = TLobby__sub_803A92E8(vid, ctrl, value);
    sound_enable_irq();
    return ret;
}

s32 TLobby__sub_803AA1A0(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    var_r31 = arg0;
    sound_disable_irq();
    var_r3 = var_r31;
    var_r31 = key_off_sound_fx((int)((int) (var_r3)));
    sound_enable_irq();
    var_r3 = var_r31;
    return var_r3;
}

s32 start_sound_fx(s16 arg0, u8 arg1, u8 arg2, s32 arg3, Req_803AA1E0 *req) {
    u32 id;
    u8 i;
    Ent_803AA1E0 *e;
    u8 t;
    sound_disable_irq();
    id = synth_start_fx(arg0, arg1, arg2, arg3, lbl_80557C1C[(u8)arg3].b1);
    if (id != 0xFFFFFFFF) {
        e = req->ents;
        i = 0;
        while (i < req->count) {
            t = e->type;
            if (t < 0x40 || t == 0x80 || t == 0x84) {
                TLobby__sub_803A92E8(id, t, e->v.w);
            } else {
                TLobby__sub_803A9200(id, t, e->v.b);
            }
            e++;
            i++;
        }
    }
    sound_enable_irq();
    return id;
}

u32 TLobby__sub_803AA2B8(u32 id) {
    if (find_sound_voice_by_id((u32)(id)) != 0xFFFFFFFF) return id;
    return 0xFFFFFFFF;
}

void TLobby__sub_803AA2FC(u8 arg0, u16 arg1, u8 arg2) {
    sound_disable_irq();
    TLobby__sub_803A94E0(arg0, arg1, arg2, 0, -1);
    sound_enable_irq();
}

void set_sound_output_mode(s32 mode) {
    u32 old = lbl_805D73AC;
    u32 i;

    switch (mode) {
    case 0:
        lbl_805D73AC = old | 1;
        lbl_805D73AC &= ~2;
        TLobby__sub_803BD9F8();
        break;
    case 1:
        lbl_805D73AC = old & ~1;
        lbl_805D73AC &= ~2;
        TLobby__sub_803BD9F8();
        break;
    case 2:
        lbl_805D73AC = old & ~1;
        lbl_805D73AC |= 2;
        TLobby__sub_803BD9F8();
        break;
    }
    if (old != (u32)lbl_805D73AC) {
        for (i = 0; i < lbl_80557348.count; i++) {
            ((Rec_803AA35C *)lbl_805D73B0)[i].flags |= 0x200000000000ULL;
        }
        TLobby__sub_803AB5A8();
    }
}

void register_sound_aux_callbacks(u8 studio, void *auxA, s32 userA, u8 midiA, u32 seqIDA, void *auxB, s32 userB, u8 midiB, u32 seqIDB) {
    sound_disable_irq();
    if (auxA != 0) {
        if ((lbl_805D739C[studio] = midiA) != 0xFF) {
            lbl_805D7394[studio] = TLobby__sub_803A3D20(seqIDA);
            lbl_80557BBC[studio] = auxA;
            lbl_80557B9C[studio] = userA;
        }
    } else {
        lbl_80557BBC[studio] = 0;
        lbl_805D739C[studio] = 0xFF;
    }
    if (auxB != 0) {
        if ((lbl_805D738C[studio] = midiB) != 0xFF) {
            lbl_805D7384[studio] = TLobby__sub_803A3D20(seqIDB);
            lbl_80557BFC[studio] = auxB;
            lbl_80557BDC[studio] = userB;
        }
    } else {
        lbl_80557BFC[studio] = 0;
        lbl_805D738C[studio] = 0xFF;
    }
    set_sound_aux_bus_callbacks(studio, (s32)auxA, userA, (s32)auxB, userB);
    sound_enable_irq();
}
#pragma push
#pragma opt_common_subs on
void TLobby__sub_803AA5BC(u8 studio, u32 isMaster, u32 type) {
    sound_disable_irq();
    lbl_80557BBC[studio] = 0;
    lbl_80557BFC[studio] = 0;
    lbl_805D739C[studio] = 0xFF;
    lbl_805D738C[studio] = 0xFF;
    lbl_80557C1C[studio].b1 = 0;
    lbl_80557C1C[studio].b0 = 0;
    TLobby__sub_803BD5EC(studio, isMaster, type);
    sound_enable_irq();
}
#pragma pop

void TLobby__sub_803AA66C(u8 studio) {
    u32 i;
    for (i = 0; i < (*(Cfg_803AA66C *)&lbl_80557348).voiceNum; ++i) {
        Rec_803AA66C *sv;
        if (studio == (sv = &(*(Rec_803AA66C * *)&lbl_805D73B0)[i])->studio) {
            if (sv->id != 0xFFFFFFFF) {
                TLobby__sub_803B3748(sv->vidList->vid);
            } else if (is_sound_hw_voice_active(i)) {
                TLobby__sub_803BD598(i);
            }
        }
    }
    sound_disable_irq();
    lbl_80557BBC[studio] = 0;
    lbl_80557BFC[studio] = 0;
    lbl_805D739C[studio] = 0xFF;
    lbl_805D738C[studio] = 0xFF;
    sound_enable_irq();
    TLobby__sub_803BD60C(studio);
}

void TLobby__sub_803AA75C(u8 arg0, void *in_desc) {
    void TLobby__sub_803BD62C(u8, void *);
    TLobby__sub_803BD62C(arg0, in_desc);
}

void TLobby__sub_803AA77C(u8 arg0, void *in_desc) {
    void TLobby__sub_803BD660(u8, void *);
    TLobby__sub_803BD660(arg0, in_desc);
}

}

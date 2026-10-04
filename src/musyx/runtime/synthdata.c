#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
extern "C" {

s32 TLobby__sub_803ACD40(u16 arg0) {
    extern u8 lbl_80559E70[];
    Tbl_803ACD40 *t = (Tbl_803ACD40 *)lbl_80559E70;
    Ent_803ACD40 *e;
    s32 i;
    s32 n;
    s32 j;
    sound_disable_irq();
    n = lbl_805D73D4;
    e = t->ents;
    i = 0;
    while (i < n && arg0 != e->id) {
        e++;
        i++;
    }
    if (i != n) {
        if (--t->ents[i].ref == 0) {
            for (j = i + 1; j < n; j++) {
                ((Ent_803ACD40 *)((u8 *)t + 0x4600))[j - 1] = ((Ent_803ACD40 *)((u8 *)t + 0x4600))[j];
            }
            lbl_805D73D4--;
            sound_enable_irq();
            return 1;
        }
    }
    sound_enable_irq();
    return 0;
}

#pragma push
#pragma optimize_for_size off
#define TBL ((Ent_803ACEC4 *)((u8 *)t + 0x4E00))
s32 TLobby__sub_803ACEC4(u16 key, void *p, u16 f6) {
    extern u8 lbl_80559E70[];
    Tbl_803ACEC4 *t = (Tbl_803ACEC4 *)lbl_80559E70;
    s32 n;
    s32 i;
    Ent_803ACEC4 *e;
    s32 j;
    sound_disable_irq();
    n = lbl_805D73D6;
    i = 0;
    e = t->ents;
    while (i < n && e->key < key) {
        e++;
        i++;
    }
    if (i < n) {
        if (key != t->ents[i].key) {
            if ((u32)n < 0x100) {
                for (j = n - 1; j >= i; j--) {
                    TBL[j + 1] = TBL[j];
                }
                lbl_805D73D6++;
            } else {
                sound_enable_irq();
                return 0;
            }
        } else {
            t->ents[i].count++;
            sound_enable_irq();
            return 0;
        }
    } else {
        if ((u32)n < 0x100) {
            lbl_805D73D6++;
        } else {
            sound_enable_irq();
            return 0;
        }
    }
    t->ents[i].key = key;
    t->ents[i].p = p;
    t->ents[i].f6 = f6;
    t->ents[i].count = 1;
    sound_enable_irq();
    return 1;
}
#pragma pop

#pragma push
#pragma optimize_for_size off
s32 TLobby__sub_803AD10C(u16 key) {
    extern u8 lbl_80559E70[];
    Tbl_803AD10C *t = (Tbl_803AD10C *)lbl_80559E70;
    s32 n;
    s32 i;
    Ent_803AD10C *e;
    s32 j;
    sound_disable_irq();
    n = lbl_805D73D6;
    i = 0;
    e = t->ents;
    while (i < n && key != e->key) {
        e++;
        i++;
    }
    if (i != n) {
        if (--t->ents[i].count == 0) {
            for (j = i + 1; j < n; j++) {
                ((Ent_803AD10C *)((u8 *)t + 0x4E00))[j - 1] = ((Ent_803AD10C *)((u8 *)t + 0x4E00))[j];
            }
            lbl_805D73D6--;
            sound_enable_irq();
            return 1;
        }
    }
    sound_enable_irq();
    return 0;
}
#pragma pop

s32 TLobby__sub_803AD4D0(u16 arg0) {
    extern u8 lbl_80559E70[];
    Tbl_803AD4D0 *t = (Tbl_803AD4D0 *)lbl_80559E70;
    Ent_803AD4D0 *e;
    s32 i;
    s32 n;
    s32 j;
    sound_disable_irq();
    n = lbl_805D73D2;
    e = t->ents;
    i = 0;
    while (i < n && arg0 != e->id) {
        e++;
        i++;
    }
    if (i != n) {
        if (--t->ents[i].ref == 0) {
            for (j = i + 1; j < n; j++) {
                ((Ent_803AD4D0 *)((u8 *)t + 0x600))[j - 1] = ((Ent_803AD4D0 *)((u8 *)t + 0x600))[j];
            }
            lbl_805D73D2--;
            sound_enable_irq();
            return 1;
        }
    }
    sound_enable_irq();
    return 0;
}

s32 TLobby__sub_803ADA80(u16 sid) {
    extern Tbl_803ADA80 lbl_80559E70[];
    u32 i;
    Hdr_803ADA80 *header;
    SDir_803ADA80 *data;
    SDir_803ADA80 *sdir;

    data = 0;
    sdir = 0;
    for (i = 0; i < lbl_805D73D0; ++i) {
        u16 v;
        for (data = lbl_80559E70[i].data; (v = data->id) != 0xFFFF; ++data) {
            if (v == sid && data->ref_cnt != 0xFFFF) {
                sdir = data;
                goto done;
            }
        }
    }
done:

    if (sdir->ref_cnt == 0) {
        sdir->addr = (void *)((u32)sdir->offset + (u32)lbl_80559E70[i].base);
        header = &sdir->header;
        TLobby__sub_803BD8A8(&header, &sdir->addr);
    }

    ++sdir->ref_cnt;
    return 1;
}

s32 TLobby__sub_803ADB58(u16 id) {
    extern u8 lbl_80559E70[];
    u32 i;

    for (i = 0; i < lbl_805D73D0; i++) {
        Ent_803ADB58 *e;
        u16 v;
        for (e = ((Tbl_803ADB58 *)lbl_80559E70)[i].list; (v = e->id) != 0xFFFF; e++) {
            if (v == id && e->ref != 0xFFFF) {
                e->ref--;
                if (e->ref == 0) {
                    TLobby__sub_803BD93C(&e->fc, e->f8);
                }
                return 1;
            }
        }
    }
    return 0;
}

s32 TLobby__sub_803ADBF0(u16 arg0, Rec_803ADBF0 *arg1, u16 arg2) {
    extern u8 lbl_80559E70[];
    Tbl_803ADBF0 *t = (Tbl_803ADBF0 *)lbl_80559E70;
    Ent_803ADBF0 *e;
    s32 i;
    u16 n;
    s32 k;
    n = lbl_805D73DA;
    e = t->ents;
    i = 0;
    while (i < n && arg0 != e->id) {
        e++;
        i++;
    }
    if (i == n && n < 0x80) {
        sound_disable_irq();
        k = lbl_805D73DA;
        t->ents[k].id = arg0;
        t->ents[k].count = arg2;
        t->ents[k].data = arg1;
        k = 0;
        while (k < arg2) {
            arg1->f9 = 0x1F;
            k++;
            arg1++;
        }
        lbl_805D73DA++;
        sound_enable_irq();
        return 1;
    }
    return 0;
}

s32 TLobby__sub_803ADD18(u16 id) {
    s32 i;
    s32 j;
    s32 n;
    i = 0;
    n = lbl_805D73DA;
    while (i < n && id != lbl_80564070[i].id) {
        i++;
    }
    if (i != n) {
    sound_disable_irq();
    for (j = i + 1; j < lbl_805D73DA; j++) {
        lbl_80564070[j - 1] = lbl_80564070[j];
    }
    lbl_805D73DA--;
    sound_enable_irq();
    return 1;
    }
    return 0;
}

s32 TLobby__sub_803AE420(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 compare_sound_sample_id(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 find_sound_sample(s16 id, Sample_803AE4D4 *s) {
    extern u8 lbl_80559E70[];
    u8 *base;
    s32 i;

    base = lbl_80559E70;
    *(s16 *)(base + 0xA600) = id;
    for (i = 0; i < lbl_805D73D0; i++) {
        if ((lbl_805D73F0 = (Row_803AE4D4 *)search_sound_sample_directory((Req_803AE60C *)(base + 0xA600), (void *)((Reg_803AE4D4 *)base)[i].rows, ((Reg_803AE4D4 *)base)[i].count, 0x20, (s32 (*)(u8 *, u8 *))compare_sound_sample_id)) != 0 &&
            lbl_805D73F0->ref != 0xFFFF) {
            lbl_805D73F4 = (Part_803AE4D4 *)&lbl_805D73F0->key;
            s->key = lbl_805D73F4->key;
            s->addr = lbl_805D73F0->addr;
            s->offset = 0;
            s->loopStart = lbl_805D73F4->loopStart;
            s->count = lbl_805D73F4->fmt & 0xFFFFFF;
            s->loopLen = lbl_805D73F4->loopLen;
            s->format = lbl_805D73F4->fmt >> 24;
            if (lbl_805D73F0->coef != 0) {
                s->coef = lbl_805D73F0->coef + ((Reg_803AE4D4 *)base)[i].rows;
            }
            return 0;
        }
    }
    return -1;
}

s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 TLobby__sub_803AE60C(s16 arg0) {
    lbl_805D73F8.f4 = arg0;
    if ((lbl_805D7400 = search_sound_sample_directory(&lbl_805D73F8, lbl_8055A470, lbl_805D73D2, 8, TLobby__sub_803AE5FC)) != NULL) {
        return *lbl_805D7400;
    }
    return 0;
}

s32 TLobby__sub_803AE66C(s16 arg0) {
    lbl_805D7404.f4 = arg0;
    if ((lbl_805D740C = search_sound_sample_directory(&lbl_805D7404, lbl_8055E470, lbl_805D73D4, 8, TLobby__sub_803AE5FC)) != NULL) {
        return *lbl_805D740C;
    }
    return 0;
}

s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 TLobby__sub_803AE6DC(s16 arg0, u16 *arg1) {
    extern u8 lbl_80559E70[];
    ((Req_803AE6DC *)(lbl_80559E70 + 0xA620))->f4 = arg0;
    if ((lbl_805D7410 = (Res_803AE6DC *)search_sound_sample_directory((Req_803AE60C *)((Req_803AE6DC *)(lbl_80559E70 + 0xA620)), (void *)(lbl_80559E70 + 0x4E00), (u16)(lbl_805D73D6), (s32)(0xC), (s32 (*)(u8 *, u8 *))(TLobby__sub_803AE6CC))) != 0) {
        *arg1 = lbl_805D7410->h6;
        return lbl_805D7410->f0;
    }
    return 0;
}

s32 TLobby__sub_803AE75C(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

Se_803A9144 *find_sound_fx_record(s16 arg0) {
    extern u8 lbl_80559E70[];
    s32 i;
    Blk_803AE76C *b;
    s32 *r;

    b = (Blk_803AE76C *)lbl_80559E70;
    i = 0;
    b->k.key = arg0;
    for (; i < lbl_805D73DA; i++) {
        r = search_sound_sample_directory((Req_803AE60C *)&b->k, ((Grp_803AE76C *)(lbl_80559E70 + 0xA200))[i].base, ((Grp_803AE76C *)(lbl_80559E70 + 0xA200))[i].n, 10,
                                 (s32 (*)(u8 *, u8 *))TLobby__sub_803AE75C);
        if (r != NULL) {
            return (Se_803A9144 *)r;
        }
    }
    return NULL;
}

void TLobby__sub_803AE814(void *arg0, void *arg1) {
    s32 i;

    lbl_805D73D0 = 0;
    lbl_805D73D2 = 0;
    lbl_805D73D4 = 0;
    lbl_805D73D6 = 0;
    lbl_805D73DA = 0;
    lbl_805D73D8 = 0;
    for (i = 0; i < 0x200; i++) {
        lbl_8055F870[i].count = 0;
        lbl_8055F870[i].start = 0;
    }
    TLobby__sub_803BD884(arg0, arg1);
}

}

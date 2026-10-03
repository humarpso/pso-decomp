#include "types.h"
struct PartnerText_8034D9E0 {
    const char *text[6];
    s32 kind[6];
};

extern "C" {
extern struct PartnerText_8034D9E0 lbl_805436B8[];
const char *get_partner_custom_text(s32 kind, u16 player);
}

extern "C" {

const char *get_partner_custom_text(s32 kind, u16 player) {
    s32 i;
    if (player >= 4) {
        return NULL;
    }
    for (i = 0; i < 6; i++) {
        if (kind == lbl_805436B8[player].kind[i]) {
            return lbl_805436B8[player].text[i];
        }
    }
    return NULL;
}

}

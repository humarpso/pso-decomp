#include "types.h"
struct PartnerText_8034D9E0 {
    const char *text[6];
    s32 kind[6];
};

struct PartnerText_8034DA38
{
  const char *text[6];
  s32 kind[6];
};

extern "C" {
extern struct PartnerText_8034D9E0 lbl_805436B8[];
const char *get_partner_custom_text(s32 kind, u16 player);
extern struct PartnerText_8034D9E0 lbl_805436B8[];
void set_partner_dialogue_override(const char *text, s32 kind, u16 player);
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
typedef struct PartnerText_8034DA38 PartnerText_8034DA38;
void set_partner_dialogue_override(const char *text, s32 kind, u16 player) {
  s32 i;
  long long off;
  if (player >= 4)
  {
    return;
  }
  off = player * 0x30;
  for (i = 0; i < 6; i++)
  {
    if ((((struct PartnerText_8034DA38 *)&lbl_805436B8)[player].kind[i] == 25) || (kind == ((struct PartnerText_8034DA38 *)&lbl_805436B8)[player].kind[i]))
    {
      ((struct PartnerText_8034DA38 *) (((u8 *) ((struct PartnerText_8034DA38 *)&lbl_805436B8)) + off))->kind[i] = kind;
      ((struct PartnerText_8034DA38 *)&lbl_805436B8)[player].text[i] = text;
      return;
    }
  }
}

}

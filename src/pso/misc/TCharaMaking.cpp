#include "types.h"

struct TextureList
{
  void *entries;
  s32 count;
};

struct Appearance
{
  u8 name[0x30];
  u8 section;
  u8 classId;
  u8 flags;
  u8 spare;
  u32 classFlags;
  s16 costume;
  s16 skin;
  s16 face;
  s16 head;
  s16 hair;
  s16 red;
  s16 green;
  s16 blue;
  float width;
  float height;
};

struct ClassAppearance
{
  s16 counts[8];
  void **hair;
  void **caps;
  void **heads;
  void *body;
  struct TextureList **hairTextures;
  struct TextureList **headTextures;
  struct TextureList *bodyTextures;
};

extern "C" {
extern struct ClassAppearance lbl_804D8E20[19];
s32 get_display_index__12TCharaMakingFPv(struct Appearance *);
void TCharaMaking__sub_8028E4CC(void *, struct Appearance *, struct ClassAppearance *, struct TextureList *);
void TCharaMaking__bind_appearance_texture_lists(s32 *arg0, s32 *arg1, s32 *arg2, struct Appearance *arg3);
}

extern "C" {

void clear_flag_bit0__12TCharaMakingFv(void);
void enable_making__12TCharaMakingFv(void);
int TObjPlayer__sub_801417E8(void);
int TObjPlayer__sub_80141820(void*);

    extern int some_id_805c6f74;
void clear_flag_bit0__12TCharaMakingFv(void) { TObjPlayer__sub_801417E8(); some_id_805c6f74 = (some_id_805c6f74 & 0xfffffffe); }

    extern int some_id_805c6f74;
void enable_making__12TCharaMakingFv(void) { some_id_805c6f74 = (some_id_805c6f74 | 0x1); TObjPlayer__sub_80141820((void*)31); }
typedef struct Appearance Appearance;
typedef struct ClassAppearance ClassAppearance;
typedef struct TextureList TextureList;
void TCharaMaking__bind_appearance_texture_lists(s32 *arg0, s32 *arg1, s32 *arg2, struct Appearance *arg3) {
  s32 temp_r4;
  struct ClassAppearance *temp_r28;
  struct TextureList **temp_r3;
  struct TextureList **temp_r3_2;
  struct TextureList *temp_r6;
  ClassAppearance *new_var;
  struct TextureList *temp_r6_2;
  temp_r4 = get_display_index__12TCharaMakingFPv(arg3) * 0x2C;
  new_var = (ClassAppearance *) (((u8 *) lbl_804D8E20) + temp_r4);
  *arg0 = 0;
  temp_r28 = new_var;
  temp_r3 = temp_r28->hairTextures;
  if (temp_r3 != 0)
  {
    temp_r6 = temp_r3[arg3->hair];
    if (temp_r6 != 0)
    {
      TCharaMaking__sub_8028E4CC(arg0, arg3, temp_r28, temp_r6);
      *arg0 = 1;
    }
  }
  *arg1 = 0;
  temp_r3_2 = temp_r28->headTextures;
  if (temp_r3_2 != 0)
  {
    temp_r6_2 = temp_r3_2[arg3->head];
    if (temp_r6_2 != 0)
    {
      TCharaMaking__sub_8028E4CC(arg1, arg3, temp_r28, temp_r6_2);
      *arg1 = 1;
    }
  }
  TCharaMaking__sub_8028E4CC(arg2, arg3, temp_r28, temp_r28->bodyTextures);
  *arg2 = 1;
}

}

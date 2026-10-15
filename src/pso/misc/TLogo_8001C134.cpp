#include "types.h"

extern "C" {
int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_804349A0[];
    extern unsigned char texture_logo_e_descriptor[];
extern u32 logo_texture_e_handle;
void register_texture_logo_e(void);
int queue_destruction__7TObjectFv(void);
    extern int TLogo__exit_requested_flag;
void request_exit__5TLogoFv(void);
}

extern "C" {

void free_held_object__5TLogoFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 logo_texture_e_handle;

void free_held_object__5TLogoFv(void) {
    if ((u32) logo_texture_e_handle != 0U) {
        TLobby__sub_803DA16C((void*)logo_texture_e_handle);
        logo_texture_e_handle = 0U;
    }
}
void register_texture_logo_e(void) { (*(int *)&logo_texture_e_handle) = (int)texture_logo_e_descriptor; TLobby__sub_8023E4B4(lbl_804349A0, texture_logo_e_descriptor); }
void request_exit__5TLogoFv(void) { queue_destruction__7TObjectFv(); TLogo__exit_requested_flag = 1; }

}

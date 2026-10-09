#include "types.h"

extern "C" {

void init_widgets__15TChCrCharSelectFv(void);
int create_default__19TChCrTagInformationFv(void);
int create_all__12TChCrTagNameFv(void);
int create_all_ch_cr_tag_headers(void);
int create_all__18TChCrTagOccupationFv(void);
int create_matching_tags__17TChCrTagPlGraphicFv(void);
int create_default__14TChCrTagPlBackFv(void);

void init_widgets__15TChCrCharSelectFv(void) { create_all__18TChCrTagOccupationFv(); create_all__12TChCrTagNameFv(); create_all_ch_cr_tag_headers(); create_default__14TChCrTagPlBackFv(); create_matching_tags__17TChCrTagPlGraphicFv(); create_default__19TChCrTagInformationFv(); }

}

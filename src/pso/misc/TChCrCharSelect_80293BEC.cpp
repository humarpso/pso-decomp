#include "types.h"

extern "C" {

void init_widgets__15TChCrCharSelectFv(void);
int TChCrTagInformation__sub_802A2058(void);
int TChCrTagName__sub_802A29C4(void);
int create_all_ch_cr_tag_headers(void);
int TChCrTagOccupation__sub_802A30FC(void);
int TChCrTagPlGraphic__sub_802A3534(void);
int create_default__14TChCrTagPlBackFv(void);

void init_widgets__15TChCrCharSelectFv(void) { TChCrTagOccupation__sub_802A30FC(); TChCrTagName__sub_802A29C4(); create_all_ch_cr_tag_headers(); create_default__14TChCrTagPlBackFv(); TChCrTagPlGraphic__sub_802A3534(); TChCrTagInformation__sub_802A2058(); }

}

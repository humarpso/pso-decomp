extern "C" {
    int memset(void*, void*, void*);
    extern unsigned char TQuestListOnline__data_80513DE8[];
    extern unsigned char TQuestListOnline__data_80513E24[];
    extern int TQuestListOnline__data_805D6198;
    extern int TQuestListOnline__data_805D619C;
    extern int TQuestListOnline__data_805D61A0;
    extern int TQuestListOnline__data_805D61A4;
    extern int TQuestListOnline__data_805D61A8;
    extern int lbl_805D61AC;
    extern int lbl_805D61B0;
    extern int lbl_805D61B4;
void reset_globals(void) { TQuestListOnline__data_805D61A0 = 0; TQuestListOnline__data_805D61A4 = 0; TQuestListOnline__data_805D61A8 = 0; lbl_805D61AC = 0; memset(TQuestListOnline__data_80513DE8, (void*)0, (void*)60); memset(TQuestListOnline__data_80513E24, (void*)0, (void*)60); TQuestListOnline__data_805D6198 = 0; TQuestListOnline__data_805D619C = 0; lbl_805D61B0 = 0; lbl_805D61B4 = 0; }
}

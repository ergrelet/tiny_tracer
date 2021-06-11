#pragma once
#include <iostream>

int getPidByThreadHndl(void* hndl);
int getPidByProcessHndl(void *hndl);

enum scan_res {
    SCAN_ERROR_1 = (-2),
    SCAN_ERROR_0 = (-1),
    SCAN_NOT_SUSPICIOUS = 0,
    SCAN_SUSPICIOUS = 1
};

scan_res ScanProcess(int pid, char out_dir[]);

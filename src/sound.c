#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include "sound.h"

void rogue_sound(const char *name)
{
    char path[64];
    snprintf(path, sizeof(path), "sound\\%s.wav", name);
    PlaySound(path, NULL, SND_FILENAME | SND_ASYNC);
}

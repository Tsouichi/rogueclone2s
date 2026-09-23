#include <windows.h>
#include <mmsystem.h>
#include "sound.h"

void rogue_sound_stairs(void)
{
    PlaySound("sound\\stairs.wav", NULL, SND_FILENAME | SND_ASYNC);
}

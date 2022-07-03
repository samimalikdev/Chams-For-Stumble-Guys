#include <pthread.h>
#include <jni.h>
#include <Substrate/SubstrateHook.h>
#include "Includes/Chams.h"

    bool chams, shading, wireframe, glow, outline, rainbow = false;
	
    const char *features[] = {
		    OBFUSCATE("999_Category_CHAMS FEATURES"), //Not counted
            OBFUSCATE("1_CheckBox_DEFAULT CHAMS"),
            OBFUSCATE("2_CheckBox_SHADING CHAMS"), 
            OBFUSCATE("3_CheckBox_WIREFRAME CHAMS"),
            OBFUSCATE("4_CheckBox_GLOW CHAMS"),
            OBFUSCATE("5_CheckBox_OUTLINE CHAMS"), 
            OBFUSCATE("6_CheckBox_RAINBOW CHAMS"), 
            OBFUSCATE("7_SeekBar_LINE WIDTH_0_12"),
            OBFUSCATE("8_SeekBar_COLOR RED_0_255"),
            OBFUSCATE("9_SeekBar_COLOR GREEN_0_255"),
            OBFUSCATE("10_SeekBar_COLOR BLUE_0_255"),
            };

    switch (feature) {
        case 1:
        chams = boolean;
        if (chams) {
        SetWallhack(true);
        } else {
        SetWallhack(false);
        }
        break;
        case 2:
        shading = boolean;
        if (shading) {
        SetWallhackS(true);
        } else {
        SetWallhackS(false);
        }
        break;
        case 3:
        wireframe = boolean;
        if (wireframe) {
        SetWallhackW(true);  
        } else {
        SetWallhackW(false);  
        }
        break;       
        case 4:
        glow = boolean;
        if (glow) {
        SetWallhackG(true);
        } else {
        SetWallhackG(false);
        }
        break;        
        case 5:
        outline = boolean;
        if (outline) {
        SetWallhackO(true); 
        } else {
        SetWallhackO(false);
        }
        break;        
        case 6:
        rainbow = boolean;
        if (rainbow) {
        SetRainbow(true);
        } else {
        SetRainbow(false);
        }
        break;      
        case 7:
        SetW(value);
        break;         
        case 8:
        SetR(value);
        break;
        case 9:
        SetG(value);
        break;
        case 10:
        SetB(value);
        break; 

void *hack_thread(void *) {
    
    ProcMap il2cppMap;
    do {
        il2cppMap = KittyMemory::getLibraryMap(libName);
        sleep(1);
    } while (!il2cppMap.isValid() && mlovinit());
    setShader("_SkinColor");
    LogShaders();
    Wallhack();
   
   return NULL;
}

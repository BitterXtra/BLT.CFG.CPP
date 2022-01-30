#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

#include "nlohmann/json.hpp"

#include "BLT.CFG.vars.h"
#include "BLT.CFG.langs.h"

using std::cout;
using std::string;
using std::cin;
using std::endl;

int parseInformation()
{
    if (c_RawMouse_Temp == "n" or c_RawMouse_Temp == "N") 
    {
        c_RawMouse = "m_rawinput 0";
    }
    else
    {
        c_RawMouse = "m_rawinput 1";
    }

    if (c_EnableVoiceChat_Temp == "n" or c_EnableVoiceChat_Temp == "N")
    {
        c_EnableVoiceChat = "voice_enable 0";
    }
    else
    {
        c_EnableVoiceChat = "voice_enable 1";
    }

    if (c_EnableTextChat_Temp == "n" or c_EnableTextChat_Temp == "N")
    {
        c_EnableTextChat = "cl_enable_text_chat 0";
    }
    else
    {
        c_EnableTextChat = "cl_enable_text_chat 1";
    }

    if (c_AutoReload_Temp == "n" or c_AutoReload_Temp == "N")
    {
        c_AutoReload = "cl_autoreload 0";
    }
    else
    {
        c_AutoReload = "cl_autoreload 1";
    }

    if (c_FastSwitch_Temp == "n" or c_FastSwitch_Temp == "N")
    {
        c_FastSwitch = "hud_fastswitch 0";
    }
    else
    {
        c_FastSwitch = "hud_fastswitch 1";
    }

    if (c_Hitsound_Temp == "n" or c_Hitsound_Temp == "N")
    {
        c_Hitsound = "tf_dingalingaling 0";
    }
    else
    {
        c_Hitsound = "tf_dingalingaling 1";
    }

    c_HitsoundVolume = "tf_dingaling_volume " + c_HitsoundVolume_Temp;
    c_HitsoundType = "tf_dingalingaling_effect " + c_HitsoundType_Temp;
    c_HitsoundLowDmgPitch = "tf_dingaling_pitchmindmg " + c_HitsoundLowDmgPitch_Temp;
    c_HitsoundHighDmgPitch = "tf_dingaling_pitchmaxdmg " + c_HitsoundHighDmgPitch_Temp;

    if (c_Killsound_Temp == "n" or c_Killsound == "N")
    {
        c_Killsound = "tf_dingalingaling_lasthit 0";
    }
    else
    {
        c_Killsound = "tf_dingalingaling_lasthit 1";
    }

    c_KillsoundVolume = "tf_dingaling_lasthit_volume " + c_KillsoundVolume_Temp;
    c_KillsoundType = "tf_dingalingaling_last_effect " + c_KillsoundType_Temp;
    c_KillsoundLowDmgPitch = "tf_dingaling_lasthit_pitchmindmg " + c_KillsoundLowDmgPitch_Temp;
    c_KillsoundHighDmgPitch = "tf_dingaling_lasthit_pitchmaxdmg " + c_KillsoundHighDmgPitch_Temp;

    if (c_Damage_Temp == "n" or c_Damage_Temp == "N")
    {
        c_Damage = "hud_combattext 0";
    }
    else
    {
        c_Damage = "hud_combattext 1";
    }

    if (c_DamageBatch_Temp == "n" or c_DamageBatch_Temp == "N")
    {
        c_DamageBatch = "hud_combattext_batching 0";
    }
    else
    {
        c_DamageBatch = "hud_combattext_batching 1";
    }

    if (c_DamageDontOverlap_Temp == "n" or c_DamageDontOverlap_Temp == "N")
    {
        c_DamageDontOverlap = "hud_combattext_doesnt_block_overhead_text 0";
    }
    else
    {
        c_DamageDontOverlap = "hud_combattext_doesnt_block_overhead_text 1";
    }

    c_DamageR = "hud_combattext_red " + c_DamageR_Temp;
    c_DamageG = "hud_combattext_green " + c_DamageG_Temp;
    c_DamageB = "hud_combattext_blue " + c_DamageB_Temp;

    if (c_RMBActive_Temp == "n" or c_RMBActive_Temp == "N")
    {
        c_RMBActive = "tf_remember_activeweapon 0";
    }
    else
    {
        c_RMBActive = "tf_remember_activeweapon 1";
    }

    if (c_RMBPrevious_Temp == "n" or  c_RMBPrevious_Temp == "N")
    {
        c_RMBPrevious = "tf_remember_lastswitched 0";
    }
    else
    {
        c_RMBPrevious = "tf_remember_lastswitched 1";
    }

    if (c_SniperRiflePing_Temp == "n" or c_SniperRiflePing_Temp == "N")
    {
        c_SniperRiflePing = "tf_sniper_fullcharge_bell 0";
    }
    else
    {
        c_SniperRiflePing = "tf_sniper_fullcharge_bell 1";
    }

    if (c_ConciseDisguise_Temp == "y" or c_ConciseDisguise_Temp == "Y")
    {
        c_ConciseDisguise = "tf_simple_disguise_menu 1";
    }
    else
    {
        c_ConciseDisguise = "tf_simple_disguise_menu 0";
    }

    if (c_SniperRifleRezoom_Temp == "n" or c_SniperRifleRezoom_Temp == "N")
    {
        c_SniperRifleRezoom = "cl_autorezoom 0";
    }
    else
    {
        c_SniperRifleRezoom = "cl_autorezoom 1";
    }

    if (c_SniperRifleHideCrosshair_Temp == "y" or c_SniperRifleHideCrosshair_Temp == "Y")
    {
        c_SniperRifleHideCrosshair = "tf_hud_no_crosshair_on_scope_zoom 1";
    }
    else
    {
        c_SniperRifleHideCrosshair = "tf_hud_no_crosshair_on_scope_zoom 0";
    }

    if (c_MedigunAutoheal_Temp == "n" or c_MedigunAutoheal_Temp == "N")
    {
        c_MedigunAutoheal = "tf_medigun_autoheal 0";
    }
    else
    {
        c_MedigunAutoheal = "tf_medigun_autoheal 1";
    }

    if (c_HealMarker_Temp == "y" or c_HealMarker_Temp == "Y")
    {
        c_HealMarker = "hud_medichealtargetmarker 1";
    }
    else
    {
        c_HealMarker = "hud_medichealtargetmarker 0";
    }

    if (c_HelpCallout_Temp == "y" or c_HelpCallout_Temp == "Y")
    {
        c_HelpCallout = "hud_medicautocallers 1";
    }
    else
    {
        c_HelpCallout = "hud_medicautocallers 0";
    }

    c_HelpCalloutPercentage = "hud_medicautocallersthreshold " + c_HelpCalloutPercentage_Temp;
    
    if (c_MiniHud_Temp == "y" or c_MiniHud_Temp == "Y")
    {
        c_MiniHud = "cl_hud_minmode 1";
    }
    else
    {
        c_MiniHud = "cl_hud_minmode 0";
    }

    if (c_Colorblind_Temp == "y" or c_Colorblind_Temp == "Y")
    {
        c_Colorblind = "tf_colorblindassist 1";
    }
    else
    {
        c_Colorblind = "tf_colorblindassist 0";
    }

    if (c_AdvSpecHud_Temp == "y" or c_AdvSpecHud_Temp == "Y")
    {
        c_AdvSpecHud = "cl_use_tournament_specgui 1";
    }
    else
    {
        c_AdvSpecHud = "cl_use_tournament_specgui 0";
    }

    if (c_ShowNonStandartItems_Temp == "n" or c_ShowNonStandartItems_Temp == "N")
    {
        c_ShowNonStandartItems = "cl_spec_carrieditems 0";
    }
    else
    {
        c_ShowNonStandartItems = "cl_spec_carrieditems 1";
    }

    if (c_GlowEffects_Temp == "n" or c_GlowEffects_Temp == "N")
    {
        c_GlowEffects = "glow_outline_effect_enable 0";
    }
    else
    {
        c_GlowEffects = "glow_outline_effect_enable 1";
    }

    if (c_GlowEffectsTeammateRespawn_Temp == "n" or c_GlowEffectsTeammateRespawn_Temp == "N")
    {
        c_GlowEffectsTeammateRespawn = "tf_enable_glows_after_respawn 0";
    }
    else
    {
        c_GlowEffectsTeammateRespawn = "tf_enable_glows_after_respawn 1";
    }
    
    if (c_3dPlayerModelHud_Temp == "y" or c_3dPlayerModelHud_Temp == "Y")
    {
        c_3dPlayerModelHud = "cl_hud_playerclass_use_playermodel 1";
    }
    else
    {
        c_3dPlayerModelHud = "cl_hud_playerclass_use_playermodel 0";
    }

    c_TargetID = "tf_spectator_target_location " + c_TargetID_Temp;

    if (c_HideHudDuringFreezecam_Temp == "y" or c_HideHudDuringFreezecam_Temp == "Y")
    {
        c_HideHudDuringFreezecam = "hud_freezecamhide 1";
    }
    else
    {
        c_HideHudDuringFreezecam = "hud_freezecamhide 0";
    }

    if (c_PyrovisionSpec_Temp == "y" or c_PyrovisionSpec_Temp == "Y")
    {
        c_PyrovisionSpec = "tf_spectate_pyrovision 1";
    }
    else
    {
        c_PyrovisionSpec = "tf_spectate_pyrovision 0";
    }

    c_PyrovisBorder = "pyro_vignette " + c_PyrovisBorder_Temp;

    if (c_PyrovisDistort_Temp == "n" or c_PyrovisDistort_Temp == "N")
    {
        c_PyrovisDistort = "pyro_vignette_distortion 0";
    }
    else
    {
        c_PyrovisDistort = "pyro_vignette_distortion 1";
    }
    
    if (c_PyrovisSkyboxDOF_Temp == "n" or c_PyrovisSkyboxDOF_Temp == "N")
    {
        c_PyrovisSkyboxDOF = "pyro_dof 0";
    }
    else
    {
        c_PyrovisSkyboxDOF = "pyro_dof 1";
    }

    if (c_Romevision_Temp == "n" or c_Romevision_Temp == "N")
    {
        c_Romevision = "tf_romevision_opt_in 0";
    }
    else
    {
        c_Romevision = "tf_romevision_opt_in 1";
    }

    if (c_DisableFloatingHealthBar_Temp == "y" or c_DisableFloatingHealthBar_Temp == "Y")
    {
        c_DisableFloatingHealthBar = "tf_hud_target_id_disable_floating_health 1";
    }
    else
    {
        c_DisableFloatingHealthBar = "tf_hud_target_id_disable_floating_health 0";
    }

    c_TargetIDAlpha = "tf_hud_target_id_alpha " + c_TargetIDAlpha_Temp;

    if (c_ContractsUI_Temp == "n" or c_ContractsUI_Temp == "N")
    {
        c_ContractsUI = "tf_contract_progress_show 0";
    }
    else
    {
        c_ContractsUI = "tf_contract_progress_show 2";
    }

    if (c_ContractsUIComp_Temp == "n" or c_ContractsUIComp_Temp == "N")
    {
        c_ContractsUIComp = "tf_contract_competitive_show 0";
    }
    else
    {
        c_ContractsUIComp = "tf_contract_competitive_show 2";
    }

    if (c_MouseOnScoreboard_Temp == "y" or c_MouseOnScoreboard_Temp == "Y")
    {
        c_MouseOnScoreboard = "tf_scoreboard_mouse_mode 1";
    }
    else
    {
        c_MouseOnScoreboard = "tf_scoreboard_mouse_mode 0";
    }

    if (c_PingAsText_Temp == "y" or c_PingAsText_Temp == "Y")
    {
        c_PingAsText = "tf_scoreboard_ping_as_text 1";
    }
    else
    {
        c_PingAsText = "tf_scoreboard_ping_as_text 0";
    }

    if (c_AlternateClass_Temp == "y" or c_AlternateClass_Temp == "Y")
    {
        c_AlternateClass = "tf_scoreboard_alt_class_icons 1";
    }
    else
    {
        c_AlternateClass = "tf_scoreboard_alt_class_icons 0";
    }

    if (c_TeamStatusDisplay_Temp == "n" or c_TeamStatusDisplay_Temp == "N")
    {
        c_TeamStatusDisplay = "tf_use_match_hud 0";
    }
    else
    {
        c_TeamStatusDisplay = "tf_use_match_hud 1";
    }

    if (c_DisableWeather_Temp == "y" or c_DisableWeather_Temp == "Y")
    {
        c_DisableWeather = "tf_particles_disable_weather 1";
    }
    else
    {
        c_DisableWeather = "tf_particles_disable_weather 0";
    }

    return 1;
}

int getOption() 
{
    system("cls");

    cout << s_EnableVoiceChat << endl;
    cin >> c_EnableVoiceChat_Temp;
    cout << s_EnableTextChat << endl;
    cin >> c_EnableTextChat_Temp;
    cout << s_AutoReload << endl;
    cin >> c_AutoReload_Temp;
    cout << s_FastSwitch << endl;
    cin >> c_FastSwitch_Temp;
    cout << s_Hitsound << endl;
    cin >> c_Hitsound_Temp;
    cout << s_HitsoundVolume << endl;
    cin >> c_HitsoundVolume_Temp;
    cout << s_HitsoundType << endl;
    //cin >> ;
    cout << s_HitsoundType1 << endl;
    //cin >> ;
    cout << s_HitsoundType2 << endl;
    //cin >> ;
    cout << s_HitsoundType3 << endl;
    //cin >> ;
    cout << s_HitsoundType4 << endl;
    //cin >> ;
    cout << s_HitsoundType5 << endl;
    //cin >> ;
    cout << s_HitsoundType6 << endl;
    //cin >> ;
    cout << s_HitsoundType7 << endl;
    //cin >> ;
    cout << s_HitsoundType8 << endl;
    //cin >> ;
    cout << s_HitsoundType9 << endl;
    cin >> c_HitsoundType_Temp;
    cout << s_HitsoundLowDmgPitch << endl;
    cin >> c_HitsoundLowDmgPitch_Temp;
    cout << s_HitsoundHighDmgPitch << endl;
    cin >> c_HitsoundHighDmgPitch_Temp;
    cout << s_Killsound << endl;
    cin >> c_Killsound_Temp;
    cout << s_KillsoundVolume << endl;
    cin >> c_KillsoundVolume_Temp;
    cout << s_KillsoundType << endl;
    //cin >> ;
    cout << s_KillsoundType1 << endl;
    //cin >> ;
    cout << s_KillsoundType2 << endl;
    //cin >> ;
    cout << s_KillsoundType3 << endl;
    //cin >> ;
    cout << s_KillsoundType4 << endl;
    //cin >> ;
    cout << s_KillsoundType5 << endl;
    //cin >> ;
    cout << s_KillsoundType6 << endl;
    //cin >> ;
    cout << s_KillsoundType7 << endl;
    //cin >> ;
    cout << s_KillsoundType8 << endl;
    //cin >> ;
    cout << s_KillsoundType9 << endl;
    cin >> c_KillsoundType_Temp;
    cout << s_KillsoundLowDmgPitch << endl;
    cin >> c_KillsoundLowDmgPitch_Temp;
    cout << s_KillsoundHighDmgPitch << endl;
    cin >> c_KillsoundHighDmgPitch_Temp;
    cout << s_Damage << endl;
    cin >> c_Damage_Temp;
    cout << s_DamageBatch << endl;
    cin >> c_DamageBatch_Temp;
    cout << s_DamageDontOverlap << endl;
    cin >> c_DamageDontOverlap_Temp;
    cout << s_DamageR << endl;
    cin >> c_DamageR_Temp;
    cout << s_DamageG << endl;
    cin >> c_DamageG_Temp;
    cout << s_DamageB << endl;
    cin >> c_DamageB_Temp;
    cout << s_RMBActive << endl;
    cin >> c_RMBActive_Temp;
    cout << s_RMBPrevious << endl;
    cin >> c_RMBPrevious_Temp;
    cout << s_SniperRiflePing << endl;
    cin >> c_SniperRiflePing_Temp;
    cout << s_ConciseDisguise << endl;
    cin >> c_ConciseDisguise_Temp;
    cout << s_SniperRifleRezoom << endl;
    cin >> c_SniperRifleRezoom_Temp;
    cout << s_SniperRifleHideCrosshair << endl;
    cin >> c_SniperRifleHideCrosshair_Temp;
    cout << s_MedigunAutoheal << endl;
    cin >> c_MedigunAutoheal_Temp;
    cout << s_HealMarker << endl;
    cin >> c_HealMarker_Temp;
    cout << s_HelpCallout << endl;
    cin >> c_HelpCallout_Temp;
    cout << s_HelpCalloutPercentage << endl;
    cin >> c_HelpCalloutPercentage_Temp;
    cout << s_MiniHud << endl;
    cin >> c_MiniHud_Temp;
    cout << s_Colorblind << endl;
    cin >> c_Colorblind_Temp;
    cout << s_AdvSpecHud << endl;
    cin >> c_AdvSpecHud_Temp;
    cout << s_ShowNonStandartItems << endl;
    cin >> c_ShowNonStandartItems_Temp;
    cout << s_GlowEffects << endl;
    cin >> c_GlowEffects_Temp;
    cout << s_GlowEffectsTeammateRespawn << endl;
    cin >> c_GlowEffectsTeammateRespawn_Temp;
    cout << s_3dPlayerModelHud << endl;
    cin >> c_3dPlayerModelHud_Temp;
    cout << s_TargetID << endl;
    cout << s_TargetID0 << endl;
    cout << s_TargetID1 << endl;
    cout << s_TargetID2 << endl;
    cout << s_TargetID3 << endl;
    cin >> c_TargetID_Temp;
    cout << s_HideHudDuringFreezecam << endl;
    cin >> c_HideHudDuringFreezecam_Temp;
    cout << s_PyrovisionSpec << endl;
    cin >> c_PyrovisionSpec_Temp;
    cout << s_PyrovisBorder << endl;
    cout << s_PyrovisBorderMode0 << endl;
    cout << s_PyrovisBorderMode1 << endl;
    cout << s_PyrovisBorderMode2 << endl;
    cin >> c_PyrovisBorder_Temp;
    cout << s_PyrovisDistort << endl;
    cin >> c_PyrovisDistort_Temp;
    cout << s_PyrovisSkyboxDOF << endl;
    cin >> c_PyrovisSkyboxDOF_Temp;
    cout << s_Romevision;
    cin >> c_Romevision_Temp;
    cout << s_DisableFloatingHealthBar << endl;
    cin >> c_DisableFloatingHealthBar_Temp;
    cout << s_TargetIDAlpha << endl;
    cin >> c_TargetIDAlpha_Temp;
    cout << s_ContractsUI << endl;
    cin >> c_ContractsUI_Temp;
    cout << s_ContractsUIComp << endl;
    cin >> c_ContractsUIComp_Temp;
    cout << s_MouseOnScoreboard << endl;
    cin >> c_MouseOnScoreboard_Temp;
    cout << s_PingAsText << endl;
    cin >> c_PingAsText_Temp;
    cout << s_AlternateClass << endl;
    cin >> c_AlternateClass_Temp;
    cout << s_TeamStatusDisplay << endl;
    cin >> c_TeamStatusDisplay_Temp;
    cout << s_DisableWeather << endl;
    cin >> c_DisableWeather_Temp;
    cout << s_DisableHTMLMotd << endl;
    cin >> c_DisableHTMLMotd_Temp;
    cout << s_Viewmodels << endl;
    cin >> c_Viewmodels_Temp;
    cout << s_ViewmodelsMini << endl;
    cin >> c_ViewmodelsMini_Temp;
    cout << s_ViewmodelsFOV << endl;
    cin >> c_ViewmodelsFOV_Temp;
    cout << s_ViewmodelsFlip << endl;
    cin >> c_ViewmodelsFlip_Temp;
    cout << s_RespawnOnLoadoutChange << endl;
    cin >> c_RespawnOnLoadoutChange_Temp;
    cout << s_SuicideOnClassChange << endl;
    cin >> c_SuicideOnClassChange_Temp;
    cout << s_DeleteTempOnShut << endl;
    cin >> c_DeleteTempOnShut_Temp;
    cout << s_CloseServerBrowserAfterConnect << endl;
    cin >> c_CloseServerBrowserAfterConnect_Temp;
    cout << s_SyncSteamCloud << endl;
    cin >> c_SyncSteamCloud_Temp;
    cout << s_ShowTradeRequests << endl;
    cout << s_ShowTradeRequests0 << endl;
    cout << s_ShowTradeRequests1 << endl;
    cout << s_ShowTradeRequests2 << endl;
    cout << s_ShowTradeRequests3 << endl;
    cin >> c_ShowTradeRequests;
    cout << s_RawMouse << endl;
    cin >> c_RawMouse_Temp;
    cout << s_Sensitivity << endl;
    cin >> c_Sensitivity_Temp;
    cout << s_AudioQuality << endl;
    cin >> c_AudioQuality_Temp;
    cout << s_ClosedCaption << endl;
    cin >> c_ClosedCaption_Temp;
    cout << s_SilenceOnBackground << endl;
    cin >> c_SilenceOnBackground_Temp;
    cout << s_MicrophoneGain << endl;
    cin >> c_MicrophoneGain_Temp;
    cout << s_NullcancelMove << endl;
    cin >> c_NullcancelMove_Temp;
    cout << s_Interp << endl;
    cin >> c_Interp_Temp;
    cout << s_InterpRatio << endl;
    cin >> c_InterpRatio_Temp;
    cout << s_CMDrate << endl;
    cin >> c_CMDrate_Temp;
    cout << s_UpdateRate << endl;
    cin >> c_UpdateRate_Temp;
    cout << s_Rate << endl;
    cin >> c_Rate_Temp;

    parseInformation();

    return 1;
}

int masterComfigQuality() 
{
    system("cls");

    cout << s_GraphicQuality << endl;
    cout << s_Mastercomfig_VeryLow << endl;
    cout << s_Mastercomfig_Low << endl;
    cout << s_Mastercomfig_MediumLow << endl;
    cout << s_Mastercomfig_Medium << endl;
    cout << s_Mastercomfig_MediumHigh << endl;
    cout << s_Mastercomfig_High << endl;
    cout << s_Mastercomfig_Ultra << endl;
    cout << s_GraphicEndText;
    cin >> c_GQuality;

    b_Mastercomfig = true;

    getOption();

    return 1;
}

int comangliaQuality()
{
    system("cls");

    cout << s_Comanglia_Toaster << endl;
    cout << s_Comanglia_Stability << endl;
    cout << s_Comanglia_Cinema << endl;
    cout << s_GraphicEndText;
    cin >> c_GQuality;

    b_Comanglia = true;

    getOption();

    return 1;
}

int m0reQuality()
{
    // Has No Options
    b_M0re = true;

    getOption();

    return 1;
}

int b4nnyQuality()
{
    // Has No Options
    b_B4nny = true;

    getOption();

    return 1;
}

int chrisQuality()
{
    // Has No Options
    b_Chris = true;

    getOption();

    return 1;
}

int rhapsodyQuality()
{
    // Has No Options
    b_Rhapsody = true;

    getOption();

    return 1;
}

int noneQuality()
{
    // Has No Options
    b_None = true;

    getOption();

    return 1;
}

int setGraphicConfig()
{
    cout << s_SelectGraphic << endl;
    cout << "1) Mastercomfig" << endl;
    cout << "2) Comanglia" << endl;
    cout << "3) M0re Config" << endl;
    cout << "4) B4nny Config" << endl;
    cout << "5) Chris Maxframes Config" << endl;
    cout << "6) Rhapsody's Config" << endl;
    cout << s_GraphicNone << endl;
    cout << s_GraphicEndText;
    cin >> c_GraphicConfig;

    if (c_GraphicConfig == "1")
    {
        masterComfigQuality();
    }
    else if (c_GraphicConfig == "2") 
    {
        comangliaQuality();
    }
    else if (c_GraphicConfig == "3")
    {
        m0reQuality();
    }
    else if (c_GraphicConfig == "4")
    {
        b4nnyQuality();
    }
    else if (c_GraphicConfig == "5")
    {
        rhapsodyQuality();
    }
    else
    {
        noneQuality();
    }

    return 1;
}

int setConfigName()
{
    cout << s_CFGName;
    cin >> c_Name_Temp;
    
    if (c_Name_Temp == "") 
    {
        c_Name = "New Config";
    }
    else
    {
        c_Name = c_Name_Temp;
    }

    system("cls");

    setGraphicConfig();

    return 1;
}

int loadFromFile() 
{
    setConfigName(); //placeholder
    return 1;
}

int start()
{
    //Variables
    //Moved To BLT.CFG.vars.h

    //Function
    
    cout << s_Start1 << endl;
    cout << s_Start2 << endl;
    cout << s_Start3 << endl;
    cout << s_Start4 << endl;
    cout << s_Start5 << endl;
    cout << s_Start6 << endl;
    cout << s_Start7 << endl;
    cout << s_StartWarning << endl;
    //cout << s_Ready1 << endl;
    cout << s_SelectStart << endl;
    cin >> c_SelectStart;
    //_getch();
    system("cls");
    //setConfigName();
    if (c_SelectStart == "2")
    {
        loadFromFile();
    }
    else 
    {
        setConfigName();
    }

    return 1;
}

int main()
{
    system("color 17");
    cout << s_LanguageSelect_Default << endl;
    cout << s_LanguageSupported_Default << endl;
    cout << "1) English (Default)" << endl;
    cout << "2) Turkce" << endl;
    cout << s_GraphicEndText_Eng;
    cin >> c_Language;

    if (c_Language == "2")
    {
        s_Start1 = s_Start1_Tr;
        s_Start2 = s_Start2_Tr;
        s_Start3 = s_Start3_Tr;
        s_Start4 = s_Start4_Tr;
        s_Start5 = s_Start5_Tr;
        s_Start6 = s_Start6_Tr;
        s_Start7 = s_Start7_Tr;
        s_Ready1 = s_Ready1_Tr;
        s_CFGName = s_CFGName_Tr;
        s_SelectGraphic = s_SelectGraphic_Tr;
        s_GraphicEndText = s_GraphicEndText_Tr;
        s_GraphicNone = s_GraphicNone_Tr;
        s_Mastercomfig_High = s_Mastercomfig_High_Tr;
        s_Mastercomfig_Low = s_Mastercomfig_Low_Tr;
        s_Mastercomfig_Medium = s_Mastercomfig_Medium_Tr;
        s_Mastercomfig_MediumHigh = s_Mastercomfig_MediumHigh_Tr;
        s_Mastercomfig_MediumLow = s_Mastercomfig_MediumLow_Tr;
        s_Mastercomfig_Ultra = s_Mastercomfig_Ultra_Tr;
        s_Mastercomfig_VeryLow = s_Mastercomfig_VeryLow_Tr;
        s_GraphicQuality = s_GraphicQuality_Tr;
        s_Comanglia_Cinema = s_Comanglia_Cinema_Tr;
        s_Comanglia_Stability = s_Comanglia_Stability_Tr;
        s_Comanglia_Toaster = s_Comanglia_Toaster_Tr;
        s_EnableVoiceChat = s_EnableVoiceChat_Tr;
        s_EnableTextChat = s_EnableTextChat_Tr;
        s_AutoReload = s_AutoReload_Tr;
        s_FastSwitch = s_FastSwitch_Tr;
        s_Hitsound = s_Hitsound_Tr;
        s_HitsoundVolume = s_HitsoundVolume_Tr;
        s_HitsoundType = s_HitsoundType_Tr;
        s_HitsoundType1 = s_HitsoundType1_Tr;
        s_HitsoundType2 = s_HitsoundType2_Tr;
        s_HitsoundType3 = s_HitsoundType3_Tr;
        s_HitsoundType4 = s_HitsoundType4_Tr;
        s_HitsoundType5 = s_HitsoundType5_Tr;
        s_HitsoundType6 = s_HitsoundType6_Tr;
        s_HitsoundType7 = s_HitsoundType7_Tr;
        s_HitsoundType8 = s_HitsoundType8_Tr;
        s_HitsoundType9 = s_HitsoundType9_Tr;
        s_HitsoundLowDmgPitch = s_HitsoundLowDmgPitch_Tr;
        s_HitsoundHighDmgPitch = s_HitsoundHighDmgPitch_Tr;
        s_Killsound = s_Killsound_Tr;
        s_KillsoundVolume = s_KillsoundVolume_Tr;
        s_KillsoundType = s_KillsoundType_Tr;
        s_KillsoundType1 = s_KillsoundType1_Tr;
        s_KillsoundType2 = s_KillsoundType2_Tr;
        s_KillsoundType3 = s_KillsoundType3_Tr;
        s_KillsoundType4 = s_KillsoundType4_Tr;
        s_KillsoundType5 = s_KillsoundType5_Tr;
        s_KillsoundType6 = s_KillsoundType6_Tr;
        s_KillsoundType7 = s_KillsoundType7_Tr;
        s_KillsoundType8 = s_KillsoundType8_Tr;
        s_KillsoundType9 = s_KillsoundType9_Tr;
        s_KillsoundLowDmgPitch = s_KillsoundLowDmgPitch_Tr;
        s_KillsoundHighDmgPitch = s_KillsoundHighDmgPitch_Tr;
        s_Damage = s_Damage_Tr;
        s_DamageBatch = s_DamageBatch_Tr;
        s_DamageDontOverlap = s_DamageDontOverlap_Tr;
        s_DamageR = s_DamageR_Tr;
        s_DamageG = s_DamageG_Tr;
        s_DamageB = s_DamageB_Tr;
        s_RMBActive = s_RMBActive_Tr;
        s_RMBPrevious = s_RMBPrevious_Tr;
        s_SniperRiflePing = s_SniperRiflePing_Tr;
        s_ConciseDisguise = s_ConciseDisguise_Tr;
        s_SniperRifleRezoom = s_SniperRifleRezoom_Tr;
        s_SniperRifleHideCrosshair = s_SniperRifleHideCrosshair_Tr;
        s_MedigunAutoheal = s_MedigunAutoheal_Tr;
        s_HealMarker = s_HealMarker_Tr;
        s_HelpCallout = s_HelpCallout_Tr;
        s_HelpCalloutPercentage = s_HelpCalloutPercentage_Tr;
        s_MiniHud = s_MiniHud_Tr;
        s_Colorblind = s_Colorblind_Tr;
        s_AdvSpecHud = s_AdvSpecHud_Tr;
        s_ShowNonStandartItems = s_ShowNonStandartItems_Tr;
        s_GlowEffects = s_GlowEffects_Tr;
        s_GlowEffectsTeammateRespawn = s_GlowEffectsTeammateRespawn_Tr;
        s_3dPlayerModelHud = s_3dPlayerModelHud_Tr;
        s_TargetID = s_TargetID_Tr;
        s_HideHudDuringFreezecam = s_HideHudDuringFreezecam_Tr;
        s_PyrovisionSpec = s_PyrovisionSpec_Tr;
        s_PyrovisBorder = s_PyrovisBorder_Tr;
        s_PyrovisBorderMode0 = s_PyrovisBorderMode0_Tr;
        s_PyrovisBorderMode1 = s_PyrovisBorderMode1_Tr;
        s_PyrovisBorderMode2 = s_PyrovisBorderMode2_Tr;
        s_PyrovisDistort = s_PyrovisDistort_Tr;
        s_PyrovisSkyboxDOF = s_PyrovisSkyboxDOF_Tr;
        s_Romevision = s_Romevision_Tr;
        s_DisableFloatingHealthBar = s_DisableFloatingHealthBar_Tr;
        s_TargetIDAlpha = s_TargetIDAlpha_Tr;
        s_ContractsUI = s_ContractsUI_Tr;
        s_ContractsUIComp = s_ContractsUIComp_Tr;
        s_MouseOnScoreboard = s_MouseOnScoreboard_Tr;
        s_PingAsText = s_PingAsText_Tr;
        s_AlternateClass = s_AlternateClass_Tr;
        s_TeamStatusDisplay = s_TeamStatusDisplay_Tr;
        s_DisableWeather = s_DisableWeather_Tr;
        s_DisableHTMLMotd = s_DisableHTMLMotd_Tr;
        s_Viewmodels = s_Viewmodels_Tr;
        s_ViewmodelsMini = s_ViewmodelsMini_Tr;
        s_ViewmodelsFOV = s_ViewmodelsFOV_Tr;
        s_ViewmodelsFlip = s_ViewmodelsFlip_Tr;
        s_RespawnOnLoadoutChange = s_RespawnOnLoadoutChange_Tr;
        s_SuicideOnClassChange = s_SuicideOnClassChange_Tr;
        s_DeleteTempOnShut = s_DeleteTempOnShut_Tr;
        s_CloseServerBrowserAfterConnect = s_CloseServerBrowserAfterConnect_Tr;
        s_SyncSteamCloud = s_SyncSteamCloud_Tr;
        s_ShowTradeRequests = s_ShowTradeRequests_Tr;
        s_ShowTradeRequests0 = s_ShowTradeRequests0_Tr;
        s_ShowTradeRequests1 = s_ShowTradeRequests1_Tr;
        s_ShowTradeRequests2 = s_ShowTradeRequests2_Tr;
        s_ShowTradeRequests3 = s_ShowTradeRequests3_Tr;
        s_RawMouse = s_RawMouse_Tr;
        s_Sensitivity = s_Sensitivity_Tr;
        s_AudioQuality = s_AudioQuality_Tr;
        s_ClosedCaption = s_ClosedCaption_Tr;
        s_SilenceOnBackground = s_SilenceOnBackground_Tr;
        s_MicrophoneGain = s_MicrophoneGain_Tr;
        s_NullcancelMove = s_NullcancelMove_Tr;
        s_Interp = s_Interp_Tr;
        s_InterpRatio = s_InterpRatio_Tr;
        s_CMDrate = s_CMDrate_Tr;
        s_UpdateRate = s_UpdateRate_Tr;
        s_Rate = s_Rate_Tr;
        s_SelectStart = s_SelectStart_Tr;
        s_StartWarning = s_StartWarning_Tr;
        s_TargetID0 = s_TargetID0_Tr;
        s_TargetID1 = s_TargetID1_Tr;
        s_TargetID2 = s_TargetID2_Tr;
        s_TargetID3 = s_TargetID3_Tr;
    }
    else
    {
        s_Start1 = s_Start1_Eng;
        s_Start2 = s_Start2_Eng;
        s_Start3 = s_Start3_Eng;
        s_Start4 = s_Start4_Eng;
        s_Start5 = s_Start5_Eng;
        s_Start6 = s_Start6_Eng;
        s_Start7 = s_Start7_Eng;
        s_Ready1 = s_Ready1_Eng;
        s_CFGName = s_CFGName_Eng;
        s_SelectGraphic = s_SelectGraphic_Eng;
        s_GraphicEndText = s_GraphicEndText_Eng;
        s_GraphicNone = s_GraphicNone_Eng;
        s_Mastercomfig_High = s_Mastercomfig_High_Eng;
        s_Mastercomfig_Low = s_Mastercomfig_Low_Eng;
        s_Mastercomfig_Medium = s_Mastercomfig_Medium_Eng;
        s_Mastercomfig_MediumHigh = s_Mastercomfig_MediumHigh_Eng;
        s_Mastercomfig_MediumLow = s_Mastercomfig_MediumLow_Eng;
        s_Mastercomfig_Ultra = s_Mastercomfig_Ultra_Eng;
        s_Mastercomfig_VeryLow = s_Mastercomfig_VeryLow_Eng;
        s_GraphicQuality = s_GraphicQuality_Eng;
        s_Comanglia_Cinema = s_Comanglia_Cinema_Eng;
        s_Comanglia_Stability = s_Comanglia_Stability_Eng;
        s_Comanglia_Toaster = s_Comanglia_Toaster_Eng;
        s_EnableVoiceChat = s_EnableVoiceChat_Eng;
        s_EnableTextChat = s_EnableTextChat_Eng;
        s_AutoReload = s_AutoReload_Eng;
        s_FastSwitch = s_FastSwitch_Eng;
        s_Hitsound = s_Hitsound_Eng;
        s_HitsoundVolume = s_HitsoundVolume_Eng;
        s_HitsoundType = s_HitsoundType_Eng;
        s_HitsoundType1 = s_HitsoundType1_Eng;
        s_HitsoundType2 = s_HitsoundType2_Eng;
        s_HitsoundType3 = s_HitsoundType3_Eng;
        s_HitsoundType4 = s_HitsoundType4_Eng;
        s_HitsoundType5 = s_HitsoundType5_Eng;
        s_HitsoundType6 = s_HitsoundType6_Eng;
        s_HitsoundType7 = s_HitsoundType7_Eng;
        s_HitsoundType8 = s_HitsoundType8_Eng;
        s_HitsoundType9 = s_HitsoundType9_Eng;
        s_HitsoundLowDmgPitch = s_HitsoundLowDmgPitch_Eng;
        s_HitsoundHighDmgPitch = s_HitsoundHighDmgPitch_Eng;
        s_Killsound = s_Killsound_Eng;
        s_KillsoundVolume = s_KillsoundVolume_Eng;
        s_KillsoundType = s_KillsoundType_Eng;
        s_KillsoundType1 = s_KillsoundType1_Eng;
        s_KillsoundType2 = s_KillsoundType2_Eng;
        s_KillsoundType3 = s_KillsoundType3_Eng;
        s_KillsoundType4 = s_KillsoundType4_Eng;
        s_KillsoundType5 = s_KillsoundType5_Eng;
        s_KillsoundType6 = s_KillsoundType6_Eng;
        s_KillsoundType7 = s_KillsoundType7_Eng;
        s_KillsoundType8 = s_KillsoundType8_Eng;
        s_KillsoundType9 = s_KillsoundType9_Eng;
        s_KillsoundLowDmgPitch = s_KillsoundLowDmgPitch_Eng;
        s_KillsoundHighDmgPitch = s_KillsoundHighDmgPitch_Eng;
        s_Damage = s_Damage_Eng;
        s_DamageBatch = s_DamageBatch_Eng;
        s_DamageDontOverlap = s_DamageDontOverlap_Eng;
        s_DamageR = s_DamageR_Eng;
        s_DamageG = s_DamageG_Eng;
        s_DamageB = s_DamageB_Eng;
        s_RMBActive = s_RMBActive_Eng;
        s_RMBPrevious = s_RMBPrevious_Eng;
        s_SniperRiflePing = s_SniperRiflePing_Eng;
        s_ConciseDisguise = s_ConciseDisguise_Eng;
        s_SniperRifleRezoom = s_SniperRifleRezoom_Eng;
        s_SniperRifleHideCrosshair = s_SniperRifleHideCrosshair_Eng;
        s_MedigunAutoheal = s_MedigunAutoheal_Eng;
        s_HealMarker = s_HealMarker_Eng;
        s_HelpCallout = s_HelpCallout_Eng;
        s_HelpCalloutPercentage = s_HelpCalloutPercentage_Eng;
        s_MiniHud = s_MiniHud_Eng;
        s_Colorblind = s_Colorblind_Eng;
        s_AdvSpecHud = s_AdvSpecHud_Eng;
        s_ShowNonStandartItems = s_ShowNonStandartItems_Eng;
        s_GlowEffects = s_GlowEffects_Eng;
        s_GlowEffectsTeammateRespawn = s_GlowEffectsTeammateRespawn_Eng;
        s_3dPlayerModelHud = s_3dPlayerModelHud_Eng;
        s_TargetID = s_TargetID_Eng;
        s_HideHudDuringFreezecam = s_HideHudDuringFreezecam_Eng;
        s_PyrovisionSpec = s_PyrovisionSpec_Eng;
        s_PyrovisBorder = s_PyrovisBorder_Eng;
        s_PyrovisBorderMode0 = s_PyrovisBorderMode0_Eng;
        s_PyrovisBorderMode1 = s_PyrovisBorderMode1_Eng;
        s_PyrovisBorderMode2 = s_PyrovisBorderMode2_Eng;
        s_PyrovisDistort = s_PyrovisDistort_Eng;
        s_PyrovisSkyboxDOF = s_PyrovisSkyboxDOF_Eng;
        s_Romevision = s_Romevision_Eng;
        s_DisableFloatingHealthBar = s_DisableFloatingHealthBar_Eng;
        s_TargetIDAlpha = s_TargetIDAlpha_Eng;
        s_ContractsUI = s_ContractsUI_Eng;
        s_ContractsUIComp = s_ContractsUIComp_Eng;
        s_MouseOnScoreboard = s_MouseOnScoreboard_Eng;
        s_PingAsText = s_PingAsText_Eng;
        s_AlternateClass = s_AlternateClass_Eng;
        s_TeamStatusDisplay = s_TeamStatusDisplay_Eng;
        s_DisableWeather = s_DisableWeather_Eng;
        s_DisableHTMLMotd = s_DisableHTMLMotd_Eng;
        s_Viewmodels = s_Viewmodels_Eng;
        s_ViewmodelsMini = s_ViewmodelsMini_Eng;
        s_ViewmodelsFOV = s_ViewmodelsFOV_Eng;
        s_ViewmodelsFlip = s_ViewmodelsFlip_Eng;
        s_RespawnOnLoadoutChange = s_RespawnOnLoadoutChange_Eng;
        s_SuicideOnClassChange = s_SuicideOnClassChange_Eng;
        s_DeleteTempOnShut = s_DeleteTempOnShut_Eng;
        s_CloseServerBrowserAfterConnect = s_CloseServerBrowserAfterConnect_Eng;
        s_SyncSteamCloud = s_SyncSteamCloud_Eng;
        s_ShowTradeRequests = s_ShowTradeRequests_Eng;
        s_ShowTradeRequests0 = s_ShowTradeRequests0_Eng;
        s_ShowTradeRequests1 = s_ShowTradeRequests1_Eng;
        s_ShowTradeRequests2 = s_ShowTradeRequests2_Eng;
        s_ShowTradeRequests3 = s_ShowTradeRequests3_Eng;
        s_RawMouse = s_RawMouse_Eng;
        s_Sensitivity = s_Sensitivity_Eng;
        s_AudioQuality = s_AudioQuality_Eng;
        s_ClosedCaption = s_ClosedCaption_Eng;
        s_SilenceOnBackground = s_SilenceOnBackground_Eng;
        s_MicrophoneGain = s_MicrophoneGain_Eng;
        s_NullcancelMove = s_NullcancelMove_Eng;
        s_Interp = s_Interp_Eng;
        s_InterpRatio = s_InterpRatio_Eng;
        s_CMDrate = s_CMDrate_Eng;
        s_UpdateRate = s_UpdateRate_Eng;
        s_Rate = s_Rate_Eng;
        s_SelectStart = s_SelectStart_Eng;
        s_StartWarning = s_StartWarning_Eng;
        s_TargetID0 = s_TargetID0_Eng;
        s_TargetID1 = s_TargetID1_Eng;
        s_TargetID2 = s_TargetID2_Eng;
        s_TargetID3 = s_TargetID3_Eng;
    }
    

    system("cls");
    start();
    return 1;
}

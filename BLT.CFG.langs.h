#include <iostream>
#include <string>

using std::string;

//Usable Vars

string s_Start1;
string s_Start2;
string s_Start3;
string s_Start4;
string s_Start5;
string s_Start6;
string s_Start7;
string s_Ready1;
string s_CFGName;
string s_SelectGraphic;
string s_GraphicNone;
string s_GraphicEndText;
string s_Mastercomfig_VeryLow;
string s_Mastercomfig_Low;
string s_Mastercomfig_MediumLow;
string s_Mastercomfig_Medium;
string s_Mastercomfig_MediumHigh;
string s_Mastercomfig_High;
string s_Mastercomfig_Ultra;
string s_GraphicQuality;
string s_Comanglia_Toaster;
string s_Comanglia_Stability;
string s_Comanglia_Cinema;

string s_EnableVoiceChat;
string s_EnableTextChat;
string s_AutoReload;
string s_FastSwitch;
string s_Hitsound;
string s_HitsoundVolume;
string s_HitsoundType;
string s_HitsoundType1;
string s_HitsoundType2;
string s_HitsoundType3;
string s_HitsoundType4;
string s_HitsoundType5;
string s_HitsoundType6;
string s_HitsoundType7;
string s_HitsoundType8;
string s_HitsoundType9;
string s_HitsoundLowDmgPitch;
string s_HitsoundHighDmgPitch;
string s_Killsound;
string s_KillsoundVolume;
string s_KillsoundType;
string s_KillsoundType1;
string s_KillsoundType2;
string s_KillsoundType3;
string s_KillsoundType4;
string s_KillsoundType5;
string s_KillsoundType6;
string s_KillsoundType7;
string s_KillsoundType8;
string s_KillsoundType9;
string s_KillsoundLowDmgPitch;
string s_KillsoundHighDmgPitch;
string s_Damage;
string s_DamageBatch;
string s_DamageDontOverlap;
string s_DamageR;
string s_DamageG;
string s_DamageB;
string s_RMBActive;
string s_RMBPrevious;
string s_SniperRiflePing;
string s_ConciseDisguise;
string s_SniperRifleRezoom;
string s_SniperRifleHideCrosshair;
string s_MedigunAutoheal;
string s_HealMarker;
string s_HelpCallout;
string s_HelpCalloutPercentage;
string s_MiniHud;
string s_Colorblind;
string s_AdvSpecHud;
string s_ShowNonStandartItems;
string s_GlowEffects;
string s_GlowEffectsTeammateRespawn;
string s_3dPlayerModelHud;
string s_TargetID;
string s_HideHudDuringFreezecam;
string s_PyrovisionSpec;
string s_PyrovisBorder;
string s_PyrovisBorderMode0;
string s_PyrovisBorderMode1;
string s_PyrovisBorderMode2;
string s_PyrovisDistort;
string s_PyrovisSkyboxDOF;
string s_Romevision;
string s_DisableFloatingHealthBar;
string s_TargetIDAlpha;
string s_ContractsUI;
string s_ContractsUIComp;
string s_MouseOnScoreboard;
string s_PingAsText;
string s_AlternateClass;
string s_TeamStatusDisplay;
string s_DisableWeather;
string s_DisableHTMLMotd;
string s_Viewmodels;
string s_ViewmodelsMini;
string s_ViewmodelsFOV;
string s_ViewmodelsFlip;
string s_RespawnOnLoadoutChange;
string s_SuicideOnClassChange;
string s_DeleteTempOnShut;
string s_CloseServerBrowserAfterConnect;
string s_SyncSteamCloud;
string s_ShowTradeRequests;
string s_ShowTradeRequests0;
string s_ShowTradeRequests1;
string s_ShowTradeRequests2;
string s_ShowTradeRequests3;
string s_RawMouse;
string s_Sensitivity;
string s_AudioQuality;
string s_ClosedCaption;
string s_SilenceOnBackground;
string s_MicrophoneGain;
string s_NullcancelMove;
string s_Interp;
string s_InterpRatio;
string s_CMDrate;
string s_UpdateRate;
string s_Rate;

//Defaults

string s_LanguageSelect_Default = "Select Language";
string s_LanguageSupported_Default = "Currently Supported Languages:";

//English

string s_Start1_Eng = "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-";
string s_Start2_Eng = "/-/-/-/-/-/-/-/BulutCorbaci's Config Generator/-/-/-/-/-/-/-/-";
string s_Start3_Eng = "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-";
string s_Start4_Eng = "/-/-/-/-/-/-LightWeight Local TF2 Config Generator/-/-/-/-/-/-";
string s_Start5_Eng = "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-";
string s_Start6_Eng = "/-/-/-/-/-/-/-/-/-/Generator Version v1.0.2-/-/-/-/-/-/-/-/-/-";
string s_Start7_Eng = "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-";
string s_Ready1_Eng = "Press Any Key to Continue";
string s_CFGName_Eng = "Select a Config Name: ";

string s_SelectGraphic_Eng = "Select a Graphics Config:";
string s_GraphicNone_Eng = "7) No Config (Default)";
string s_GraphicEndText_Eng = "Input: ";

string s_Mastercomfig_VeryLow_Eng = "1) Very Low Quality";
string s_Mastercomfig_Low_Eng = "2) Low Quality";
string s_Mastercomfig_MediumLow_Eng = "3) Medium Low Quality";
string s_Mastercomfig_Medium_Eng = "5) Medium Quality (Default)";
string s_Mastercomfig_MediumHigh_Eng = "6) Medium High Quality";
string s_Mastercomfig_High_Eng = "7) High Quality";
string s_Mastercomfig_Ultra_Eng = "8) Ultra Quality";

string s_GraphicQuality_Eng = "Select Quality:";

string s_Comanglia_Toaster_Eng = "1) Toaster Quality";
string s_Comanglia_Stability_Eng = "1) Stablity Enforced Quality (Default)";
string s_Comanglia_Cinema_Eng = "1) Cinema Quality";

string s_EnableVoiceChat_Eng = "Enable Voice Chat (Y/n):";
string s_EnableTextChat_Eng = "Enable Text Chat (Y/n):";
string s_AutoReload_Eng = "Enable Auto Reload (Y/n):";
string s_FastSwitch_Eng = "Enable Fast Weapon Switch (Y/n):";
string s_Hitsound_Eng = "Enable Hitsounds (Y/n):";
string s_HitsoundVolume_Eng = "Hitsound Volume (0 to 100):"; // dont forget to divide it by 100
string s_HitsoundType_Eng = "Hitsound Sound:";
string s_HitsoundType1_Eng = "0) Default";
string s_HitsoundType2_Eng = "1) Electro";
string s_HitsoundType3_Eng = "2) Notes";
string s_HitsoundType4_Eng = "3) Percussion";
string s_HitsoundType5_Eng = "4) Retro";
string s_HitsoundType6_Eng = "5) Space";
string s_HitsoundType7_Eng = "6) Beepo";
string s_HitsoundType8_Eng = "7) Vortex";
string s_HitsoundType9_Eng = "8) Squasher";
string s_HitsoundLowDmgPitch_Eng = "Hitsound Low Damage Pitch (1 to 255, Default 100):";
string s_HitsoundHighDmgPitch_Eng = "Hitsound High Damage Pitch (1 to 255, Default 100):";
string s_Killsound_Eng = "Enable Killsounds (Y/n):";
string s_KillsoundVolume_Eng = "Killsound Volume (0 to 100):"; // same with hitsound volume
string s_KillsoundType_Eng = "Killsound Sound:";
string s_KillsoundType1_Eng = "0) Default";
string s_KillsoundType2_Eng = "1) Electro";
string s_KillsoundType3_Eng = "2) Notes";
string s_KillsoundType4_Eng = "3) Percussion";
string s_KillsoundType5_Eng = "4) Retro";
string s_KillsoundType6_Eng = "5) Space";
string s_KillsoundType7_Eng = "6) Beepo";
string s_KillsoundType8_Eng = "7) Vortex";
string s_KillsoundType9_Eng = "8) Squasher";
string s_KillsoundLowDmgPitch_Eng = "Killsound Low Damage Pitch (1 to 255, Default 100):";
string s_KillsoundHighDmgPitch_Eng = "Killsound High Damage Pitch (1 to 255, Default 100):";
string s_Damage_Eng = "Enable Damage Numbers (Y/n):";
string s_DamageBatch_Eng = "Enable Damage Number Batching (Y/n):";
string s_DamageDontOverlap_Eng = "Disable Damage Overlapping Status Texts (such as. CRIT!) (Y/n):";
string s_DamageR_Eng = "Damage Text Red Value (0 to 255):";
string s_DamageG_Eng = "Damage Text Green Value (0 to 255):";
string s_DamageB_Eng = "Damage Text Blue Value (0 to 255):";
string s_RMBActive_Eng = "Remember Active Weapon Between Lives (Y/n):";
string s_RMBPrevious_Eng = "Remember Previous Weapon Between Lives (Y/n):";
string s_SniperRiflePing_Eng = "Play A Ping Sound When Sniper Rifle is Fully Charged (Y/n):";
string s_ConciseDisguise_Eng = "Enable Concise Disguise Menu (y/N):";
string s_SniperRifleRezoom_Eng = "Enable Sniper Rifle Rezoom (Y/n):";
string s_SniperRifleHideCrosshair_Eng = "Hide Crosshair When Zoomed in (y/N):";
string s_MedigunAutoheal_Eng = "Medigun Keeps Healing Even if Mouse1 isn't Hold (Y/n):";
string s_HealMarker_Eng = "Show Market Over Heal Target (y/N):";
string s_HelpCallout_Eng = "Teammates Automatically Callout For Medic (y/N):";
string s_HelpCalloutPercentage_Eng = "Auto Callout Percentage (Default 75):";
string s_MiniHud_Eng = "Enable Minimal Hud (y/N):";
string s_Colorblind_Eng = "Enable Colorblind Mode (y/N):";
string s_AdvSpecHud_Eng = "Use Advanced Spectator HUD (y/N):";
string s_ShowNonStandartItems_Eng = "Show Non-Standart Items In Spectator (Y/n):";
string s_GlowEffects_Eng = "Use Glow Effects (Y/n):";
string s_GlowEffectsTeammateRespawn_Eng = "Show Glow Around Teammates After Respawn (Y/n):";
string s_3dPlayerModelHud_Eng = "Use 3D Playermodel In The HUD (y/N):";
string s_TargetID_Eng = "Enable TargetID (Y/n):";
string s_HideHudDuringFreezecam_Eng = "Hide HUD During FreezeCam Screenshots (y/N):";
string s_PyrovisionSpec_Eng = "Enable Pyrovision on Spectator (y/N):";
string s_PyrovisBorder_Eng = "Pyrovision Border Mode (Default 0):";
string s_PyrovisBorderMode0_Eng = "0) Dynamic";
string s_PyrovisBorderMode1_Eng = "1) Static";
string s_PyrovisBorderMode2_Eng = "2) None";
string s_PyrovisDistort_Eng = "Pyrovision Border Distortion (Y/n):";
string s_PyrovisSkyboxDOF_Eng = "Pyrovision Skybox Depth of Field (Y/n):";
string s_Romevision_Eng = "Use Romevision When Available (Y/n):";
string s_DisableFloatingHealthBar_Eng = "TargetID Disable Floating Healthbar (y/N):";
string s_TargetIDAlpha_Eng = "TargetID Alpha (0 to 100, Default 100):";
string s_ContractsUI_Eng = "Show Contracts on Casual (Y/n):";
string s_ContractsUIComp_Eng = "Show Contracts on Competitive (Y/n):";
string s_MouseOnScoreboard_Eng = "Enable Mouse on Scoreboard (y/N):";
string s_PingAsText_Eng = "Show Ping as Text on Scoreboard (y/N):";
string s_AlternateClass_Eng = "Use Alternate Class Icons (y/N):";
string s_TeamStatusDisplay_Eng = "Enable Team Status Display On The HUD (Y/n):";
string s_DisableWeather_Eng = "Disable Weather Effects (y/N):";
string s_DisableHTMLMotd_Eng = "Disable HTML MOTDs (y/N):";
string s_Viewmodels_Eng = "Enable Viewmodels (Y/n):";
string s_ViewmodelsMini_Eng = "Use Minimized Viewmodels (Y/n):";
string s_ViewmodelsFOV_Eng = "Viewmodel FOV (Default 70):";
string s_ViewmodelsFlip_Eng = "Flip Viewmodels (y/N):";
string s_RespawnOnLoadoutChange_Eng = "AutoRespawn On Loadout Change (Y/n):";
string s_SuicideOnClassChange_Eng = "Suicide on Class Change (Y/n):";
string s_DeleteTempOnShut_Eng = "Delete Temp File On Shutdown (Y/n):";
string s_CloseServerBrowserAfterConnect_Eng = "Close Server Broser After Connecting To A Server (Y/n):";
string s_SyncSteamCloud_Eng = "Sync With Steam Cloud (Y/n):";
string s_ShowTradeRequests_Eng = "Show Trade Requests (Default 3)";
string s_ShowTradeRequests0_Eng = "0) Friends Only";
string s_ShowTradeRequests1_Eng = "1) Friends and InGame Players";
string s_ShowTradeRequests2_Eng = "2) No One";
string s_ShowTradeRequests3_Eng = "3) Anyone";
string s_RawMouse_Eng = "Use Raw Mouse Input (Y/n):";
string s_Sensitivity_Eng = "Mouse Sensitivity (Default 3):";
string s_AudioQuality_Eng = "High Audio Quality (y/N):";
string s_ClosedCaption_Eng = "Enable Closed Captions (y/N):";
string s_SilenceOnBackground_Eng = "Silence The Audio When The Game Is In The Background (Y/n):";
string s_MicrophoneGain_Eng = "Boost Microphone Gain (Y/n):";
string s_NullcancelMove_Eng = "Use NullCancelling Movement Script (Y/n):";
string s_Interp_Eng = "Set Interp (typing \"0\" is Recommended):";
string s_InterpRatio_Eng = "Set Interp Ratio (typing \"1\" is Recommended):";
string s_CMDrate_Eng = "Set CMD Rate (typing \"66\" is Recommended):";
string s_UpdateRate_Eng = "Set Update Rate (typing \"66\" is Recommended):";
string s_Rate_Eng = "Set Rate (typing \"196608\" is Recommended):";

//Turkish

string s_Start1_Tr = "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-";
string s_Start2_Tr = "/-/-/-/-/-BulutCorbaci'nin Konfigurasyon Olusturcusu/-/-/-/-/-";
string s_Start3_Tr = "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-";
string s_Start4_Tr = "/-/-/-/-/-Hafif Boyutlu Yerel TF2 Konfig Jeneratoru-/-/-/-/-/-";
string s_Start5_Tr = "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-";
string s_Start6_Tr = "/-/-/-/-/-/-/-/-/-Jenerator Versiyonu v1.0.2/-/-/-/-/-/-/-/-/-";
string s_Start7_Tr = "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-";
string s_Ready1_Tr = "Devam Etmek icin Herhangi Bir Dugmeye Basin";
string s_CFGName_Tr = "Konfigurasyon Ismi Secin: ";

string s_SelectGraphic_Tr = "Grafik Konfigurasyonu Secin:";
string s_GraphicNone_Tr = "7) Konfig Kullanma (Varsayilan)";
string s_GraphicEndText_Tr = "Giris: ";

string s_Mastercomfig_VeryLow_Tr = "1) Cok Dusuk Kalite";
string s_Mastercomfig_Low_Tr = "2) Dusuk Kalite";
string s_Mastercomfig_MediumLow_Tr = "3) Orta-Dusuk Kalite";
string s_Mastercomfig_Medium_Tr = "5) Orta Kalite (Varsayilan)";
string s_Mastercomfig_MediumHigh_Tr = "6) Orta-Yuksek Kalite";
string s_Mastercomfig_High_Tr = "7) Yuksek Kalite";
string s_Mastercomfig_Ultra_Tr = "8) Ultra Kalite";

string s_GraphicQuality_Tr = "Kalite Sec:";

string s_Comanglia_Toaster_Tr = "1) Tost Makinesi Kalitesi";
string s_Comanglia_Stability_Tr = "1) Denge Zorlanmis Kalite (Varsayilan)";
string s_Comanglia_Cinema_Tr = "1) Sinema Kalitesi";

string s_EnableVoiceChat_Tr = "Sesli Konusmayi Aktif Et (Y/n):";
string s_EnableTextChat_Tr = "Yazili Konusmayi Aktif Et (Y/n):";
string s_AutoReload_Tr = "Oto Yeniden Doldurmayi Aktif Et (Y/n):";
string s_FastSwitch_Tr = "Hizli Silah Degisimini Ektif Et (Y/n):";
string s_Hitsound_Tr = "Vurus Seslerini Aktif Et (Y/n):";
string s_HitsoundVolume_Tr = "Vurus Sesi Yuksekligi (0'dan 100'e):"; // dont forget to divide it by 100
string s_HitsoundType_Tr = "Vurus Sesi:";
string s_HitsoundType1_Tr = "0) Varsayilan";
string s_HitsoundType2_Tr = "1) Elektronik";
string s_HitsoundType3_Tr = "2) Notalar";
string s_HitsoundType4_Tr = "3) Perkusyon";
string s_HitsoundType5_Tr = "4) Retro";
string s_HitsoundType6_Tr = "5) Uzay";
string s_HitsoundType7_Tr = "6) Bipo";
string s_HitsoundType8_Tr = "7) Girdap";
string s_HitsoundType9_Tr = "8) Ezici";
string s_HitsoundLowDmgPitch_Tr = "Vurus Sesi Dusuk Hasar Tonu (1'den 255'e, Varsayilan 100):";
string s_HitsoundHighDmgPitch_Tr = "Vurus Sesi Yuksek Hasar Tonu (1'den 255'e, Varsayilan 100):";
string s_Killsound_Tr = "Oldurme Seslerini Aktif Et (Y/n):";
string s_KillsoundVolume_Tr = "Oldurme Sesi Yuksekligi (0'dan 100'e):"; // same with hitsound volume
string s_KillsoundType_Tr = "Oldurme Sesi:";
string s_KillsoundType1_Tr = "0) Varsayilan";
string s_KillsoundType2_Tr = "1) Elektronik";
string s_KillsoundType3_Tr = "2) Notalar";
string s_KillsoundType4_Tr = "3) Perkusyon";
string s_KillsoundType5_Tr = "4) Retro";
string s_KillsoundType6_Tr = "5) Uzay";
string s_KillsoundType7_Tr = "6) Bipo";
string s_KillsoundType8_Tr = "7) Girdap";
string s_KillsoundType9_Tr = "8) Ezici";
string s_KillsoundLowDmgPitch_Tr = "Oldurme Sesi Dusuk Hasar Tonu (1'den 255'e, Varsayilan 100):";
string s_KillsoundHighDmgPitch_Tr = "Killsound High Damage Pitch (1'den 255'e, Varsayilan 100):";
string s_Damage_Tr = "Hasar Numaralarini Aktif Et (Y/n):";
string s_DamageBatch_Tr = "Hasar Numaralarini Birlestir (Y/n):";
string s_DamageDontOverlap_Tr = "Hasarin Durum Yazilarinin Ustune Gecmesini Engelle (KRIT! gibi) (Y/n):";
string s_DamageR_Tr = "Hasar Numarasi Kirmizi (0'dan 255'e):";
string s_DamageG_Tr = "Hasar Numarasi Yesil (0'dan 255'e):";
string s_DamageB_Tr = "Hasar Numarasi Mavi (0'dan 255'e):";
string s_RMBActive_Tr = "Yasamlar Arasi Silahi Hatirla (Y/n):";
string s_RMBPrevious_Tr = "Yasamlar Arasi Onceki Silahi Hatirla (Y/n):";
string s_SniperRiflePing_Tr = "Keskin Nisanci Tufegi Full Sarjda Ping Sesi Oynatir (Y/n):";
string s_ConciseDisguise_Tr = "Basit Kilik Menusunu Aktif Et (y/N):";
string s_SniperRifleRezoom_Tr = "Keskin Nisanci Tufegi Yeniden Nisan Alma (Y/n):";
string s_SniperRifleHideCrosshair_Tr = "Nisan Alirken Arti Isaretini Sakla (y/N):";
string s_MedigunAutoheal_Tr = "Sihhi Silah Oto Iyilestirme (Y/n):";
string s_HealMarker_Tr = "Iyilestirme Hedefi Uzerinde Isaret Goster (y/N):";
string s_HelpCallout_Tr = "Takim Arkadaslari Otomatik Yardim Cagirir (y/N):";
string s_HelpCalloutPercentage_Tr = "Oto Cagirma Orani (Varsayilan 75):";
string s_MiniHud_Tr = "Minimal HUD'u Aktif Et (y/N):";
string s_Colorblind_Tr = "Renk Koru Modunu Aktif Et (y/N):";
string s_AdvSpecHud_Tr = "Gelismis Izleyici HUD'u Kullan (y/N):";
string s_ShowNonStandartItems_Tr = "Izleyicide Standart Olmayan Itemleri Goster (Y/n):";
string s_GlowEffects_Tr = "Parlama Efekti Kullan (Y/n):";
string s_GlowEffectsTeammateRespawn_Tr = "Dogduktan Sonra Takim Arkadaslarini Parlat (Y/n):";
string s_3dPlayerModelHud_Tr = "3 Boyutlu Oyuncu Modeli Kullan (y/N):";
string s_TargetID_Tr = "TargetID'yi Aktif Et (Y/n):";
string s_HideHudDuringFreezecam_Tr = "Donmus Ekran Goruntulerinde HUD'u Sakla (y/N):";
string s_PyrovisionSpec_Tr = "Izleyicide PyroVizyonu Aktif Et (y/N):";
string s_PyrovisBorder_Tr = "Pyrovizyon Kenar Modu (Varsayilan 0):";
string s_PyrovisBorderMode0_Tr = "0) Dinamik";
string s_PyrovisBorderMode1_Tr = "1) Statik";
string s_PyrovisBorderMode2_Tr = "2) Inaktif";
string s_PyrovisDistort_Tr = "Pyrovizyon Kenar Bozulmasi (Y/n):";
string s_PyrovisSkyboxDOF_Tr = "Pyrovizyon Gokyuzu Derinligi (Y/n):";
string s_Romevision_Tr = "Kullanilabilirken Romavizyon Kullan (Y/n):";
string s_DisableFloatingHealthBar_Tr = "TargetID Ucan Sagligi Sakla (y/N):";
string s_TargetIDAlpha_Tr = "TargetID Transparantligi (0'dan 100'e, Varsayilan 100):";
string s_ContractsUI_Tr = "Eglencede Gorevleri Goster (Y/n) : ";
string s_ContractsUIComp_Tr = "Rekabetcide Gorevleri Goster (Y/n):";
string s_MouseOnScoreboard_Tr = "Skor Tablosunda Mouse Kullan (y/N):";
string s_PingAsText_Tr = "Skor Tablosunda Ping'i Yazi Olarak Goster (y/N):";
string s_AlternateClass_Tr = "Alternatif Sinif Ikonlari Kullan (y/N):";
string s_TeamStatusDisplay_Tr = "Takim Status Efektini HUD'da Goster(Y/n):";
string s_DisableWeather_Tr = "Hava Efektlerini Kapat (y/N):";
string s_DisableHTMLMotd_Tr = "HTML MOTD'larini Kapat (y/N):";
string s_Viewmodels_Tr = "Viewmodelleri Aktif Et (Y/n):";
string s_ViewmodelsMini_Tr = "Minimize Viewmodel Kullan (Y/n):";
string s_ViewmodelsFOV_Tr = "Viewmodel Gorus Acisi (Varsayilan 70):";
string s_ViewmodelsFlip_Tr = "Viewmodelleri Cevir (y/N):";
string s_RespawnOnLoadoutChange_Tr = "Silahlik Degistiginde Yeniden Dog (Y/n):";
string s_SuicideOnClassChange_Tr = "Sinif Degisiminde Intihar Et (Y/n):";
string s_DeleteTempOnShut_Tr = "Kapatilmada Gecici Dosyalari Sil (Y/n):";
string s_CloseServerBrowserAfterConnect_Tr = "Sunucuya Baglandiktan Sonra Sunucu Listesini Kapat (Y/n):";
string s_SyncSteamCloud_Tr = "Steam Cloud ile Sabitle (Y/n):";
string s_ShowTradeRequests_Tr = "Show Trade Requests (Varsayilan 3)";
string s_ShowTradeRequests0_Tr = "0) Sadece Arkadaslar";
string s_ShowTradeRequests1_Tr = "1) Oyun Ici Oyuncular ve Arkadaslar";
string s_ShowTradeRequests2_Tr = "2) Kimse";
string s_ShowTradeRequests3_Tr = "3) Herkez";
string s_RawMouse_Tr = "Sade Mouse Girisi Kullan (Y/n):";
string s_Sensitivity_Tr = "Mouse Hassasligi (Varsayilan 3):";
string s_AudioQuality_Tr = "Yuksek Ses Kalitesi (y/N):";
string s_ClosedCaption_Tr = "Alt Yazilari Aktif Et (y/N):";
string s_SilenceOnBackground_Tr = "Oyun arkaplanda Iken Sessizlestir (Y/n):";
string s_MicrophoneGain_Tr = "Mikrofon Girisini Artir (Y/n):";
string s_NullcancelMove_Tr = "Haraket Iptalci Kodunu Kullan (Y/n):";
string s_Interp_Tr = "Interpi Ayarla (\"0\" yazmak tavsiye edilir):";
string s_InterpRatio_Tr = "Interp Oranini Ayarla (\"1\" yazmak tavsiye edilir):";
string s_CMDrate_Tr = "Komut Yenilenmesini Ayarla (\"66\" yazmak tavsiye edilir):";
string s_UpdateRate_Tr = "Yenilenme Oranini Ayarla (\"66\" yazmak tavsiye edilir):";
string s_Rate_Tr = "Yenilenmeyi Ayarla (\"196608\" yazmak tavsiye edilir):";
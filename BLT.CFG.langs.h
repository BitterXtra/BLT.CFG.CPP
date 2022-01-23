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
string s_HitsoundLowDmgPitch;
string s_HitsoundHighDmgPitch;
string s_Killsound;
string s_KillsoundVolume;
string s_KillsoundType;
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
string s_RawMouse;
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
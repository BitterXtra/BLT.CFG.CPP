#include <iostream>
#include <string>
#include <conio.h>

#include "BLT.CFG.vars.h"
#include "BLT.CFG.langs.h"

using std::cout;
using std::string;
using std::cin;
using std::endl;

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

    return 1;
}

int m0reQuality()
{
    // Has No Options
    return 1;
}

int b4nnyQuality()
{
    // Has No Options
    return 1;
}

int chrisQuality()
{
    // Has No Options
    return 1;
}

int rhapsodyQuality()
{
    // Has No Options
    return 1;
}

int noneQuality()
{
    // Has No Options
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
    cout << s_Ready1 << endl;
    _getch();
    system("cls");
    setConfigName();

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
    }
    

    system("cls");
    start();
    return 1;
}

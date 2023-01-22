//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: Ui_MainWindow.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "Ui_MainWindow.hpp"


// Declare the bitmap loading function
extern void wxCrafterbA4dhxInitBitmapResources();

static bool bBitmapLoaded = false;


Ui_MainWindow::Ui_MainWindow(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterbA4dhxInitBitmapResources();
        bBitmapLoaded = true;
    }
    // Set icon(s) to the application/dialog
    wxIconBundle app_icons;
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("appiconsmall"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    SetIcons( app_icons );

    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    
    menuMainWindow = new wxMenuBar(0);
    this->SetMenuBar(menuMainWindow);
    
    menuFile = new wxMenu();
    menuMainWindow->Append(menuFile, _("File"));
    
    menuItemNew = new wxMenuItem(menuFile, wxID_FILE_NEW, _("New\tCtrl+N"), wxT(""), wxITEM_NORMAL);
    menuItemNew->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("create_new")));
    menuFile->Append(menuItemNew);
    
    menuItemOpen = new wxMenuItem(menuFile, wxID_FILE_OPEN, _("Open\tCtrl+O"), wxT(""), wxITEM_NORMAL);
    menuItemOpen->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("datei")));
    menuFile->Append(menuItemOpen);
    
    menuRecentFiles = new wxMenu();
    menuFile->AppendSubMenu(menuRecentFiles, _("Recent Files"));
    
    menuRecentFiles->AppendSeparator();
    
    menuItemClearHistory = new wxMenuItem(menuRecentFiles, wxID_CLEAR_HISTORY, _("Clear History"), wxT(""), wxITEM_NORMAL);
    menuRecentFiles->Append(menuItemClearHistory);
    
    menuFile->AppendSeparator();
    
    menuItemFileClose = new wxMenuItem(menuFile, wxID_FILE_CLOSE, _("Close\tCtrl+W"), wxT(""), wxITEM_NORMAL);
    menuItemFileClose->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("close")));
    menuFile->Append(menuItemFileClose);
    
    menuFile->AppendSeparator();
    
    menuItemQuit = new wxMenuItem(menuFile, wxID_QUIT, _("Quit\tCtrl+Q"), wxT(""), wxITEM_NORMAL);
    menuItemQuit->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("quit")));
    menuFile->Append(menuItemQuit);
    
    menuEdit = new wxMenu();
    menuMainWindow->Append(menuEdit, _("Edit"));
    
    menuItemCut = new wxMenuItem(menuEdit, wxID_CUT, _("Cut\tCtrl+X"), wxT(""), wxITEM_NORMAL);
    menuItemCut->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("cut")));
    menuEdit->Append(menuItemCut);
    
    menuItemCopy = new wxMenuItem(menuEdit, wxID_COPY, _("Copy\tCtrl+C"), wxT(""), wxITEM_NORMAL);
    menuItemCopy->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("copy")));
    menuEdit->Append(menuItemCopy);
    
    menuItemPaste = new wxMenuItem(menuEdit, wxID_PASTE, _("Paste\tCtrl+V"), wxT(""), wxITEM_NORMAL);
    menuItemPaste->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("paste")));
    menuEdit->Append(menuItemPaste);
    
    menuItemSelectAll = new wxMenuItem(menuEdit, wxID_SELECTALL, _("Select all\tCtrl+A"), wxT(""), wxITEM_NORMAL);
    menuItemSelectAll->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("select_all")));
    menuEdit->Append(menuItemSelectAll);
    
    menuEdit->AppendSeparator();
    
    menuItemRename = new wxMenuItem(menuEdit, wxID_EDIT, _("Rename\tF2"), wxT(""), wxITEM_NORMAL);
    menuItemRename->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("edit")));
    menuEdit->Append(menuItemRename);
    
    menuItemDelete = new wxMenuItem(menuEdit, wxID_DELETE, _("Delete\tDel"), wxT(""), wxITEM_NORMAL);
    menuItemDelete->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("delete")));
    menuEdit->Append(menuItemDelete);
    
    menuEdit->AppendSeparator();
    
    menuItemAttributes = new wxMenuItem(menuEdit, wxID_ATTRIBUTES, _("Attributes\tF7"), wxT(""), wxITEM_NORMAL);
    menuItemAttributes->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("attributes")));
    menuEdit->Append(menuItemAttributes);
    
    menuItemProtections = new wxMenuItem(menuEdit, wxID_PROTECTIONS, _("Protections\tF9"), wxT(""), wxITEM_NORMAL);
    menuItemProtections->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("permissions")));
    menuEdit->Append(menuItemProtections);
    
    menuEdit->AppendSeparator();
    
    menuItemFormatCurrent = new wxMenuItem(menuEdit, wxID_CREATE_NEW, _("Format Current Image"), wxT(""), wxITEM_NORMAL);
    menuItemFormatCurrent->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("create_new")));
    menuEdit->Append(menuItemFormatCurrent);
    
    menuView = new wxMenu();
    menuMainWindow->Append(menuView, _("View"));
    
    menuItemRefresh = new wxMenuItem(menuView, wxID_REFRESH, _("Refresh\tF5"), wxT(""), wxITEM_NORMAL);
    menuItemRefresh->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("refresh")));
    menuView->Append(menuItemRefresh);
    
    menuTools = new wxMenu();
    menuMainWindow->Append(menuTools, _("Tools"));
    
    menuItemCheckImage = new wxMenuItem(menuTools, wxID_CHECK_IMAGE, _("Check Image\tF11"), wxT(""), wxITEM_NORMAL);
    menuItemCheckImage->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("check_image")));
    menuTools->Append(menuItemCheckImage);
    
    menuOptions = new wxMenu();
    menuMainWindow->Append(menuOptions, _("Options"));
    
    menuItemGeneralSettings = new wxMenuItem(menuOptions, wxID_GENERAL_SETTINGS, _("General Settings"), wxT(""), wxITEM_NORMAL);
    menuOptions->Append(menuItemGeneralSettings);
    
    menuItemCopySettings = new wxMenuItem(menuOptions, wxID_COPY_SETTINGS, _("Copy Settings"), wxT(""), wxITEM_NORMAL);
    menuOptions->Append(menuItemCopySettings);
    
    menuHelp = new wxMenu();
    menuMainWindow->Append(menuHelp, _("Help"));
    
    menuItemAbout = new wxMenuItem(menuHelp, wxID_ABOUT, _("About ..."), wxT(""), wxITEM_NORMAL);
    menuItemAbout->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("about")));
    menuHelp->Append(menuItemAbout);
    
    statusMainWindow = new wxStatusBar(this, wxID_ANY, wxSTB_DEFAULT_STYLE);
    statusMainWindow->SetFieldsCount(1);
    this->SetStatusBar(statusMainWindow);
    
    wxBoxSizer* sizerMainWindow = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(sizerMainWindow);
    
    panelImageFile = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxTAB_TRAVERSAL|wxBORDER_NONE);
    
    sizerMainWindow->Add(panelImageFile, 0, wxLEFT|wxRIGHT|wxEXPAND, WXC_FROM_DIP(4));
    
    wxGridBagSizer* sizerImage = new wxGridBagSizer(0, 0);
    panelImageFile->SetSizer(sizerImage);
    
    textImageType = new wxStaticText(panelImageFile, wxID_ANY, _("Image Type :"), wxDefaultPosition, wxDLG_UNIT(panelImageFile, wxSize(-1,-1)), 0);
    
    sizerImage->Add(textImageType, wxGBPosition(0,0), wxGBSpan(1,1), wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(4));
    
    wxBoxSizer* sizerImageType = new wxBoxSizer(wxHORIZONTAL);
    
    sizerImage->Add(sizerImageType, wxGBPosition(0,1), wxGBSpan(1,1), wxTOP|wxBOTTOM|wxEXPAND, WXC_FROM_DIP(4));
    
    editImageType = new wxTextCtrl(panelImageFile, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(panelImageFile, wxSize(-1,-1)), wxTE_READONLY);
    editImageType->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_3DLIGHT));
    #if wxVERSION_NUMBER >= 3000
    editImageType->SetHint(wxT(""));
    #endif
    
    sizerImageType->Add(editImageType, 1, wxEXPAND, WXC_FROM_DIP(2));
    
    sizerImageType->Add(0, 0, 3, wxALL, WXC_FROM_DIP(5));
    
    textImageFile = new wxStaticText(panelImageFile, wxID_ANY, _("Image File:"), wxDefaultPosition, wxDLG_UNIT(panelImageFile, wxSize(-1,-1)), 0);
    
    sizerImage->Add(textImageFile, wxGBPosition(1,0), wxGBSpan(1,1), wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(4));
    
    editImageFile = new wxTextCtrl(panelImageFile, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(panelImageFile, wxSize(-1,-1)), wxTE_READONLY);
    editImageFile->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_3DLIGHT));
    #if wxVERSION_NUMBER >= 3000
    editImageFile->SetHint(wxT(""));
    #endif
    
    sizerImage->Add(editImageFile, wxGBPosition(1,1), wxGBSpan(1,1), wxRIGHT|wxEXPAND, WXC_FROM_DIP(2));
    sizerImage->AddGrowableCol(1);
    panelImageViews = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxBORDER_NONE);
    
    sizerMainWindow->Add(panelImageViews, 1, wxBOTTOM|wxEXPAND, WXC_FROM_DIP(4));
    
    wxBoxSizer* sizerImageViews = new wxBoxSizer(wxVERTICAL);
    panelImageViews->SetSizer(sizerImageViews);
    
    splitterImageViews = new wxSplitterWindow(panelImageViews, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(panelImageViews, wxSize(-1,-1)), wxSP_LIVE_UPDATE|wxSP_NOBORDER);
    splitterImageViews->SetSashGravity(1);
    splitterImageViews->SetMinimumPaneSize(100);
    
    sizerImageViews->Add(splitterImageViews, 1, wxLEFT|wxRIGHT|wxTOP|wxEXPAND, WXC_FROM_DIP(4));
    
    splitterPageImageContents = new wxPanel(splitterImageViews, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(splitterImageViews, wxSize(-1,-1)), wxTAB_TRAVERSAL|wxBORDER_THEME);
    
    wxBoxSizer* sizerImageContents = new wxBoxSizer(wxVERTICAL);
    splitterPageImageContents->SetSizer(sizerImageContents);
    
    listImageContents = new CifeListView(splitterPageImageContents, wxID_IMAGE_CONTENTS, wxDefaultPosition, wxDLG_UNIT(splitterPageImageContents, wxSize(-1, -1)), wxLC_VRULES | wxLC_REPORT | wxBORDER_NONE);
    sizerImageContents->Add(listImageContents, 1, wxEXPAND, WXC_FROM_DIP(4));
    
    lineImageContents = new wxStaticLine(splitterPageImageContents, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(splitterPageImageContents, wxSize(1,1)), wxLI_HORIZONTAL);
    
    sizerImageContents->Add(lineImageContents, 0, wxEXPAND, WXC_FROM_DIP(5));
    lineImageContents->SetMinSize(wxSize(1,1));
    
    textContentsInfo = new wxTextCtrl(splitterPageImageContents, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(splitterPageImageContents, wxSize(-1,-1)), wxTE_READONLY|wxTE_NO_VSCROLL|wxTE_MULTILINE|wxBORDER_NONE);
    
    sizerImageContents->Add(textContentsInfo, 0, wxEXPAND, WXC_FROM_DIP(5));
    
    splitterPageMessages = new wxPanel(splitterImageViews, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(splitterImageViews, wxSize(-1,-1)), wxTAB_TRAVERSAL|wxBORDER_THEME);
    splitterImageViews->SplitHorizontally(splitterPageImageContents, splitterPageMessages, 100);
    
    wxBoxSizer* sizerMessages = new wxBoxSizer(wxVERTICAL);
    splitterPageMessages->SetSizer(sizerMessages);
    
    wxBoxSizer* sizerMessagesControl = new wxBoxSizer(wxHORIZONTAL);
    
    sizerMessages->Add(sizerMessagesControl, 0, wxLEFT|wxRIGHT|wxTOP|wxEXPAND, WXC_FROM_DIP(4));
    
    buttonClearMessages = new wxButton(splitterPageMessages, wxID_BUTTON_CLEAR_MESSAGES, _("Clear Messages"), wxDefaultPosition, wxDLG_UNIT(splitterPageMessages, wxSize(-1,-1)), 0);
    
    sizerMessagesControl->Add(buttonClearMessages, 0, 0, WXC_FROM_DIP(5));
    
    sizerMessagesControl->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));
    
    buttonSaveMessages = new wxButton(splitterPageMessages, wxID_BUTTON_SAVE_MESSAGES, _("SaveMessages"), wxDefaultPosition, wxDLG_UNIT(splitterPageMessages, wxSize(-1,-1)), 0);
    
    sizerMessagesControl->Add(buttonSaveMessages, 0, 0, WXC_FROM_DIP(5));
    
    lineTextMessages = new wxStaticLine(splitterPageMessages, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(splitterPageMessages, wxSize(-1,1)), wxLI_HORIZONTAL|wxBORDER_NONE);
    
    sizerMessages->Add(lineTextMessages, 0, wxTOP|wxEXPAND, WXC_FROM_DIP(5));
    lineTextMessages->SetMinSize(wxSize(-1,1));
    
    panelTextMessages = new wxPanel(splitterPageMessages, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(splitterPageMessages, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    panelTextMessages->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    
    sizerMessages->Add(panelTextMessages, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* sizerTextMessages = new wxBoxSizer(wxVERTICAL);
    panelTextMessages->SetSizer(sizerTextMessages);
    
    textMessages = new wxTextCtrl(panelTextMessages, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(panelTextMessages, wxSize(-1,-1)), wxTE_RICH|wxTE_READONLY|wxTE_MULTILINE|wxTE_DONTWRAP|wxBORDER_NONE);
    
    sizerTextMessages->Add(textMessages, 1, wxALL|wxEXPAND, WXC_FROM_DIP(4));
    
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    SetName(wxT("Ui_MainWindow"));
    SetSize(wxDLG_UNIT(this, wxSize(640,480)));
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
}

Ui_MainWindow::~Ui_MainWindow()
{
}

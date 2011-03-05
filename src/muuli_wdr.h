//------------------------------------------------------------------------------
// Header generated by wxDesigner from file: muuli.wdr
// Do not modify this file, all changes will be lost!
//------------------------------------------------------------------------------

#ifndef __WDR_muuli_H__
#define __WDR_muuli_H__

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma interface "muuli_wdr.h"
#endif

// Include wxWidgets' headers

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <wx/image.h>
#include <wx/statline.h>
#include <wx/spinbutt.h>
#include <wx/spinctrl.h>
#include <wx/splitter.h>
#include <wx/listctrl.h>
#include <wx/treectrl.h>
#include <wx/notebook.h>
#include <wx/grid.h>
#include <wx/toolbar.h>
#include <wx/tglbtn.h>

// Declare window functions

extern wxSizer *s_dlgcnt;
extern wxSizer *contentSizer;
extern wxSizer *s_fed2klh;
#define ID_BUTTON_FAST 10000
wxSizer *muleDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SRV_SPLITTER 10001
wxSizer *serverListDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *s_searchsizer;
#define IDC_SEARCHNAME 10002
#define ID_SEARCHTYPE 10003
#define IDC_EXTENDEDSEARCHCHECK 10004
#define IDC_FILTERCHECK 10005
extern wxSizer *s_extendedsizer;
#define IDC_TypeSearch 10006
#define ID_AUTOCATASSIGN 10007
#define IDC_EDITSEARCHEXTENSION 10008
#define IDC_SPINSEARCHMIN 10009
#define IDC_SEARCHMINSIZE 10010
#define IDC_SPINSEARCHMAX 10011
#define IDC_SEARCHMAXSIZE 10012
#define IDC_SPINSEARCHAVAIBILITY 10013
extern wxSizer *s_filtersizer;
#define ID_FILTER_TEXT 10014
#define ID_FILTER 10015
#define ID_FILTER_INVERT 10016
#define ID_FILTER_KNOWN 10017
#define IDC_STARTS 10018
#define IDC_SEARCHMORE 10019
#define IDC_CANCELS 10020
#define IDC_SDOWNLOAD 10021
#define IDC_SEARCH_RESET 10022
#define IDC_CLEAR_RESULTS 10023
#define ID_NOTEBOOK 10024
#define ID_SEARCHPROGRESS 10025
wxSizer *searchDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_BTNCLRCOMPL 10026
#define ID_CATEGORIES 10027
#define ID_DLOADLIST 10028
wxSizer *transferTopPane( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *s_clientlistHeader;
#define ID_CLIENTTOGGLE 10029
#define ID_CLIENTCOUNT 10030
#define ID_CLIENTLIST 10031
wxSizer *transferBottomPane( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_MESSAGESPLATTER 10032
wxSizer *messagePage( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_FNAME 10033
#define IDC_METFILE 10034
#define IDC_FHASH 10035
#define IDC_FSIZE 10036
#define IDC_PFSTATUS 10037
#define IDC_LASTSEENCOMPL 10038
#define IDC_SOURCECOUNT 10039
#define IDC_SOURCECOUNT2 10040
#define IDC_PARTCOUNT 10041
#define IDC_PARTAVAILABLE 10042
#define IDC_DATARATE 10043
#define IDC_DLACTIVETIME 10044
#define IDC_TRANSFERRED 10045
#define IDC_COMPLSIZE 10046
#define IDC_PROCCOMPL 10047
#define IDC_FD_STATS1 10048
#define IDC_FD_STATS2 10049
#define IDC_FD_STATS3 10050
#define IDC_LISTCTRLFILENAMES 10051
#define IDC_TAKEOVER 10052
#define IDC_CMTBT 10053
#define IDC_BUTTONSTRIP 10054
#define IDC_FILENAME 10055
#define IDC_APPLY 10056
#define IDC_APPLY_AND_CLOSE 10057
#define ID_CLOSEWNDFD 5100
wxSizer *fileDetails( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_CMT_TEXT 10058
#define IDC_FC_CLEAR 10059
#define IDC_RATELIST 10060
#define IDCOK 10061
#define IDCCANCEL 10062
wxSizer *commentDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_LST 10063
#define IDC_CMSTATUS 10064
#define IDCREF 10065
wxSizer *commentLstDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_ANIMATE 10066
#define ID_HTTPDOWNLOADPROGRESS 10067
#define IDC_DOWNLOADSIZE 10068
#define ID_HTTPCANCEL 5101
wxSizer *downloadDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_IPADDRESS 10069
#define ID_IPORT 10070
#define ID_USERNAME 10071
#define ID_USERHASH 10072
#define ID_ADDFRIEND 10073
#define ID_CLOSEDLG 10074
wxSizer *addFriendDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SHARESSPLATTER 10075
wxSizer *sharedfilesDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_DLOADSCOPE 10076
#define IDC_C0 10077
#define IDC_C0_3 10078
#define IDC_C0_2 10079
#define ID_ULOADSCOPE 10080
#define IDC_C1 10081
#define IDC_C1_3 10082
#define IDC_C1_2 10083
#define ID_OTHERS 10084
#define IDC_S3 10085
#define IDC_S0 10086
#define ID_ACTIVEC 10087
#define IDC_S1 10088
wxSizer *statsDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_DNAME 10089
#define ID_DHASH 10090
#define ID_DSOFT 10091
#define ID_DVERSION 10092
#define ID_DIP 10093
#define ID_DID 10094
#define ID_DSIP 10095
#define ID_DSNAME 10096
#define IDT_OBFUSCATION 10097
#define IDT_KAD 10098
#define ID_DDOWNLOADING 10099
#define ID_DAVDR 10100
#define ID_DAVUR 10101
#define ID_DDOWN 10102
#define ID_DDUP 10103
#define ID_DDOWNTOTAL 10104
#define ID_DUPTOTAL 10105
#define ID_DRATIO 10106
#define IDC_CDIDENT 10107
#define ID_QUEUERANK 10108
#define ID_DSCORE 10109
#define ID_CLOSEWND 10110
wxSizer *clientDetails( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_NICK 10111
#define IDC_LANGUAGE 10112
#define IDC_NEWVERSION 10113
#define IDC_STARTMIN 10114
#define IDC_EXIT 10115
#define IDC_ENABLETRAYICON 10116
#define IDC_MINTRAY 10117
#define IDC_TOOLTIPDELAY 10118
#define IDC_BROWSERSELF 10119
#define IDC_SELBROWSER 10120
#define IDC_BROWSERTABS 10121
#define IDC_VIDEOPLAYER 10122
#define IDC_BROWSEV 10123
#define IDC_PREVIEW_NOTE 10124
wxSizer *PreferencesGeneralTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_MAXDOWN 10125
#define IDC_MAXUP 10126
#define IDC_SLOTALLOC 10127
#define IDC_PORT 10128
#define ID_TEXT_CLIENT_UDP_PORT 10129
#define IDC_UDPENABLE 10130
#define IDC_UDPPORT 10131
#define IDC_UPNP_ENABLED 10132
#define IDC_UPNPTCPPORTTEXT 10133
#define IDC_UPNPTCPPORT 10134
#define IDC_ADDRESS 10135
#define ID_TEXT 10136
#define IDC_MAXSOURCEPERFILE 10137
#define IDC_MAXCON 10138
#define IDC_NETWORKKAD 10139
#define IDC_NETWORKED2K 10140
#define IDC_AUTOCONNECT 10141
#define IDC_RECONN 10142
wxSizer *PreferencesConnectionTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_REMOVEDEAD 10143
#define IDC_SERVERRETRIES 10144
#define IDC_AUTOSERVER 10145
#define IDC_EDITADR 10146
#define IDC_UPDATESERVERCONNECT 10147
#define IDC_UPDATESERVERCLIENT 10148
#define IDC_SCORE 10149
#define IDC_SMARTIDCHECK 10150
#define IDC_SAFESERVERCONNECT 10151
#define IDC_AUTOCONNECTSTATICONLY 10152
#define IDC_MANUALSERVERHIGHPRIO 10153
wxSizer *PreferencesServerTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_ICH 10154
#define IDC_AICHTRUST 10155
#define IDC_ADDNEWFILESPAUSED 10156
#define IDC_DAP 10157
#define IDC_PREVIEWPRIO 10158
#define IDC_STARTNEXTFILE 10159
#define IDC_STARTNEXTFILE_SAME 10160
#define IDC_STARTNEXTFILE_ALPHA 10161
#define IDC_ALLOCFULLFILE 10162
#define IDC_CHECKDISKSPACE 10163
#define IDC_MINDISKSPACE 10164
#define IDC_SRCSEEDS 10165
#define IDC_UAP 10166
wxSizer *PreferencesFilesTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_INCFILES 10167
#define IDC_SELINCDIR 10168
#define IDC_TEMPFILES 10169
#define IDC_SELTEMPDIR 10170
#define IDC_SHARESELECTOR 10171
#define IDC_SHAREHIDDENFILES 10172
wxSizer *PreferencesDirectoriesTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_SLIDERINFO 10173
#define IDC_SLIDER 10174
#define IDC_SLIDERINFO3 10175
#define IDC_SLIDER3 10176
#define IDC_SLIDERINFO4 10177
#define IDC_SLIDER4 10178
#define IDC_DOWNLOAD_CAP 10179
#define IDC_UPLOAD_CAP 10180
#define IDC_COLORSELECTOR 10181
#define IDC_COLOR_BUTTON 10182
#define IDC_SLIDERINFO2 10183
#define IDC_SLIDER2 10184
#define IDC_CLIENTVERSIONS 10185
wxSizer *PreferencesStatisticsTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_AMULE_TWEAKS_WARNING 10186
#define IDC_MAXCON5SEC 10187
#define IDC_FILEBUFFERSIZE_STATIC 10188
#define IDC_FILEBUFFERSIZE 10189
#define IDC_QUEUESIZE_STATIC 10190
#define IDC_QUEUESIZE 10191
#define IDC_SERVERKEEPALIVE_LABEL 10192
#define IDC_SERVERKEEPALIVE 10193
#define IDC_PREVENT_SLEEP 10194
wxSizer *PreferencesaMuleTweaksTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_SKIN 10195
#define IDC_FED2KLH 10196
#define IDC_EXTCATINFO 10197
#define IDC_SHOWRATEONTITLE 10198
#define IDC_RATESBEFORETITLE 10199
#define IDC_RATESAFTERTITLE 10200
#define IDC_SHOWOVERHEAD 10201
#define IDC_VERTTOOLBAR 10202
#define IDC_SHOW_COUNTRY_FLAGS 10203
#define IDC_PERCENT 10204
#define IDC_PROGBAR 10205
#define IDC_3DDEPTH 10206
#define IDC_AUTOSORT 10207
wxSizer *PreferencesGuiTweaksTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_EXT_CONN_ACCEPT 10208
#define IDC_EXT_CONN_IP 10209
#define IDC_EXT_CONN_TCP_PORT 10210
#define IDC_UPNP_EC_ENABLED 10211
#define IDC_EXT_CONN_PASSWD 10212
#define IDC_ENABLE_WEB 10213
#define IDC_WEBTEMPLATE 10214
#define IDC_WEB_PASSWD 10215
#define IDC_ENABLE_WEB_LOW 10216
#define IDC_WEB_PASSWD_LOW 10217
#define IDC_WEB_PORT 10218
#define IDC_UPNP_WEBSERVER_ENABLED 10219
#define IDC_WEBUPNPTCPPORTTEXT 10220
#define IDC_WEBUPNPTCPPORT 10221
#define IDC_WEB_REFRESH_TIMEOUT 10222
#define IDC_WEB_GZIP 10223
wxSizer *PreferencesRemoteControlsTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *prefs_sizer;
#define ID_PREFSLISTCTRL 10224
#define ID_PREFS_OK_TOP 10225
#define ID_PREFS_CANCEL_TOP 10226
wxSizer *preferencesDlgTop( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_TITLE 10227
#define IDC_COMMENT 10228
#define IDC_INCOMING 10229
#define IDC_BROWSE 10230
#define IDC_PRIOCOMBO 10231
#define ID_BOX_CATCOLOR 10232
#define IDC_CATCOLOR 10233
wxSizer *CategoriesEditWindow( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_DOWNLOADSSPLATTER 10234
wxSizer *transferDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SERVERINFO 10235
#define ID_BTN_RESET_SERVER 10236
wxSizer *ServerInfoLog( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_LOGVIEW 10237
#define ID_BTN_RESET 10238
wxSizer *aMuleLog( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_UPDATELIST 10239
#define IDC_SERVERLISTURL 10240
#define IDC_SERVERNAME 10241
#define IDC_IPADDRESS 10242
#define IDC_SPORT 10243
#define ID_ADDTOLIST 10244
#define IDC_ED2KDISCONNECT 10245
#define ID_SERVERLIST 10246
wxSizer *serverListDlgUp( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SRVLOG_NOTEBOOK 10247
wxSizer *serverListDlgDown( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_UPDATEKADLIST 10248
#define IDC_NODESLISTURL 10249
#define ID_KADSCOPE 10250
#define ID_NODE_IP1 10251
#define ID_NODE_IP2 10252
#define ID_NODE_IP3 10253
#define ID_NODE_IP4 10254
#define ID_NODE_PORT 10255
#define ID_NODECONNECT 10256
#define ID_KNOWNNODECONNECT 10257
#define ID_KADDISCONNECT 10258
wxSizer *KadDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_ED2KINFO 10259
wxSizer *ED2K_Info( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_SECIDENT 10260
#define IDC_SUPPORT_PO 10261
#define IDC_ENABLE_PO_OUTGOING 10262
#define IDC_ENFORCE_PO_INCOMING 10263
#define IDC_SEESHARES 10264
#define IDC_IPFCLIENTS 10265
#define IDC_IPFSERVERS 10266
#define IDC_IPFRELOAD 10267
#define IDC_IPFILTERURL 10268
#define IDC_IPFILTERUPDATE 10269
#define IDC_AUTOIPFILTER 10270
#define ID_IPFILTERLEVEL 10271
#define IDC_FILTERLAN 10272
#define IDC_PARANOID 10273
#define IDC_IPFILTERSYS 10274
wxSizer *PreferencesSecurityTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_ONLINESIG 10275
#define IDC_OSUPDATE 10276
#define IDC_OSDIR 10277
#define IDC_SELOSDIR 10278
wxSizer *PreferencesOnlineSigTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_MSGFILTER 10279
#define IDC_MSGFILTER_ALL 10280
#define IDC_MSGFILTER_NONFRIENDS 10281
#define IDC_MSGFILTER_NONSECURE 10282
#define IDC_MSGFILTER_WORD 10283
#define IDC_MSGWORD 10284
#define IDC_MSGLOG 10285
#define IDC_FILTERCOMMENTS 10286
#define IDC_COMMENTWORD 10287
wxSizer *PreferencesFilteringTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_PROXY_AUTO_SERVER_CONNECT_WITHOUT_PROXY 10288
#define ID_PROXY_ENABLE_PASSWORD 10289
#define ID_PROXY_USER 10290
#define ID_PROXY_PASSWORD 10291
#define ID_PROXY_ENABLE_PROXY 10292
#define ID_PROXY_TYPE 10293
#define ID_PROXY_NAME 10294
#define ID_PROXY_PORT 10295
wxSizer *PreferencesProxyTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_REMOTE_HOST 10296
#define ID_REMOTE_PORT 10297
#define ID_EC_LOGIN 10298
#define ID_EC_PASSWD 10299
#define ID_EC_SAVE 10300
wxSizer *CoreConnect( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_VERBOSEDEBUG 10301
#define ID_DEBUGCATS 10302
wxSizer *PreferencesDebug( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *IDC_CURJOB;
#define IDC_CONV_PB_LABEL 10303
#define IDC_CONV_PROZENT 10304
#define IDC_CONV_PB_CURRENT 10305
#define IDC_JOBLIST 10306
#define IDC_ADDITEM 10307
#define IDC_RETRY 10308
#define IDC_CONVREMOVE 10309
wxSizer *convertDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_KADINFO 10310
wxSizer *Kad_Info( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *m_networknotebooksizer;
#define ID_NETNOTEBOOK 10311
wxSizer *NetDialog( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *IDC_PREFS_EVENTS_PAGE;
#define IDC_EVENTLIST 10312
wxSizer *PreferencesEventsTab( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

extern wxSizer *s_sharedfilespeerHeader;
#define ID_SHAREDCLIENTTOGGLE 10313
#define IDC_SREQUESTED 10314
#define IDC_SACCEPTED 10315
#define IDC_STRANSFERRED 10316
#define ID_LINE 10317
#define ID_SHAREDCLIENTLIST 10318
wxSizer *sharedfilesBottomDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_SHOW_CLIENTS_MODE 10319
#define ID_BTNRELSHARED 10320
#define ID_SHFILELIST 10321
wxSizer *sharedfilesTopDlg( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define ID_FRIENDLIST 10322
wxSizer *messagePageFriends( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

#define IDC_CHATSELECTOR 10323
#define IDC_CMESSAGE 10324
#define IDC_CSEND 10325
#define IDC_CCLOSE 10326
wxSizer *messagePageMessages( wxWindow *parent, bool call_fit = TRUE, bool set_sizer = TRUE );

// Declare menubar functions

// Declare toolbar functions

#define ID_BUTTONCONNECT 10327
#define ID_BUTTONNETWORKS 10328
#define ID_BUTTONSEARCH 10329
#define ID_BUTTONDOWNLOADS 10330
#define ID_BUTTONSHARED 10331
#define ID_BUTTONMESSAGES 10332
#define ID_BUTTONSTATISTICS 10333
#define ID_BUTTONNEWPREFERENCES 10334
#define ID_BUTTONIMPORT 10335
#define ID_ABOUT 10336
void muleToolbar( wxToolBar *parent );

// Declare bitmap functions

wxBitmap clientImages( size_t index );

wxBitmap dlStatusImages( size_t index );

wxBitmap connImages( size_t index );

wxBitmap moreImages( size_t index );

wxBitmap amuleSpecial( size_t index );

wxBitmap connButImg( size_t index );

wxBitmap amuleDlgImages( size_t index );

#endif

// End of generated file

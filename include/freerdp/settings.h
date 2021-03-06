/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * RDP Settings
 *
 * Copyright 2009-2011 Jay Sorg
 * Copyright 2010-2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_SETTINGS_H
#define FREERDP_SETTINGS_H

#include <freerdp/api.h>
#include <freerdp/types.h>

/* Performance Flags */
#define PERF_FLAG_NONE                  	0x00000000
#define PERF_DISABLE_WALLPAPER          	0x00000001
#define PERF_DISABLE_FULLWINDOWDRAG    		0x00000002
#define PERF_DISABLE_MENUANIMATIONS     	0x00000004
#define PERF_DISABLE_THEMING            	0x00000008
#define PERF_DISABLE_CURSOR_SHADOW      	0x00000020
#define PERF_DISABLE_CURSORSETTINGS     	0x00000040
#define PERF_ENABLE_FONT_SMOOTHING      	0x00000080
#define PERF_ENABLE_DESKTOP_COMPOSITION 	0x00000100

/* Connection Types */
#define CONNECTION_TYPE_MODEM			0x01
#define CONNECTION_TYPE_BROADBAND_LOW		0x02
#define CONNECTION_TYPE_SATELLITE		0x03
#define CONNECTION_TYPE_BROADBAND_HIGH		0x04
#define CONNECTION_TYPE_WAN			0x05
#define CONNECTION_TYPE_LAN			0x06
#define CONNECTION_TYPE_AUTODETECT		0x07

/* Client to Server (CS) data blocks */
#define CS_CORE			0xC001
#define CS_SECURITY		0xC002
#define CS_NET			0xC003
#define CS_CLUSTER		0xC004
#define CS_MONITOR		0xC005
#define CS_MCS_MSGCHANNEL	0xC006
#define CS_MULTITRANSPORT	0xC008

/* Server to Client (SC) data blocks */
#define SC_CORE			0x0C01
#define SC_SECURITY		0x0C02
#define SC_NET			0x0C03
#define SC_MULTITRANSPORT	0x0C06

/* RDP version */
#define RDP_VERSION_4		0x00080001
#define RDP_VERSION_5_PLUS	0x00080004

/* Color depth */
#define RNS_UD_COLOR_4BPP	0xCA00
#define RNS_UD_COLOR_8BPP	0xCA01
#define RNS_UD_COLOR_16BPP_555	0xCA02
#define RNS_UD_COLOR_16BPP_565	0xCA03
#define RNS_UD_COLOR_24BPP	0xCA04

/* Secure Access Sequence */
#define RNS_UD_SAS_DEL		0xAA03

/* Supported Color Depths */
#define RNS_UD_24BPP_SUPPORT	0x0001
#define RNS_UD_16BPP_SUPPORT	0x0002
#define RNS_UD_15BPP_SUPPORT	0x0004
#define RNS_UD_32BPP_SUPPORT	0x0008

/* Audio Mode */
#define AUDIO_MODE_REDIRECT		0 /* Bring to this computer */
#define AUDIO_MODE_PLAY_ON_SERVER	1 /* Leave at remote computer */
#define AUDIO_MODE_NONE			2 /* Do not play */

/* Early Capability Flags (Client to Server) */
#define RNS_UD_CS_SUPPORT_ERRINFO_PDU		0x0001
#define RNS_UD_CS_WANT_32BPP_SESSION		0x0002
#define RNS_UD_CS_SUPPORT_STATUSINFO_PDU	0x0004
#define RNS_UD_CS_STRONG_ASYMMETRIC_KEYS	0x0008
#define RNS_UD_CS_VALID_CONNECTION_TYPE		0x0020
#define RNS_UD_CS_SUPPORT_MONITOR_LAYOUT_PDU	0x0040
#define RNS_UD_CS_SUPPORT_NETWORK_AUTODETECT	0x0080
#define RNS_UD_CS_SUPPORT_DYNVC_GFX_PROTOCOL	0x0100
#define RNS_UD_CS_SUPPORT_DYNAMIC_TIME_ZONE	0x0200

/* Early Capability Flags (Server to Client) */
#define RNS_UD_SC_EDGE_ACTIONS_SUPPORTED	0x00000001
#define RNS_UD_SC_DYNAMIC_DST_SUPPORTED		0x00000002

/* Cluster Information Flags */
#define REDIRECTION_SUPPORTED			0x00000001
#define REDIRECTED_SESSIONID_FIELD_VALID	0x00000002
#define REDIRECTED_SMARTCARD			0x00000040

#define REDIRECTION_VERSION1			0x00
#define REDIRECTION_VERSION2			0x01
#define REDIRECTION_VERSION3			0x02
#define REDIRECTION_VERSION4			0x03
#define REDIRECTION_VERSION5			0x04
#define REDIRECTION_VERSION6			0x05

#define MONITOR_PRIMARY				0x00000001

/* Encryption Methods */
#define ENCRYPTION_METHOD_NONE			0x00000000
#define ENCRYPTION_METHOD_40BIT			0x00000001
#define ENCRYPTION_METHOD_128BIT		0x00000002
#define ENCRYPTION_METHOD_56BIT			0x00000008
#define ENCRYPTION_METHOD_FIPS			0x00000010

/* Encryption Levels */
#define ENCRYPTION_LEVEL_NONE			0x00000000
#define ENCRYPTION_LEVEL_LOW			0x00000001
#define ENCRYPTION_LEVEL_CLIENT_COMPATIBLE	0x00000002
#define ENCRYPTION_LEVEL_HIGH			0x00000003
#define ENCRYPTION_LEVEL_FIPS			0x00000004

/* Multitransport Types */
#define TRANSPORT_TYPE_UDP_FECR			0x00000001
#define TRANSPORT_TYPE_UDP_FECL			0x00000004
#define TRANSPORT_TYPE_UDP_PREFERRED		0x00000100

/* Static Virtual Channel Options */
#define CHANNEL_OPTION_INITIALIZED		0x80000000
#define CHANNEL_OPTION_ENCRYPT_RDP		0x40000000
#define CHANNEL_OPTION_ENCRYPT_SC		0x20000000
#define CHANNEL_OPTION_ENCRYPT_CS		0x10000000
#define CHANNEL_OPTION_PRI_HIGH			0x08000000
#define CHANNEL_OPTION_PRI_MED			0x04000000
#define CHANNEL_OPTION_PRI_LOW			0x02000000
#define CHANNEL_OPTION_COMPRESS_RDP		0x00800000
#define CHANNEL_OPTION_COMPRESS			0x00400000
#define CHANNEL_OPTION_SHOW_PROTOCOL		0x00200000
#define CHANNEL_REMOTE_CONTROL_PERSISTENT	0x00100000

/* Auto Reconnect Version */
#define AUTO_RECONNECT_VERSION_1		0x00000001

/* Cookie Lengths */
#define MSTSC_COOKIE_MAX_LENGTH			9
#define DEFAULT_COOKIE_MAX_LENGTH		0xFF

/* Order Support */
#define NEG_DSTBLT_INDEX			0x00
#define NEG_PATBLT_INDEX			0x01
#define NEG_SCRBLT_INDEX			0x02
#define NEG_MEMBLT_INDEX			0x03
#define NEG_MEM3BLT_INDEX			0x04
#define NEG_ATEXTOUT_INDEX			0x05
#define NEG_AEXTTEXTOUT_INDEX			0x06
#define NEG_DRAWNINEGRID_INDEX			0x07
#define NEG_LINETO_INDEX			0x08
#define NEG_MULTI_DRAWNINEGRID_INDEX		0x09
#define NEG_OPAQUE_RECT_INDEX			0x0A
#define NEG_SAVEBITMAP_INDEX			0x0B
#define NEG_WTEXTOUT_INDEX			0x0C
#define NEG_MEMBLT_V2_INDEX			0x0D
#define NEG_MEM3BLT_V2_INDEX			0x0E
#define NEG_MULTIDSTBLT_INDEX			0x0F
#define NEG_MULTIPATBLT_INDEX			0x10
#define NEG_MULTISCRBLT_INDEX			0x11
#define NEG_MULTIOPAQUERECT_INDEX		0x12
#define NEG_FAST_INDEX_INDEX			0x13
#define NEG_POLYGON_SC_INDEX			0x14
#define NEG_POLYGON_CB_INDEX			0x15
#define NEG_POLYLINE_INDEX			0x16
#define NEG_FAST_GLYPH_INDEX			0x18
#define NEG_ELLIPSE_SC_INDEX			0x19
#define NEG_ELLIPSE_CB_INDEX			0x1A
#define NEG_GLYPH_INDEX_INDEX			0x1B
#define NEG_GLYPH_WEXTTEXTOUT_INDEX		0x1C
#define NEG_GLYPH_WLONGTEXTOUT_INDEX		0x1D
#define NEG_GLYPH_WLONGEXTTEXTOUT_INDEX		0x1E

/* Glyph Support Level */
#define GLYPH_SUPPORT_NONE			0x0000
#define GLYPH_SUPPORT_PARTIAL			0x0001
#define GLYPH_SUPPORT_FULL			0x0002
#define GLYPH_SUPPORT_ENCODE			0x0003

/* Gateway Usage Method */
#define TSC_PROXY_MODE_NONE_DIRECT		0x0
#define TSC_PROXY_MODE_DIRECT			0x1
#define TSC_PROXY_MODE_DETECT			0x2
#define TSC_PROXY_MODE_DEFAULT			0x3
#define TSC_PROXY_MODE_NONE_DETECT		0x4

/* Gateway Credentials Source */
#define TSC_PROXY_CREDS_MODE_USERPASS		0x0
#define TSC_PROXY_CREDS_MODE_SMARTCARD		0x1
#define TSC_PROXY_CREDS_MODE_ANY		0x2

/* Redirection Flags */
#define LB_TARGET_NET_ADDRESS			0x00000001
#define LB_LOAD_BALANCE_INFO			0x00000002
#define LB_USERNAME				0x00000004
#define LB_DOMAIN				0x00000008
#define LB_PASSWORD				0x00000010
#define LB_DONTSTOREUSERNAME			0x00000020
#define LB_SMARTCARD_LOGON			0x00000040
#define LB_NOREDIRECT				0x00000080
#define LB_TARGET_FQDN				0x00000100
#define LB_TARGET_NETBIOS_NAME			0x00000200
#define LB_TARGET_NET_ADDRESSES			0x00000800
#define LB_CLIENT_TSV_URL			0x00001000
#define LB_SERVER_TSV_CAPABLE			0x00002000

struct _TARGET_NET_ADDRESS
{
	UINT32 Length;
	LPWSTR Address;
};
typedef struct _TARGET_NET_ADDRESS TARGET_NET_ADDRESS;

/* SYSTEM_TIME */
typedef struct
{
	UINT16 wYear;
	UINT16 wMonth;
	UINT16 wDayOfWeek;
	UINT16 wDay;
	UINT16 wHour;
	UINT16 wMinute;
	UINT16 wSecond;
	UINT16 wMilliseconds;
} SYSTEM_TIME;

/* TIME_ZONE_INFORMATION */
struct _TIME_ZONE_INFO
{
	UINT32 bias;
	char standardName[32];
	SYSTEM_TIME standardDate;
	UINT32 standardBias;
	char daylightName[32];
	SYSTEM_TIME daylightDate;
	UINT32 daylightBias;
};
typedef struct _TIME_ZONE_INFO TIME_ZONE_INFO;

/* ARC_CS_PRIVATE_PACKET */
typedef struct
{
	UINT32 cbLen;
	UINT32 version;
	UINT32 logonId;
	BYTE securityVerifier[16];
} ARC_CS_PRIVATE_PACKET;

/* ARC_SC_PRIVATE_PACKET */
typedef struct
{
	UINT32 cbLen;
	UINT32 version;
	UINT32 logonId;
	BYTE arcRandomBits[16];
} ARC_SC_PRIVATE_PACKET;

/* Certificates */

struct rdp_CertBlob
{
	UINT32 length;
	BYTE* data;
};
typedef struct rdp_CertBlob rdpCertBlob;

struct rdp_X509CertChain
{
	UINT32 count;
	rdpCertBlob* array;
};
typedef struct rdp_X509CertChain rdpX509CertChain;

struct rdp_CertInfo
{
	BYTE* Modulus;
	DWORD ModulusLength;
	BYTE exponent[4];
};
typedef struct rdp_CertInfo rdpCertInfo;

struct rdp_certificate
{
	rdpCertInfo cert_info;
	rdpX509CertChain* x509_cert_chain;
};
typedef struct rdp_certificate rdpCertificate;

struct rdp_rsa_key
{
	BYTE* Modulus;
	DWORD ModulusLength;
	BYTE* PrivateExponent;
	DWORD PrivateExponentLength;
	BYTE exponent[4];
};
typedef struct rdp_rsa_key rdpRsaKey;

/* Channels */

struct rdp_channel
{
	char Name[8];
	UINT32 options;
	int ChannelId;
	BOOL joined;
	void* handle;
};
typedef struct rdp_channel rdpChannel;

struct _ADDIN_ARGV
{
	int argc;
	char** argv;
};
typedef struct _ADDIN_ARGV ADDIN_ARGV;

/* Extensions */

struct rdp_ext_set
{
	char name[256]; /* plugin name or path */
	void* data; /* plugin data */
};

/* Bitmap Cache */

struct _BITMAP_CACHE_CELL_INFO
{
	UINT16 numEntries;
	UINT16 maxSize;
};
typedef struct _BITMAP_CACHE_CELL_INFO BITMAP_CACHE_CELL_INFO;

struct _BITMAP_CACHE_V2_CELL_INFO
{
	UINT32 numEntries;
	BOOL persistent;
};
typedef struct _BITMAP_CACHE_V2_CELL_INFO BITMAP_CACHE_V2_CELL_INFO;

/* Glyph Cache */

struct _GLYPH_CACHE_DEFINITION
{
	UINT16 cacheEntries;
	UINT16 cacheMaximumCellSize;
};
typedef struct _GLYPH_CACHE_DEFINITION GLYPH_CACHE_DEFINITION;

/* Monitors */

struct rdp_monitor
{
	INT32 x;
	INT32 y;
	INT32 width;
	INT32 height;
	UINT32 is_primary;
};
typedef struct rdp_monitor rdpMonitor;

/* Device Redirection */

#define RDPDR_DTYP_SERIAL		0x00000001
#define RDPDR_DTYP_PARALLEL		0x00000002
#define RDPDR_DTYP_PRINT		0x00000004
#define RDPDR_DTYP_FILESYSTEM		0x00000008
#define RDPDR_DTYP_SMARTCARD		0x00000020

struct _RDPDR_DEVICE
{
	UINT32 Id;
	UINT32 Type;
	char* Name;
};
typedef struct _RDPDR_DEVICE RDPDR_DEVICE;

struct _RDPDR_DRIVE
{
	UINT32 Id;
	UINT32 Type;
	char* Name;
	char* Path;
};
typedef struct _RDPDR_DRIVE RDPDR_DRIVE;

struct _RDPDR_PRINTER
{
	UINT32 Id;
	UINT32 Type;
	char* Name;
	char* DriverName;
};
typedef struct _RDPDR_PRINTER RDPDR_PRINTER;

struct _RDPDR_SMARTCARD
{
	UINT32 Id;
	UINT32 Type;
	char* Name;
	char* Path;
};
typedef struct _RDPDR_SMARTCARD RDPDR_SMARTCARD;

struct _RDPDR_SERIAL
{
	UINT32 Id;
	UINT32 Type;
	char* Name;
	char* Path;
};
typedef struct _RDPDR_SERIAL RDPDR_SERIAL;

struct _RDPDR_PARALLEL
{
	UINT32 Id;
	UINT32 Type;
	char* Name;
	char* Path;
};
typedef struct _RDPDR_PARALLEL RDPDR_PARALLEL;

/* Settings */

#ifdef __GNUC__
#define ALIGN64	__attribute__((aligned(8)))
#else
#ifdef _WIN32
#define ALIGN64	__declspec(align(8))
#else
#define ALIGN64
#endif
#endif

struct rdp_settings
{
	/**
	 * WARNING: this data structure is carefully padded for ABI stability!
	 * Keeping this area clean is particularly challenging, so unless you are
	 * a trusted developer you should NOT take the liberty of adding your own
	 * options straight into the ABI stable zone. Instead, append them to the
	 * very end of this data structure, in the zone marked as ABI unstable.
	 */

	ALIGN64 void* instance; /* 0 */
	UINT64 padding001[16 - 1]; /* 1 */

	/* Core Parameters */
	ALIGN64 BOOL ServerMode; /* 16 */
	ALIGN64 UINT32 ShareId; /* 17 */
	ALIGN64 UINT32 PduSource; /* 18 */
	ALIGN64 UINT32 ServerPort; /* 19 */
	ALIGN64 char* ServerHostname; /* 20 */
	ALIGN64 char* Username; /* 21 */
	ALIGN64 char* Password; /* 22 */
	ALIGN64 char* Domain; /* 23 */
	UINT64 padding0064[64 - 24]; /* 24 */
	UINT64 padding0128[128 - 64]; /* 64 */

	/**
	 * GCC User Data Blocks
	 */

	/* Client/Server Core Data */
	ALIGN64 UINT32 RdpVersion; /* 128 */
	ALIGN64 UINT32 DesktopWidth; /* 129 */
	ALIGN64 UINT32 DesktopHeight; /* 130 */
	ALIGN64 UINT32 ColorDepth; /* 131 */
	ALIGN64 UINT32 ConnectionType; /* 132 */
	ALIGN64 UINT32 ClientBuild; /* 133 */
	ALIGN64 char* ClientHostname; /* 134 */
	ALIGN64 char* ClientProductId; /* 135 */
	ALIGN64 UINT32 EarlyCapabilitiesFlag; /* 136 */
	ALIGN64 BOOL NetworkAutoDetect; /* 137 */
	ALIGN64 BOOL SupportAsymetricKeys; /* 138 */
	ALIGN64 BOOL SupportErrorInfoPdu; /* 139 */
	ALIGN64 BOOL SupportStatusInfoPdu; /* 140 */
	ALIGN64 BOOL SupportMonitorLayoutPdu; /* 141 */
	ALIGN64 BOOL SupportGraphicsPipeline; /* 142 */
	ALIGN64 BOOL SupportDynamicTimeZone; /* 143 */
	UINT64 padding0192[192 - 143]; /* 143 */

	/* Client/Server Security Data */
	ALIGN64 BOOL DisableEncryption; /* 192 */
	ALIGN64 UINT32 EncryptionMethods; /* 193 */
	ALIGN64 UINT32 ExtEncryptionMethods; /* 194 */
	ALIGN64 UINT32 EncryptionLevel; /* 195 */
	ALIGN64 BYTE* ServerRandom; /* 196 */
	ALIGN64 DWORD ServerRandomLength; /* 197 */
	ALIGN64 BYTE* ServerCertificate; /* 198 */
	ALIGN64 DWORD ServerCertificateLength; /* 199 */
	UINT64 padding0256[256 - 200]; /* 200 */

	/* Client Network Data */
	ALIGN64 UINT32 ChannelCount; /* 256 */
	ALIGN64 UINT32 ChannelDefArraySize; /* 257 */
	ALIGN64 rdpChannel* ChannelDefArray; /* 258 */
	UINT64 padding0320[320 - 259]; /* 259 */

	/* Client Cluster Data */
	ALIGN64 UINT32 ClusterInfoFlags; /* 320 */
	ALIGN64 UINT32 RedirectedSessionId; /* 321 */
	ALIGN64 BOOL ConsoleSession; /* 322 */
	UINT64 padding0384[384 - 323]; /* 323 */

	/* Client Monitor Data */
	ALIGN64 int MonitorCount; /* 384 */
	ALIGN64 UINT32 MonitorDefArraySize; /* 385 */
	ALIGN64 rdpMonitor* MonitorDefArray; /* 386 */
	UINT64 padding0448[448 - 387]; /* 387 */

	/* Client Message Channel Data */
	UINT64 padding0512[512 - 448]; /* 448 */

	/* Client Multitransport Channel Data */
	ALIGN64 UINT32 MultitransportFlags; /* 512 */
	UINT64 padding0576[576 - 513]; /* 513 */
	UINT64 padding0640[640 - 576]; /* 576 */

	/*
	 * Client Info
	 */

	/* Client Info (Shell) */
	ALIGN64 char* AlternateShell; /* 640 */
	ALIGN64 char* ShellWorkingDirectory; /* 641 */
	UINT64 padding0704[704 - 642]; /* 642 */

	/* Client Info Flags */
	ALIGN64 BOOL AutoLogonEnabled; /* 704 */
	ALIGN64 BOOL CompressionEnabled; /* 705 */
	ALIGN64 BOOL DisableCtrlAltDel; /* 706 */
	ALIGN64 BOOL EnableWindowsKey; /* 707 */
	ALIGN64 BOOL MaximizeShell; /* 708 */
	ALIGN64 BOOL LogonNotify; /* 709 */
	ALIGN64 BOOL LogonErrors; /* 710 */
	ALIGN64 BOOL MouseAttached; /* 711 */
	ALIGN64 BOOL MouseHasWheel; /* 712 */
	ALIGN64 BOOL RemoteConsoleAudio; /* 713 */
	ALIGN64 BOOL AudioPlayback; /* 714 */
	ALIGN64 BOOL AudioCapture; /* 715 */
	ALIGN64 BOOL VideoDisable; /* 716 */
	ALIGN64 BOOL PasswordIsSmartcardPin; /* 717 */
	ALIGN64 BOOL UsingSavedCredentials; /* 718 */
	ALIGN64 BOOL ForceEncryptedCsPdu; /* 719 */
	UINT64 padding0768[768 - 720]; /* 720 */

	/* Client Info (Extra) */
	ALIGN64 BOOL IPv6Enabled; /* 768 */
	ALIGN64 char* ClientAddress; /* 769 */
	ALIGN64 char* ClientDir; /* 770 */
	UINT64 padding0832[832 - 771]; /* 771 */

	/* Client Info (Auto Reconnection) */
	ALIGN64 BOOL AutoReconnectionEnabled; /* 832 */
	ALIGN64 UINT32 AutoReconnectMaxRetries; /* 833 */
	ALIGN64 ARC_CS_PRIVATE_PACKET* ClientAutoReconnectCookie; /* 834 */
	ALIGN64 ARC_SC_PRIVATE_PACKET* ServerAutoReconnectCookie; /* 835 */
	UINT64 padding0896[896 - 835]; /* 835 */

	/* Client Info (Time Zone) */
	ALIGN64 TIME_ZONE_INFO* ClientTimeZone; /* 896 */
	ALIGN64 char* DynamicDSTTimeZoneKeyName; /* 897 */
	ALIGN64 BOOL DynamicDaylightTimeDisabled; /* 898 */
	UINT64 padding0960[960 - 899]; /* 899 */

	/* Client Info (Performance Flags) */
	ALIGN64 UINT32 PerformanceFlags; /* 960 */
	ALIGN64 BOOL AllowFontSmoothing; /* 961 */
	ALIGN64 BOOL DisableWallpaper; /* 962 */
	ALIGN64 BOOL DisableFullWindowDrag; /* 963 */
	ALIGN64 BOOL DisableMenuAnims; /* 964 */
	ALIGN64 BOOL DisableThemes; /* 965 */
	ALIGN64 BOOL DisableCursorShadow; /* 966 */
	ALIGN64 BOOL DisableCursorBlinking; /* 967 */
	ALIGN64 BOOL AllowDesktopComposition; /* 968 */
	UINT64 padding1024[1024 - 969]; /* 969 */
	UINT64 padding1088[1088 - 1024]; /* 1024 */

	/**
	 * X.224 Connection Request/Confirm
	 */

	/* Protocol Security */
	ALIGN64 BOOL TlsSecurity; /* 1088 */
	ALIGN64 BOOL NlaSecurity; /* 1089 */
	ALIGN64 BOOL RdpSecurity; /* 1090 */
	ALIGN64 BOOL ExtSecurity; /* 1091 */
	ALIGN64 BOOL Authentication; /* 1092 */
	ALIGN64 UINT32 RequestedProtocols; /* 1093 */
	ALIGN64 UINT32 SelectedProtocol; /* 1094 */
	ALIGN64 UINT32 NegotiationFlags; /* 1095 */
	ALIGN64 BOOL NegotiateSecurityLayer; /* 1096 */
	UINT64 padding1152[1152 - 1097]; /* 1097 */

	/* Connection Cookie */
	ALIGN64 BOOL MstscCookieMode; /* 1152 */
	ALIGN64 UINT32 CookieMaxLength; /* 1153 */
	ALIGN64 UINT32 PreconnectionId; /* 1154 */
	ALIGN64 char* PreconnectionBlob; /* 1155 */
	ALIGN64 BOOL SendPreconnectionPdu; /* 1156 */
	UINT64 padding1216[1216 - 1057]; /* 1157 */

	/* Server Redirection */
	ALIGN64 UINT32 RedirectionFlags; /* 1216 */
	ALIGN64 BYTE* LoadBalanceInfo; /* 1217 */
	ALIGN64 UINT32 LoadBalanceInfoLength; /* 1218 */
	ALIGN64 BYTE* RedirectionUsername; /* 1219 */
	ALIGN64 UINT32 RedirectionUsernameLength; /* 1220 */
	ALIGN64 BYTE* RedirectionDomain; /* 1221 */
	ALIGN64 UINT32 RedirectionDomainLength; /* 1222 */
	ALIGN64 BYTE* RedirectionPassword; /* 1223 */
	ALIGN64 UINT32 RedirectionPasswordLength; /* 1224 */
	ALIGN64 BYTE* RedirectionTargetFQDN; /* 1225 */
	ALIGN64 UINT32 RedirectionTargetFQDNLength; /* 1226 */
	ALIGN64 BYTE* RedirectionTargetNetBiosName; /* 1227 */
	ALIGN64 UINT32 RedirectionTargetNetBiosNameLength; /* 1228 */
	ALIGN64 BYTE* RedirectionTsvUrl; /* 1229 */
	ALIGN64 UINT32 RedirectionTsvUrlLength; /* 1230 */
	ALIGN64 UINT32 TargetNetAddressCount; /* 1231 */
	ALIGN64 TARGET_NET_ADDRESS* TargetNetAddresses; /* 1232 */
	UINT64 padding1280[1280 - 1233]; /* 1233 */

	/**
	 * Security
	 */

	/* Credentials Cache */
	ALIGN64 BYTE* Password51; /* 1280 */
	ALIGN64 DWORD Password51Length; /* 1281 */
	UINT64 padding1344[1344 - 1282]; /* 1282 */

	/* Kerberos Authentication */
	ALIGN64 char* KerberosKdc; /* 1344 */
	ALIGN64 char* KerberosRealm; /* 1345 */
	UINT64 padding1408[1408 - 1346]; /* 1346 */

	/* Server Certificate */
	ALIGN64 BOOL IgnoreCertificate; /* 1408 */
	ALIGN64 char* CertificateName; /* 1409 */
	ALIGN64 char* CertificateFile; /* 1410 */
	ALIGN64 char* PrivateKeyFile; /* 1411 */
	ALIGN64 char* RdpKeyFile; /* 1412 */
	ALIGN64 rdpRsaKey* RdpServerRsaKey; /* 1413 */
	ALIGN64 rdpCertificate* RdpServerCertificate; /* 1414 */
	UINT64 padding1472[1472 - 1350]; /* 1415 */
	UINT64 padding1536[1536 - 1472]; /* 1472 */

	/**
	 * User Interface
	 */

	/* Window Settings */
	ALIGN64 BOOL Workarea; /* 1536 */
	ALIGN64 BOOL Fullscreen; /* 1537 */
	ALIGN64 UINT32 PercentScreen; /* 1538 */
	ALIGN64 BOOL GrabKeyboard; /* 1539 */
	ALIGN64 BOOL Decorations; /* 1540 */
	ALIGN64 BOOL MouseMotion; /* 1541 */
	ALIGN64 char* WindowTitle; /* 1542 */
	ALIGN64 UINT64 ParentWindowId; /* 1543 */
	UINT64 padding1600[1600 - 1544]; /* 1544 */

	/* Miscellaneous */
	ALIGN64 BOOL SoftwareGdi; /* 1601 */
	ALIGN64 BOOL LocalConnection; /* 1602 */
	ALIGN64 BOOL AuthenticationOnly; /* 1603 */
	ALIGN64 BOOL CredentialsFromStdin; /* 1604 */
	UINT64 padding1664[1664 - 1605]; /* 1605 */

	/* Names */
	ALIGN64 char* ComputerName; /* 1664 */
	UINT64 padding1728[1728 - 1605]; /* 1665 */

	/* Files */
	ALIGN64 char* ConnectionFile; /* 1728 */
	UINT64 padding1792[1792 - 1729]; /* 1729 */

	/* Paths */
	ALIGN64 char* HomePath; /* 1792 */
	ALIGN64 char* ConfigPath; /* 1793 */
	ALIGN64 char* CurrentPath; /* 1794 */
	UINT64 padding1856[1856 - 1795]; /* 1795 */

	/* Recording */
	ALIGN64 BOOL DumpRemoteFx; /* 1856 */
	ALIGN64 BOOL PlayRemoteFx; /* 1857 */
	ALIGN64 char* DumpRemoteFxFile; /* 1858 */
	ALIGN64 char* PlayRemoteFxFile; /* 1859 */
	UINT64 padding1920[1920 - 1860]; /* 1860 */
	UINT64 padding1984[1984 - 1920]; /* 1920 */

	/**
	 * Gateway
	 */

	/* Gateway */
	ALIGN64 BOOL GatewayUsageMethod; /* 1984 */
	ALIGN64 UINT32 GatewayPort; /* 1985 */
	ALIGN64 char* GatewayHostname; /* 1986 */
	ALIGN64 char* GatewayUsername; /* 1987 */
	ALIGN64 char* GatewayPassword; /* 1988 */
	ALIGN64 char* GatewayDomain; /* 1989 */
	ALIGN64 UINT32 GatewayCredentialsSource; /* 1990 */
	ALIGN64 BOOL GatewayUseSameCredentials; /* 1991 */
	UINT64 padding2048[2048 - 1992]; /* 1992 */
	UINT64 padding2112[2112 - 2048]; /* 2048 */

	/**
	 * RemoteApp
	 */

	/* RemoteApp */
	ALIGN64 BOOL RemoteApplicationMode; /* 2112 */
	ALIGN64 char* RemoteApplicationName; /* 2113 */
	ALIGN64 char* RemoteApplicationIcon; /* 2114 */
	ALIGN64 char* RemoteApplicationProgram; /* 2115 */
	ALIGN64 char* RemoteApplicationFile; /* 2116 */
	ALIGN64 char* RemoteApplicationGuid; /* 2117 */
	ALIGN64 char* RemoteApplicationCmdLine; /* 2118 */
	ALIGN64 DWORD RemoteApplicationExpandCmdLine; /* 2119 */
	ALIGN64 DWORD RemoteApplicationExpandWorkingDir; /* 2120 */
	ALIGN64 DWORD DisableRemoteAppCapsCheck; /* 2121 */
	ALIGN64 UINT32 RemoteAppNumIconCaches; /* 2122 */
	ALIGN64 UINT32 RemoteAppNumIconCacheEntries; /* 2123 */
	ALIGN64 BOOL RemoteAppLanguageBarSupported; /* 2124 */
	UINT64 padding2176[2176 - 2125]; /* 2125 */
	UINT64 padding2240[2240 - 2124]; /* 2176 */

	/**
	 * Mandatory Capabilities
	 */

	/* Capabilities */
	ALIGN64 BYTE* ReceivedCapabilities; /* 2240 */
	ALIGN64 UINT32 ReceivedCapabilitiesSize; /* 2241 */
	UINT64 padding2304[2304 - 2242]; /* 2242 */

	/* General Capabilities */
	ALIGN64 UINT32 OsMajorType; /* 2304 */
	ALIGN64 UINT32 OsMinorType; /* 2305 */
	ALIGN64 BOOL RefreshRect; /* 2306 */
	ALIGN64 BOOL SuppressOutput; /* 2307 */
	ALIGN64 BOOL FastPathOutput; /* 2308 */
	ALIGN64 BOOL SaltedChecksum; /* 2309 */
	ALIGN64 BOOL LongCredentialsSupported; /* 2310 */
	ALIGN64 BOOL NoBitmapCompressionHeader; /* 2311 */
	UINT64 padding2368[2368 - 2312]; /* 2312 */

	/* Bitmap Capabilities */
	ALIGN64 BOOL DesktopResize; /* 2368 */
	ALIGN64 BOOL DrawAllowDynamicColorFidelity; /* 2369 */
	ALIGN64 BOOL DrawAllowColorSubsampling; /* 2370 */
	ALIGN64 BOOL DrawAllowSkipAlpha; /* 2371 */
	UINT64 padding2432[2432 - 2372]; /* 2372 */

	/* Order Capabilities */
	ALIGN64 BYTE* OrderSupport; /* 2432 */
	ALIGN64 BOOL BitmapCacheV3Enabled; /* 2433 */
	ALIGN64 BOOL AltSecFrameMarkerSupport; /* 2434 */
	UINT64 padding2496[2496 - 2435]; /* 2435 */

	/* Bitmap Cache Capabilities */
	ALIGN64 BOOL BitmapCacheEnabled; /* 2497 */
	ALIGN64 UINT32 BitmapCacheVersion; /* 2498 */
	ALIGN64 BOOL AllowCacheWaitingList; /* 2499 */
	ALIGN64 BOOL BitmapCachePersistEnabled; /* 2500 */
	ALIGN64 UINT32 BitmapCacheV2NumCells; /* 2501 */
	ALIGN64 BITMAP_CACHE_V2_CELL_INFO* BitmapCacheV2CellInfo; /* 2502 */
	UINT64 padding2560[2560 - 2503]; /* 2503 */

	/* Pointer Capabilities */
	ALIGN64 BOOL ColorPointerFlag; /* 2560 */
	ALIGN64 UINT32 PointerCacheSize; /* 2561 */
	UINT64 padding2624[2624 - 2562]; /* 2562 */

	/* Input Capabilities */
	ALIGN64 UINT32 KeyboardLayout; /* 2624 */
	ALIGN64 UINT32 KeyboardType; /* 2625 */
	ALIGN64 UINT32 KeyboardSubType; /* 2626 */
	ALIGN64 UINT32 KeyboardFunctionKey; /* 2627 */
	ALIGN64 char* ImeFileName; /* 2628 */
	ALIGN64 BOOL UnicodeInput; /* 2629 */
	ALIGN64 BOOL FastPathInput; /* 2630 */
	UINT64 padding2688[2688 - 2631]; /* 2631 */

	/* Brush Capabilities */
	ALIGN64 UINT32 BrushSupportLevel; /* 2688 */
	UINT64 padding2752[2752 - 2689]; /* 2689 */

	/* Glyph Cache Capabilities */
	ALIGN64 UINT32 GlyphSupportLevel; /* 2752 */
	ALIGN64 GLYPH_CACHE_DEFINITION* GlyphCache; /* 2753 */
	ALIGN64 GLYPH_CACHE_DEFINITION* FragCache; /* 2754 */
	UINT64 padding2816[2816 - 2755]; /* 2755 */

	/* Offscreen Bitmap Cache */
	ALIGN64 UINT32 OffscreenSupportLevel; /* 2816 */
	ALIGN64 UINT32 OffscreenCacheSize; /* 2817 */
	ALIGN64 UINT32 OffscreenCacheEntries; /* 2818 */
	UINT64 padding2880[2880 - 2819]; /* 2819 */

	/* Virtual Channel Capabilities */
	ALIGN64 UINT32 VirtualChannelCompressionFlags; /* 2880 */
	ALIGN64 UINT32 VirtualChannelChunkSize; /* 2881 */
	UINT64 padding2944[2944 - 2882]; /* 2882 */

	/* Sound Capabilities */
	ALIGN64 BOOL SoundBeepsEnabled; /* 2944 */
	UINT64 padding3008[3008 - 2945]; /* 2945 */
	UINT64 padding3072[3072 - 3008]; /* 3008 */

	/**
	 * Optional Capabilities
	 */

	/* Bitmap Cache Host Capabilities */
	UINT64 padding3136[3136 - 3072]; /* 3072 */

	/* Control Capabilities */
	UINT64 padding3200[3200 - 3136]; /* 3136 */

	/* Window Activation Capabilities */
	UINT64 padding3264[3264 - 3200]; /* 3200 */

	/* Font Capabilities */
	UINT64 padding3328[3328 - 3200]; /* 3264 */

	/* Multifragment Update Capabilities */
	ALIGN64 UINT32 MultifragMaxRequestSize; /* 3328 */
	UINT64 padding3392[3392 - 3329]; /* 3329 */

	/* Large Pointer Update Capabilities */
	ALIGN64 UINT32 LargePointerFlag; /* 3392 */
	UINT64 padding3456[3456 - 3393]; /* 3393 */

	/* Desktop Composition Capabilities */
	ALIGN64 UINT32 CompDeskSupportLevel; /* 3456 */
	UINT64 padding3520[3520 - 3457]; /* 3457 */

	/* Surface Commands Capabilities */
	ALIGN64 BOOL SurfaceCommandsEnabled; /* 3520 */
	ALIGN64 BOOL FrameMarkerCommandEnabled; /* 3521 */
	UINT64 padding3584[3584 - 3522]; /* 3522 */
	UINT64 padding3648[3648 - 3584]; /* 3584 */

	/*
	 * Bitmap Codecs Capabilities
	 */

	/* RemoteFX */
	ALIGN64 BOOL RemoteFxOnly; /* 3648 */
	ALIGN64 BOOL RemoteFxCodec; /* 3649 */
	ALIGN64 UINT32 RemoteFxCodecId; /* 3650 */
	ALIGN64 UINT32 RemoteFxCodecMode; /* 3651 */
	UINT64 padding3712[3712 - 3652]; /* 3652 */

	/* NSCodec */
	ALIGN64 BOOL NSCodec; /* 3712 */
	ALIGN64 UINT32 NSCodecId; /* 3713 */
	ALIGN64 BOOL FrameAcknowledge; /* 3714 */
	UINT64 padding3776[3776 - 3715]; /* 3715 */

	/* JPEG */
	ALIGN64 BOOL JpegCodec; /* 3776 */
	ALIGN64 UINT32 JpegCodecId; /* 3777 */
	ALIGN64 UINT32 JpegQuality; /* 3778 */
	UINT64 padding3840[3840 - 3779]; /* 3779 */
	UINT64 padding3904[3904 - 3779]; /* 3840 */

	/**
	 * Caches
	 */

	/* Bitmap Cache V3 */
	ALIGN64 UINT32 BitmapCacheV3CodecId; /* 3904 */
	UINT64 padding3968[3968 - 3905]; /* 3905 */

	/* Draw Nine Grid */
	ALIGN64 BOOL DrawNineGridEnabled; /* 3968 */
	ALIGN64 UINT32 DrawNineGridCacheSize; /* 3969 */
	ALIGN64 UINT32 DrawNineGridCacheEntries; /* 3970 */
	UINT64 padding4032[4032 - 3971]; /* 3971 */

	/* Draw GDI+ */
	ALIGN64 BOOL DrawGdiPlusEnabled; /* 4032 */
	ALIGN64 BOOL DrawGdiPlusCacheEnabled; /* 4033 */
	UINT64 padding4096[4096 - 4034]; /* 4034 */
	UINT64 padding4160[4160 - 4096]; /* 4096 */

	/**
	 * WARNING: End of ABI stable zone!
	 *
	 * The zone below this point is ABI unstable, and
	 * is therefore potentially subject to ABI breakage.
	 */

	/**
	 * Device Redirection
	 */

	/* Device Redirection */
	ALIGN64 BOOL DeviceRedirection; /*  */
	ALIGN64 UINT32 DeviceCount; /*  */
	ALIGN64 UINT32 DeviceArraySize; /*  */
	ALIGN64 RDPDR_DEVICE** DeviceArray; /*  */

	/* Drive Redirection */
	ALIGN64 BOOL RedirectDrives; /*  */
	ALIGN64 char* DrivesToRedirect; /* */

	/* Smartcard Redirection */
	ALIGN64 BOOL RedirectSmartCards; /*  */

	/* Printer Redirection */
	ALIGN64 BOOL RedirectPrinters; /*  */

	/* Serial Port Redirection */
	ALIGN64 BOOL RedirectSerialPorts; /*  */

	/* Parallel Port Redirection */
	ALIGN64 BOOL RedirectParallelPorts; /*  */

	/**
	 * Other Redirection
	 */

	ALIGN64 BOOL RedirectClipboard; /*  */

	/**
	 * Static Virtual Channels
	 */

	ALIGN64 UINT32 StaticChannelCount;
	ALIGN64 UINT32 StaticChannelArraySize;
	ALIGN64 ADDIN_ARGV** StaticChannelArray;

	/**
	 * Dynamic Virtual Channels
	 */

	ALIGN64 UINT32 DynamicChannelCount;
	ALIGN64 UINT32 DynamicChannelArraySize;
	ALIGN64 ADDIN_ARGV** DynamicChannelArray;

	/*
	 * Extensions
	 */

	/* Extensions */
	ALIGN64 int num_extensions; /*  */
	ALIGN64 struct rdp_ext_set extensions[16]; /*  */
};
typedef struct rdp_settings rdpSettings;

FREERDP_API rdpSettings* freerdp_settings_new(void* instance);
FREERDP_API void freerdp_settings_free(rdpSettings* settings);

FREERDP_API int freerdp_addin_set_argument(ADDIN_ARGV* args, char* argument);
FREERDP_API int freerdp_addin_replace_argument(ADDIN_ARGV* args, char* previous, char* argument);
FREERDP_API int freerdp_addin_set_argument_value(ADDIN_ARGV* args, char* option, char* value);
FREERDP_API int freerdp_addin_replace_argument_value(ADDIN_ARGV* args, char* previous, char* option, char* value);

FREERDP_API void freerdp_device_collection_add(rdpSettings* settings, RDPDR_DEVICE* device);
FREERDP_API void freerdp_device_collection_free(rdpSettings* settings);

FREERDP_API void freerdp_static_channel_collection_add(rdpSettings* settings, ADDIN_ARGV* channel);
FREERDP_API ADDIN_ARGV* freerdp_static_channel_collection_find(rdpSettings* settings, const char* name);
FREERDP_API void freerdp_static_channel_collection_free(rdpSettings* settings);

FREERDP_API void freerdp_dynamic_channel_collection_add(rdpSettings* settings, ADDIN_ARGV* channel);
FREERDP_API ADDIN_ARGV* freerdp_dynamic_channel_collection_find(rdpSettings* settings, const char* name);
FREERDP_API void freerdp_dynamic_channel_collection_free(rdpSettings* settings);

#endif /* FREERDP_SETTINGS_H */

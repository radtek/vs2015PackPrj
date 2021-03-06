#ifndef __SYSTEMDEF_H_
#define __SYSTEMDEF_H_
#include <wbemidl.h>
#include <atlbase.h>

//////////////////////////////////////////////////////////////////////////
// 日志处理回调
typedef void (*PFWriteLog)(char* pLogMessage);

// 硬件/软件异动后处理的回调
typedef void (*PFDealResDissimilation)(CString sResType,LPBYTE pResDetial,int nResDetialLen);

//////////////////////////////////////////////////////////////////////////
// 资源的释放
#define SAFE_DELETE(p)       { if(p) { delete (p);     (p)=NULL; } }
#define SAFE_RELEASE(p)      { if(p) { (p)->Release(); (p)=NULL; } }

#define SYSTEM_SHORT_LEN			20
#define SYSTEM_COMMON_LEN			64
#define SYSTEM_MAX_LEN				256

//////////////////////////////////////////////////////////////////////////
// 获取资源的类型
enum SYSTEM_INFO_TYPE
{
	HW_INFORMATION_UNUSE		= -1,										// 不使用的

	// 硬件类型
	HW_INFORMATION_CPU			= 0,										// 获取CPU信息
	HW_INFORMATION_MAINBOARD	= 1,										// 获取主板信息
	HW_INFORMATION_MEMORY		= 2,										// 获取内存信息
	HW_INFORMATION_HARDDESK		= 3,										// 获取硬盘信息
	HW_INFORMATION_MOUSE		= 4,										// 获取鼠标信息
	HW_INFORMATION_KEYBOARD		= 5,										// 获取键盘信息
	HW_INFORMATION_VIDEODISPLAY = 6,										// 获取显示器信息
	HW_INFORMATION_CDROMDRIVER	= 7,										// 获取CDRom的相关信息
	HW_INFORMATION_BIOS			= 8,										// 获取BIOS的相关信息
	HW_INFORMATION_PHYSICALMEDIA = 9,										// 存储磁盘的相关信息
	HW_INFORMATION_DISPLAYCONFIGURATION = 10,                               // 存储显卡的相关信息
	HW_INFORMATION_IDECONTROLLER = 11,                                      // 存储IDE控制器的相关信息
	HW_INFORMATION_USBCONTROLLER = 12,                                      // 存储USB控制器的相关信息
	HW_INFORMATION_DISKPARTITION = 13,                                      // 存储磁盘分区的相关信息
	HW_INFORMATION_LOGICALDISK   = 14,                                      // 存储逻辑磁盘的相关信息
	HW_INFORMATION_MEMORYDEVICE  = 15,                                      // 存储内存设备的相关信息
	HW_INFORMATION_NETWORKADAPTER = 16,                                     // 存储网络适配器的相关信息

	// 软件类型
	HW_INFORMATION_INSTALLEDSOFTWARE = 17,									// 获取已安装的软件信息
	HW_INFORMATION_COMPUTERSYSTEMPRODUCT = 18,                              // 存储系统产品信息的相关信息
	HW_INFORMATION_COMPUTERSYSTEM = 19,                                     // 存储系统信息的相关信息
	HW_INFORMATION_DATASOFTWARE = 20,										// 已安装数据库软件
	HW_INFORMATION_DATASOURCE = 21,											// 已安装的数据源
	HW_INFORMATION_DATADRIVER = 22,											// 已安装的数据库驱动
	HW_INFORMAITON_SUMMARY = 23,											// 信息
	HW_INFORMAITON_ANTISOFTWARE = 24,										// 杀毒软件信息
	HW_INFORMAITON_HARDWAREINFO = 25,										// 硬件信息
	HW_INFORMAITON_SOFTWARE = 26											// 软件信息	
};
#endif
///////////////////////////////////////////////////////////////////////////////
// ProgettoCDriver.h

#ifndef __PROGETTOCDRIVER_H__
#define __PROGETTOCDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define PROGETTOCDRV_NAME        "PROGETTOC"
#define PROGETTOCDRV_Major       1
#define PROGETTOCDRV_Minor       0

#define DEVICE_CLASS CProgettoCDriver

#include "ObjDriver.h"

class CProgettoCDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl PROGETTOCDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(PROGETTOCDRV)
	VxD_Service( PROGETTOCDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __PROGETTOCDRIVER_H__
///////////////////////////////////////////////////////////////////////////////
// ProgettoCDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "ProgettoCDriver.h"
#include "ProgettoCClassFactory.h"

DECLARE_GENERIC_DEVICE(PROGETTOCDRV)

IOSTATUS CProgettoCDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CProgettoCClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CProgettoCDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CProgettoCDriver::PROGETTOCDRV_GetVersion( )
{
	return( (PROGETTOCDRV_Major << 8) | PROGETTOCDRV_Minor );
}


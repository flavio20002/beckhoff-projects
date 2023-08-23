///////////////////////////////////////////////////////////////////////////////
// ProgettoCCtrl.h

#ifndef __PROGETTOCCTRL_H__
#define __PROGETTOCCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "ProgettoCW32.h"
#include "TcBase.h"
#include "ProgettoCClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CProgettoCCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CProgettoCCtrl, &CLSID_ProgettoCCtrl>
	, public IProgettoCCtrl
	, public ITcOCFCtrlImpl<CProgettoCCtrl, CProgettoCClassFactory>
{
public:
	CProgettoCCtrl();
	virtual ~CProgettoCCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_PROGETTOCCTRL)
DECLARE_NOT_AGGREGATABLE(CProgettoCCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CProgettoCCtrl)
	COM_INTERFACE_ENTRY(IProgettoCCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __PROGETTOCCTRL_H__


#ifndef __IM_STATUS_BAR_H__
#define __IM_STATUS_BAR_H__

#include "ImwConfig.h"

namespace ImWindow
{

class ImwWindowManager;

//SFF_BEGIN
	class IMGUI_API ImwStatusBar
	{
	public:
		ImwStatusBar(ImwWindowManager& manger, int iHorizontalPriority = 0, bool bAutoDeleted = true);
		ImwStatusBar(ImwWindowManager& manager, const ImwStatusBar& oStatusBar);
		virtual						~ImwStatusBar();

		virtual void				OnStatusBar();

		int							GetHorizontalPriority() const;
		bool						IsAutoDeleted();
	private:
		ImwWindowManager&			m_pManager;
		int							m_iHorizontalPriority;
		bool						m_bAutoDeleted;
	};
	typedef ImVector<ImwStatusBar*> ImwStatusBarVector;
//SFF_END
}


#endif // __IM_STATUS_BAR_H__
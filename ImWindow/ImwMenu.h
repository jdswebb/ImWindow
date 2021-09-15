
#ifndef __IM_MENU_H__
#define __IM_MENU_H__

#include "ImwConfig.h"

namespace ImWindow
{

class ImwWindowManager;

//SFF_BEGIN
	class IMGUI_API ImwMenu
	{
	public:
		ImwMenu(ImwWindowManager& manager, int iHorizontalPriority = 0, bool bAutoDeleted = true);
		ImwMenu(ImwWindowManager& manager, const ImwMenu& oStatusBar);
		virtual						~ImwMenu();

		virtual void				OnMenu() = 0;

		int							GetHorizontalPriority() const;
		bool						IsAutoDeleted();
		ImwWindowManager&			GetManager() const { return m_pManager; }

	private:
		ImwWindowManager&			m_pManager;
		int							m_iHorizontalPriority;
		bool						m_bAutoDeleted;
	};
	typedef ImVector<ImwMenu*> ImwMenuVector;
//SFF_END
}


#endif // __IM_MENU_H__
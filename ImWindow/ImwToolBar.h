
#ifndef __IM_TOOL_BAR_H__
#define __IM_TOOL_BAR_H__

#include "ImwConfig.h"

namespace ImWindow
{

class ImwWindowManager;

//SFF_BEGIN
	class IMGUI_API ImwToolBar
	{
	public:
		ImwToolBar(ImwWindowManager& manager, int iHorizontalPriority = 0, bool bAutoDeleted = true);
		ImwToolBar(ImwWindowManager& manager, const ImwToolBar& oToolBar);
		virtual						~ImwToolBar();

		void						Destroy();

		virtual void				OnToolBar() = 0;

		int							GetHorizontalPriority() const;
		bool						IsAutoDeleted();
		ImwWindowManager&			GetManager() const { return m_pManager; }
	private:
		ImwWindowManager&			m_pManager;
		int							m_iHorizontalPriority;
		bool						m_bAutoDeleted;
	};
	typedef ImVector<ImwToolBar*> ImwToolBarVector;
//SFF_END
}


#endif // __IM_TOOL_BAR_H__
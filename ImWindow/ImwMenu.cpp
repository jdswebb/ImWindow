
#include "ImwMenu.h"

#include "ImwWindowManager.h"

namespace ImWindow
{
//SFF_BEGIN
	ImwMenu::ImwMenu(ImwWindowManager& manager, int iHorizontalPriority, bool bAutoDeleted)
		: m_pManager(manager)
	{
		m_iHorizontalPriority = iHorizontalPriority;
		m_bAutoDeleted = bAutoDeleted;

		m_pManager.AddMenu(this);
	}

	ImwMenu::ImwMenu(ImwWindowManager& manager, const ImwMenu& oStatusBar)
		: m_pManager(manager)
	{
		m_iHorizontalPriority = oStatusBar.m_iHorizontalPriority;
	}

	ImwMenu::~ImwMenu()
	{
		m_pManager.RemoveMenu(this);
	}

	int ImwMenu::GetHorizontalPriority() const
	{
		return m_iHorizontalPriority;
	}

	bool ImwMenu::IsAutoDeleted()
	{
		return m_bAutoDeleted;
	}
//SFF_END
}
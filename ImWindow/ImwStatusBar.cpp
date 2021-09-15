
#include "ImwStatusBar.h"

#include "ImwWindowManager.h"

namespace ImWindow
{
//SFF_BEGIN
	ImwStatusBar::ImwStatusBar(ImwWindowManager& manager, int iHorizontalPriority, bool bAutoDeleted)
		: m_pManager(manager)
	{
		m_iHorizontalPriority = iHorizontalPriority;
		m_bAutoDeleted = bAutoDeleted;

		m_pManager.AddStatusBar(this);
	}

	ImwStatusBar::ImwStatusBar(ImwWindowManager& manager, const ImwStatusBar& oStatusBar)
		: m_pManager(manager)
	{
		m_iHorizontalPriority = oStatusBar.m_iHorizontalPriority;
	}

	ImwStatusBar::~ImwStatusBar()
	{
		m_pManager.RemoveStatusBar(this);
	}

	void ImwStatusBar::OnStatusBar()
	{
	}

	int ImwStatusBar::GetHorizontalPriority() const
	{
		return m_iHorizontalPriority;
	}

	bool ImwStatusBar::IsAutoDeleted()
	{
		return m_bAutoDeleted;
	}
//SFF_END
}
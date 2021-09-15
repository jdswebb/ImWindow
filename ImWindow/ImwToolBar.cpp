
#include "ImwToolBar.h"

#include "ImwWindowManager.h"

namespace ImWindow
{
//SFF_BEGIN
	ImwToolBar::ImwToolBar(ImwWindowManager& manager, int iHorizontalPriority, bool bAutoDeleted)
		: m_pManager(manager)
	{
		m_iHorizontalPriority = iHorizontalPriority;
		m_bAutoDeleted = bAutoDeleted;

		m_pManager.AddToolBar(this);
	}

	ImwToolBar::ImwToolBar(ImwWindowManager& manager, const ImwToolBar& oToolBar)
		: m_pManager(manager)
	{
		m_iHorizontalPriority = oToolBar.m_iHorizontalPriority;
	}

	ImwToolBar::~ImwToolBar()
	{
		m_pManager.RemoveToolBar(this);
	}

	void ImwToolBar::Destroy()
	{
		m_pManager.DestroyToolBar(this);
	}

	int ImwToolBar::GetHorizontalPriority() const
	{
		return m_iHorizontalPriority;
	}

	bool ImwToolBar::IsAutoDeleted()
	{
		return m_bAutoDeleted;
	}
//SFF_END
}
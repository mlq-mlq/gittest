
// draw3View.h: Cdraw3View 类的接口
//

#pragma once


class Cdraw3View : public CView
{
protected: // 仅从序列化创建
	Cdraw3View() noexcept;
	DECLARE_DYNCREATE(Cdraw3View)

// 特性
public:
	Cdraw3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdraw3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // draw3View.cpp 中的调试版本
inline Cdraw3Doc* Cdraw3View::GetDocument() const
   { return reinterpret_cast<Cdraw3Doc*>(m_pDocument); }
#endif


'[FILE:C:\mlgb\VFB\Projects\makevirus\forms\Form1.frm|617]
'-----------------------------------------------------------------------------
' �� VisualFreeBasic 5.2.8 ���ɵ�Դ����
' ����ʱ�䣺2020��05��11�� 09ʱ00��40��
' ������Ϣ����� www.yfvb.com 
'-----------------------------------------------------------------------------

'------------------------------------------------------------------------------
'VisualFreeBasic �Զ����ɵ� mv ����
'------------------------------------------------------------------------------

Function mv_Class_Form.Show(hWndParent As.hWnd = HWND_DESKTOP, Modal As Boolean = False, UserData As Integer = 0) As .hWnd	 '���ش��ڲ�����ʾ, ģ̬��ʾ��True {2.True.False} UserData �Ǵ��ݸ������¼��Ĳ�������������ֵ
   If This.Repeat = False Then 
      If IsWindow(This.hWnd) Then 
         This.FlashWindow
         Return This.hWnd
      End if 
   End if    
   Dim pWindow AS CWindow Ptr = New CWindow("makevirus_mv")
   '����һ������
   hWnd = pWindow->Create(hWndParent, "�������������� v1.1 [2020��ĸ�׽ڿ��� ��-]", Cast(WNDPROC, @mv_FORMPROCEDURE), 0, 0, 523, 232, WS_THICKFRAME Or WS_CAPTION Or WS_SYSMENU Or WS_MINIMIZEBOX Or WS_MAXIMIZEBOX Or WS_CLIPSIBLINGS Or WS_CLIPCHILDREN Or WS_POPUP Or WS_SIZEBOX, WS_EX_WINDOWEDGE Or WS_EX_CONTROLPARENT Or WS_EX_LEFT Or WS_EX_LTRREADING Or WS_EX_RIGHTSCROLLBAR)
   If IsWindow(hWnd) = 0 Then
      Delete pWindow
      Return 0
   End if
   Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
   SetPropW(hWnd, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
   DIm rcParent AS RECT  'Ϊ�ؼ��������ԣ���ʼ��������
   .GetClientRect(hWnd, @rcParent)
   rcParent.Right = AfxUnscaleX(rcParent.Right)  ' Ϊ�Զ���ӦDPI��ȫ������Ϊ 100%DPI ʱ����ֵ
   rcParent.Bottom = AfxUnscaleX(rcParent.Bottom) 
   fp->hWndParent = hWndParent
   fp->nName = "mv"
   
   '������������������
   pWindow->ClassStyle = CS_VREDRAW Or CS_HREDRAW Or CS_DBLCLKS
   'ͼ��
   fp->BigIcon = NULL
   fp->SmallIcon = NULL
   pWindow->BigIcon = fp->BigIcon     '��Ҫ�����ٴ���ʱ���پ��
   pWindow->SmallIcon = fp->SmallIcon
'   This.Constructor '��ʼ��������
   '�˵�
   '����λ��
   pWindow->Center
   '��괩͸ ͸���� ͸����ɫ
   
   
   This.TransColor =  &H197F7F7F
   This.MousePointer = 0
   This.BackColor = &H0F7F7F7F
   
   
   
   '�������е��ӿؼ�
   Dim hWndControl As .hWnd '�ؼ����
   
   hWndControl = pWindow->AddControl("CHECKBOX", hWnd, 101, "O3�Ż�", 31, 90, 83, 27,WS_CHILD Or WS_CLIPCHILDREN Or WS_CLIPSIBLINGS Or BS_AUTOCHECKBOX Or BS_TEXT Or BS_NOTIFY Or BS_LEFT Or BS_VCENTER Or BS_MULTILINE Or WS_VISIBLE Or WS_TABSTOP ,0 , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 101
      fp->nText = "O3�Ż�"
      fp->ControlType = 0
      This.Check1.hWnd = hWndControl 
      This.Check1.IDC =101
      fp->nName = "Check1"
      This.Check1.Caption = "O3�Ż�"
      This.Check1.ForeColor = &H087F7F7F
      This.Check1.BackColor = &H197F7F7F
      This.Check1.Font = "Tahoma,9,0"
      fp->nLeft = 31
      fp->nTop = 90
      fp->nWidth = 83
      fp->nHeight = 27
   End IF

   hWndControl = pWindow->AddControl("TEXTBOX", hWnd, 102, "", 28, 26, 484, 22,WS_CHILD Or ES_LEFT Or ES_AUTOHSCROLL Or WS_VISIBLE Or WS_TABSTOP ,WS_EX_CLIENTEDGE , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 102
      fp->nText = ""
      fp->ControlType = 1
      This.Text1.hWnd = hWndControl 
      This.Text1.IDC =102
      fp->nName = "Text1"
      This.Text1.ForeColor = &H087F7F7F
      This.Text1.BackColor = &H057F7F7F
      This.Text1.Font = "Tahoma,9,0"
      fp->nLeft = 28
      fp->nTop = 26
      fp->nWidth = 484
      fp->nHeight = 22
   End IF

   hWndControl = pWindow->AddControl("TEXTBOX", hWnd, 103, "", 27, 56, 84, 24,WS_CHILD Or ES_LEFT Or ES_AUTOHSCROLL Or WS_VISIBLE Or WS_TABSTOP ,WS_EX_CLIENTEDGE , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 103
      fp->nText = ""
      fp->ControlType = 1
      This.Text2.hWnd = hWndControl 
      This.Text2.IDC =103
      fp->nName = "Text2"
      This.Text2.ForeColor = &H087F7F7F
      This.Text2.BackColor = &H057F7F7F
      This.Text2.Font = "Tahoma,9,0"
      fp->nLeft = 27
      fp->nTop = 56
      fp->nWidth = 84
      fp->nHeight = 24
   End IF

   hWndControl = pWindow->AddControl("TEXTBOX", hWnd, 104, "xbck", 202, 58, 312, 23,WS_CHILD Or ES_LEFT Or ES_AUTOHSCROLL Or WS_VISIBLE Or WS_TABSTOP ,WS_EX_CLIENTEDGE , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 104
      fp->nText = "xbck"
      fp->ControlType = 1
      This.Text3.hWnd = hWndControl 
      This.Text3.IDC =104
      fp->nName = "Text3"
      This.Text3.Text = "xbck"
      This.Text3.ForeColor = &H087F7F7F
      This.Text3.BackColor = &H057F7F7F
      This.Text3.Font = "Tahoma,9,0"
      fp->nLeft = 202
      fp->nTop = 58
      fp->nWidth = 312
      fp->nHeight = 23
   End IF

   hWndControl = pWindow->AddControl("CHECKBOX", hWnd, 105, "upxѹ��", 31, 124, 70, 25,WS_CHILD Or WS_CLIPCHILDREN Or WS_CLIPSIBLINGS Or BS_AUTOCHECKBOX Or BS_TEXT Or BS_NOTIFY Or BS_LEFT Or BS_VCENTER Or BS_MULTILINE Or WS_VISIBLE Or WS_TABSTOP ,0 , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 105
      fp->nText = "upxѹ��"
      fp->ControlType = 0
      This.Check2.hWnd = hWndControl 
      This.Check2.IDC =105
      fp->nName = "Check2"
      This.Check2.Caption = "upxѹ��"
      This.Check2.ForeColor = &H087F7F7F
      This.Check2.BackColor = &H197F7F7F
      This.Check2.Font = "Tahoma,9,0"
      fp->nLeft = 31
      fp->nTop = 124
      fp->nWidth = 70
      fp->nHeight = 25
   End IF

   fp->VrControls = new FormControlsPro_TYPE '��������ؼ�����
   fp = fp->VrControls
   If fp Then 
      This.Label1.hWndForm = hWnd 
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 106
      fp->nText = "gcc������·����gcc.exe��"
      fp->ControlType = 100
      This.Label1.IDC =106
      fp->Style = (fp->Style And &H00FFFFFF) Or (Cast(UInteger,0) Shl 24)
      fp->Style = (fp->Style And &HFF00FFFF) Or (Cast(UInteger,0) Shl 16)
      fp->Style Or= &H4 
      fp->Style And= Not &H8 
      fp->nName = "Label1"
      This.Label1.Caption = "gcc������·����gcc.exe��"
      fp->Style Or= &H1 
      fp->Style Or= &H2 
      This.Label1.ForeColor = &H087F7F7F
      This.Label1.BackColor = &H197F7F7F
      This.Label1.Font = "Tahoma,9,0"
      fp->nLeft = 31
      fp->nTop = 7
      fp->nWidth = 154
      fp->nHeight = 20
   End IF

   fp->VrControls = new FormControlsPro_TYPE '��������ؼ�����
   fp = fp->VrControls
   If fp Then 
      This.Label2.hWndForm = hWnd 
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 107
      fp->nText = "����"
      fp->ControlType = 100
      This.Label2.IDC =107
      fp->Style = (fp->Style And &H00FFFFFF) Or (Cast(UInteger,0) Shl 24)
      fp->Style = (fp->Style And &HFF00FFFF) Or (Cast(UInteger,0) Shl 16)
      fp->Style Or= &H4 
      fp->Style And= Not &H8 
      fp->nName = "Label2"
      This.Label2.Caption = "����"
      fp->Style Or= &H1 
      fp->Style Or= &H2 
      This.Label2.ForeColor = &H087F7F7F
      This.Label2.BackColor = &H197F7F7F
      This.Label2.Font = "Tahoma,9,0"
      fp->nLeft = 1
      fp->nTop = 61
      fp->nWidth = 28
      fp->nHeight = 26
   End IF

   fp->VrControls = new FormControlsPro_TYPE '��������ؼ�����
   fp = fp->VrControls
   If fp Then 
      This.Label3.hWndForm = hWnd 
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 108
      fp->nText = "���ܺ�׺��"
      fp->ControlType = 100
      This.Label3.IDC =108
      fp->Style = (fp->Style And &H00FFFFFF) Or (Cast(UInteger,0) Shl 24)
      fp->Style = (fp->Style And &HFF00FFFF) Or (Cast(UInteger,0) Shl 16)
      fp->Style Or= &H4 
      fp->Style And= Not &H8 
      fp->nName = "Label3"
      This.Label3.Caption = "���ܺ�׺��"
      fp->Style Or= &H1 
      fp->Style Or= &H2 
      This.Label3.ForeColor = &H087F7F7F
      This.Label3.BackColor = &H197F7F7F
      This.Label3.Font = "Tahoma,9,0"
      fp->nLeft = 114
      fp->nTop = 60
      fp->nWidth = 99
      fp->nHeight = 22
   End IF

   hWndControl = pWindow->AddControl("TEXTBOX", hWnd, 109, "������ɺ����ʾ��Ϣ", 123, 90, 391, 22,WS_CHILD Or ES_LEFT Or ES_AUTOHSCROLL Or WS_VISIBLE Or WS_TABSTOP ,WS_EX_CLIENTEDGE , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 109
      fp->nText = "������ɺ����ʾ��Ϣ"
      fp->ControlType = 1
      This.Text4.hWnd = hWndControl 
      This.Text4.IDC =109
      fp->nName = "Text4"
      This.Text4.Text = "������ɺ����ʾ��Ϣ"
      This.Text4.ForeColor = &H087F7F7F
      This.Text4.BackColor = &H057F7F7F
      This.Text4.Font = "Tahoma,9,0"
      fp->nLeft = 123
      fp->nTop = 90
      fp->nWidth = 391
      fp->nHeight = 22
   End IF

   hWndControl = pWindow->AddControl("BUTTON", hWnd, 110, "��ʼ����", 123, 122, 387, 43,WS_CHILD Or BS_PUSHBUTTON Or BS_CENTER Or BS_VCENTER Or SS_NOTIFY Or WS_VISIBLE Or WS_TABSTOP ,0 , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 110
      fp->nText = "��ʼ����"
      fp->ControlType = 2
      This.Command1.hWnd = hWndControl 
      This.Command1.IDC =110
      fp->nName = "Command1"
      This.Command1.Caption = "��ʼ����"
      This.Command1.Font = "Tahoma,9,0"
      fp->nLeft = 123
      fp->nTop = 122
      fp->nWidth = 387
      fp->nHeight = 43
   End IF

   hWndControl = pWindow->AddControl("TEXTBOX", hWnd, 111, "���ɲ�����·��", 30, 167, 486, 36,WS_CHILD Or ES_LEFT Or ES_AUTOHSCROLL Or WS_VISIBLE Or WS_TABSTOP ,WS_EX_CLIENTEDGE , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 111
      fp->nText = "���ɲ�����·��"
      fp->ControlType = 1
      This.Text5.hWnd = hWndControl 
      This.Text5.IDC =111
      fp->nName = "Text5"
      This.Text5.Text = "���ɲ�����·��"
      This.Text5.ForeColor = &H087F7F7F
      This.Text5.BackColor = &H057F7F7F
      This.Text5.Font = "Tahoma,9,0"
      fp->nLeft = 30
      fp->nTop = 167
      fp->nWidth = 486
      fp->nHeight = 36
   End IF

   hWndControl = pWindow->AddControl("OPTION", hWnd, 112, "RC4����", 198, 4, 76, 15,WS_CHILD Or WS_CLIPCHILDREN Or WS_CLIPSIBLINGS Or BS_AUTORADIOBUTTON Or BS_TEXT Or BS_NOTIFY Or BS_LEFT Or BS_VCENTER Or BS_MULTILINE Or WS_GROUP Or WS_DISABLED Or WS_VISIBLE Or WS_TABSTOP ,0 , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 112
      fp->nText = "RC4����"
      fp->ControlType = 0
      This.Option1.hWnd = hWndControl 
      This.Option1.IDC =112
      fp->nName = "Option1"
      This.Option1.Caption = "RC4����"
      This.Option1.ForeColor = &H087F7F7F
      This.Option1.BackColor = &H197F7F7F
      This.Option1.Font = "Tahoma,9,0"
      fp->nLeft = 198
      fp->nTop = 4
      fp->nWidth = 76
      fp->nHeight = 15
      This.Option1.ToolTip = "�����ٶȽϿ죬��ȫ�Ը�"
   End IF

   hWndControl = pWindow->AddControl("OPTION", hWnd, 113, "Xor����", 296, 3, 89, 18,WS_CHILD Or WS_CLIPCHILDREN Or WS_CLIPSIBLINGS Or BS_AUTORADIOBUTTON Or BS_TEXT Or BS_NOTIFY Or BS_LEFT Or BS_VCENTER Or BS_MULTILINE Or WS_VISIBLE Or WS_TABSTOP ,0 , , Cast(Any Ptr, @mv_CODEPROCEDURE))
   If hWndControl Then 
      Dim fp As FormControlsPro_TYPE ptr = new FormControlsPro_TYPE
      SetPropW(hWndControl, "FCP_TYPE_PTR", Cast(Any Ptr, fp))
      fp->hWndParent = hWnd
      fp->Index = -1
      fp->IDC = 113
      fp->nText = "Xor����"
      fp->ControlType = 0
      This.Option2.hWnd = hWndControl 
      This.Option2.IDC =113
      fp->nName = "Option2"
      This.Option2.Caption = "Xor����"
      This.Option2.ForeColor = &H087F7F7F
      This.Option2.BackColor = &H197F7F7F
      This.Option2.Font = "Tahoma,9,0"
      fp->nLeft = 296
      fp->nTop = 3
      fp->nWidth = 89
      fp->nHeight = 18
      This.Option2.ToolTip = "�����ٶȼ��죬��ȫ�Խϵͣ����ױ��ƽ�"
   End IF

    MV_WM_CREATE(hWnd ,UserData )  '[FILE:C:\mlgb\VFB\Projects\makevirus\forms\Form1.frm|53]
   PostMessage(hWnd, &H1000, &H1000,CAst(lPArAm,UsErDAtA)) '��ʾ�¼�
   '����������Ϊѡ�˳���е���Ϳؼ�
   hWndControl = hWnd '���ý����ᷢ����Ϣѭ���������Ҫ��ͬʱ�࿪ͬһ�����ڣ��ͷ��� hWnd ����ֵΪ��һ�����ھ���������
      This.Check1.SetFocus

   Function = FLY_DoMessagePump(pWindow,Modal, hWndControl, hWndParent, SW_SHOWNORMAL, False) ' IsMDIForm �������MDI���ڣ������ñ�־
End Function

Function mv_FORMPROCEDURE(ByVal hWndForm As HWND, ByVal wMsg As uInteger, ByVal wParam As WPARAM, ByVal lParam As LPARAM) As LResult 'mv ���ڻص�����
   Dim tLResult As LResult
   Select Case wMsg
      Case WM_SIZE
         If wParam <> SIZE_MINIMIZED Then
            '״̬��������С
            
            '�ؼ����ֵ�����С
            FLY_VFB_Layout_hWndForm(hWndForm)
         End If
      Case WM_PAINT '��������ؼ�
         Dim fp As FormControlsPro_TYPE ptr = GetPropW(hWndForm, "FCP_TYPE_PTR")
         if fp Then
            Dim WinCc As Long = GetCodeColorGDI(fp->BackColor)
            If WinCc = -1 Then WinCc = GetSysColor(COLOR_BTNFACE)
            Dim gg As yGDI = yGDI(hWndForm, WinCc, True)
            
            '�������ؼ�
            
            mv.Label3.hWndForm = hWndForm 
            mv.Label3.Drawing(gg,hWndForm,WinCc)  
            mv.Label2.hWndForm = hWndForm 
            mv.Label2.Drawing(gg,hWndForm,WinCc)  
            mv.Label1.hWndForm = hWndForm 
            mv.Label1.Drawing(gg,hWndForm,WinCc)  
            
         end if
   End Select
   '����CASE�ӱ����ϵĿؼ��Լ��û��Լ��������κ���Щ��Ϣ�е���֪ͨ�¼���
   Select Case wMsg
      Case &H1000
         if wParam = &H1000 then
            Dim rc as Rect   '���ڿؼ�����ʱ��ȳߴ���Ϣ������Ҫ���´���һ��
            GetClientRect(hWndForm, @rc)
            SendMessage(hWndForm, WM_SIZE, SIZE_RESTORED, MAKELPARAM(rc.Right - rc.Left, rc.Bottom - rc.Top))
            
            InvalidateRect(hWndForm, Null, True)
            UpdateWindow(hWndForm)
            Return 0
         End If
      Case WM_COMMAND
         
         Dim As Long IDC =LoWord(wParam) ,CODE = HiWord(wParam)
          If IDC = 110 And CODE = BN_CLICKED Then  ' Command1
              MV_COMMAND1_BN_CLICKED(hWndForm, Cast(HWND, lParam))  '[FILE:C:\mlgb\VFB\Projects\makevirus\forms\Form1.frm|4]
           End If

      Case WM_HSCROLL
         

      Case WM_VSCROLL
         

         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
      Case WM_NOTIFY
         Dim FLY_pNotify As NMHDR Ptr = Cast(NMHDR Ptr, lParam)
         
         
   End Select
   '��������ؼ��¼�
   

   '�����κ��Զ�����Ϣ��
   
   '����CASE����VisualFreeBasic�ڲ�Ҫ��
   Select Case wMsg
      Case WM_GETMINMAXINFO
         '��ҪΪMDI�Ӵ��崦������Ϣ����Ϊ��������Ӵ������󻯡�
         If (GetWindowLongPtr(hWndForm, GWL_EXSTYLE) And WS_EX_MDICHILD) <> WS_EX_MDICHILD Then
            DefWindowProcW(hWndForm, wMsg, wParam, lParam)
            Dim FLY_pMinMaxInfo As MINMAXINFO Ptr = Cast(MINMAXINFO Ptr, lParam)
            
            
            
            
            Return 0
            End If	
         Case WM_SYSCOMMAND
            If (wParam And &HFFF0) = SC_CLOSE Then
               SendMessage hWndForm, WM_CLOSE, wParam, lParam
               Exit Function
            End If
         Case WM_SETFOCUS
            '���������û���ȷ���ӿؼ���
            'If ff Then SetFocus ff->CtrlFocus
         Case WM_SYSCOLORCHANGE, WM_THEMECHANGED '����ϵͳ��ɫ���ý��и���, ����������¼�֮��㲥��ÿ�����ڡ�
            'Ϊ�����ϵĿؼ����´����κα������ʡ�
            '������Ϣת�����κ�ͨ�ÿؼ�����Ϊ���ǲ����Զ����մ���Ϣ��
            Dim fp As FormControlsPro_TYPE ptr = GetPropW(hWndForm, "FCP_TYPE_PTR")
            If fp then
               Dim cc as Long = GetCodeColorGDI(fp->BackColor)
               if cc = -1 then cc = GetSysColor(COLOR_BTNFACE)
               If fp->hBackBrush Then DeleteBrush(fp->hBackBrush)
               fp->hBackBrush = CreateSolidBrush(cc)
               dim zhWnd as HWND = GetWindow(hWndForm, GW_CHILD)
               While zhWnd
                  dim zfp As FormControlsPro_TYPE ptr = GetPropW(zhWnd, "FCP_TYPE_PTR")
                  Dim zcc as Long = GetCodeColorGDI(zfp->BackColor)
                  if zcc = -1 then zcc = cc
                  If zfp->hBackBrush Then DeleteBrush(zfp->hBackBrush)
                  zfp->hBackBrush = CreateSolidBrush(zcc)
                  zhWnd = GetWindow(zhWnd, GW_HWNDNEXT)
               Wend 
            End If
            
         Case WM_NOTIFY
            '{TOOLBAR_NOTIFY}
         Case WM_SETCURSOR
            dim a as long = LOWORD(lParam)
            if a = 1 then 'λ�ڿͻ���
               Dim fp As FormControlsPro_TYPE ptr = GetPropW(cast(hwnd, wParam), "FCP_TYPE_PTR")
               if fp Then
                  if fp->nCursor then
                     SetCursor(fp->nCursor)
                     Return True
                  end if
               end if
            end if
         Case WM_PAINT
            Return True  '�����Ի棬��Ҫ��������
         Case WM_ERASEBKGND ' �����Ի棬����Ҫϵͳ������
            Return True   '��ֹ����������������������ġ�
         Case WM_DESTROY
            
            '֪ͨÿ���ؼ��ࣨ��������ؼ���������Ҫ��ж�ع�������Ϊ��������ȫ�ֵģ�������Ϊ�������ٶ����١�
            mv.hWndForm = hWndForm 
            mv.Destructor 
            mv.Check1.hWndForm = hWndForm
            mv.Check1.Destructor
            mv.Text1.hWndForm = hWndForm
            mv.Text1.Destructor
            mv.Text2.hWndForm = hWndForm
            mv.Text2.Destructor
            mv.Text3.hWndForm = hWndForm
            mv.Text3.Destructor
            mv.Check2.hWndForm = hWndForm
            mv.Check2.Destructor
            mv.Label1.hWndForm = hWndForm
            mv.Label1.Destructor
            mv.Label2.hWndForm = hWndForm
            mv.Label2.Destructor
            mv.Label3.hWndForm = hWndForm
            mv.Label3.Destructor
            mv.Text4.hWndForm = hWndForm
            mv.Text4.Destructor
            mv.Command1.hWndForm = hWndForm
            mv.Command1.Destructor
            mv.Text5.hWndForm = hWndForm
            mv.Text5.Destructor
            mv.Option1.hWndForm = hWndForm
            mv.Option1.Destructor
            mv.Option2.hWndForm = hWndForm
            mv.Option2.Destructor

            'ɾ���κ��û������Timer�ؼ�
            
            
            mv.hWnd = 0
            Dim pWindow AS CWindow Ptr = AfxCWindowPtr(hWndForm)
            If pWindow Then Delete pWindow
            Dim fp As FormControlsPro_TYPE ptr = GetPropW(hWndForm, "FCP_TYPE_PTR")
            While fp   '��������ؼ�
               if fp->BigIcon then DestroyIcon fp->BigIcon
               if fp->SmallIcon then DestroyIcon fp->SmallIcon
               if fp->hBackBrush then DeleteBrush(fp->hBackBrush)
               If fp->ToolWnd Then DestroyWindow fp->ToolWnd
               if fp->nCursor then DestroyCursor fp->nCursor    
               Dim sfp As FormControlsPro_TYPE ptr = fp->VrControls
               Delete fp
               fp = sfp
            Wend 
            RemovePropW hWndForm, "FCP_TYPE_PTR"
            
         Case WM_CTLCOLOREDIT, WM_CTLCOLORLISTBOX, WM_CTLCOLORSTATIC, WM_CTLCOLORBTN
            '���ӿؼ��յ�����Ϣ������ʾ���ڴ˴�������ɫ���ԡ�lParam��Control�ľ���� wParam��hDC��
            Dim fp As FormControlsPro_TYPE ptr = GetPropW(Cast(HWND, lParam), "FCP_TYPE_PTR")
            If fp then
               Dim cc as Long = GetCodeColorGDI(fp->ForeColor)
               if cc <> -1 then SetTextColor(Cast(hDC, wParam), cc)
               cc = GetCodeColorGDI(fp->BackColor)
               if cc = -1 Then
                  Dim wfp As FormControlsPro_TYPE ptr = GetPropW(hWndForm, "FCP_TYPE_PTR")
                  if wfp = 0 then exit select
                  cc = GetCodeColorGDI(wfp->BackColor)
               End If
               if cc = -1 then cc = GetSysColor(COLOR_BTNFACE)
               SetBkColor(Cast(hDC, wParam), cc)
               If fp->hBackBrush = 0 Then fp->hBackBrush = CreateSolidBrush(cc)
               Return Cast(LRESULT, fp->hBackBrush)
            End If
      End Select
      Function = DefWindowProcW(hWndForm, wMsg, wParam, lParam)
   End Function

Function mv_CODEPROCEDURE(ByVal hWndControl As HWND, ByVal wMsg As uInteger, ByVal wParam As WPARAM, ByVal lParam As LPARAM) As LRESULT  ' mv �ؼ��ص�
   'mv ������ÿ���ؼ���������Ϣ���ڴ˺����д�����
   Dim fp As FormControlsPro_TYPE ptr = GetPropW(hWndControl, "FCP_TYPE_PTR")
   Dim tLResult As LResult
   '����CASE�ڴ����û������¼�֮ǰ�����ڲ�VisualFreeBasicҪ����Щ�¼��ڴ�֮��ĵ���CASE�д�������
   Select Case wMsg
      Case WM_DESTROY
         
         
      Case WM_NCHITTEST  '�����������ڼ��
 
         
   End Select
   
   
   '�����������ÿ���û�����ĺ�����
   Select Case wMsg

      Case 0
         
   End Select
   
   '���б�Ҫ�������κ��Զ�����Ϣ��
   
   
   if wMsg=WM_DESTROY then 
      '// ��Ҫ��ɾ���ؼ�����
      SetWindowLongPtrW hWndControl, GWLP_WNDPROC, CAST(LONG_PTR, RemovePropW(hWndControl, "OLDWNDPROC"))
      If fp Then
         if fp->hBackBrush then DeleteBrush(fp->hBackBrush)
         If fp->ToolWnd Then DestroyWindow fp->ToolWnd
         if fp->nCursor then DestroyCursor fp->nCursor
         Delete fp
      End If
      RemovePropW hWndControl, "FCP_TYPE_PTR"      
      
   End If
   '�˿ؼ������࣬������Ǳ��뽫����δ��������Ϣ���͵�ԭʼ���ڹ��̡�
   FUNCTION = CallWindowProcW(GetPropW(hWndControl, "OLDWNDPROC"), hWndControl, wMsg, wParam, lParam)
   
End Function
'�Ż��Ǳ�׼�Ĺ���ģ�棬��Ҳ�����Լ���ģ�档
'д�ù��̣�����ȫ���ļ���VFB�����ļ����template���Ｔ�ɣ����ļ�����Ϊ VFB�½���������ʾ������
'��ȥ�����������Լ��Ĺ���ģ��ɡ�

Sub mv_Command1_BN_Clicked(hWndForm As hWnd, hWndControl As hWnd)  '����
   if Dir(App.Path + "\\bin\\upx.exe") = "" then
      MessageBox NULL, "��ѹ����������", "error", 16
      exit sub
   End if
   if Dir(App.Path + "\\bin\\1.c") = "" then
      MessageBox NULL, "�� 1.c ", "error", 16
      exit sub
   End if
   if len(mv.Text1.text) = 0 then
      MessageBox NULL, "�����������ڣ�����", "error", 16
      exit sub
   End if
   Dim _data As String
   Dim buffer As String
   
   if mv.Option1.Value = True then
      Open App.Path + "\\bin\\1.C" For Input As #1
   Else
        Open App.Path + "\\bin\\1.C" For Input As #1
   End if
   Do While Not EOF(1)
      Line Input #1, buffer
      _data = _data + buffer + vbcrlf
   Loop
   Close #1
   _data = ReplaceASM(ReplaceASM(ReplaceASM(ReplaceASM( _data, ",4)", "," + str(len(mv.Text3.text)) + ")"), "CX+*FBHSF+/HBSF", mv.Text2.text), "���ĵ��Ա����ˣ��ֶ�������", mv.Text4.text), "bck2", mv.Text3.text)
   if len(Dir(Environ("temp") + "\\6.c")) <> 0 then
      DeleteFileA Environ("temp") + "\\6.c"
   End if
   open Environ("temp") + "\\6.c" for output as #1
   print #1, _data
   close #1
   Dim a as string
   if mv.Check1.Value = true Then
      a = " -O3"
   Else
      a = " -O1"
   End if
   Shell mv.Text1.Text + " " + A + " -std=gnu99 -mwindows """ + Environ("temp") +"\"+ "6.c"" " + "-o " + """" + mv.Text5.TEXT + """"
   Dim t As String = mv.Text5.text
   mv.Text5.Text = mv.Text1.Text + " " + A + " -std=gnu99 -mwindows """ + Environ("temp") + "\"+"6.c"" " + "-o " + """" + mv.Text5.TEXT + """"
   if mv.Check2.Value = true Then
      Sleep 3500
      Shell App.Path + "\\bin\\upx.exe " + """" + t + """"
      mv.Text5.Text = App.Path + "\\bin\\upx.exe " + """" + t + """"
   End if
End Sub

Sub mv_WM_Create(hWndForm As hWnd,UserData As Integer)  '��ɴ������ڼ����еĿؼ��󣬴�ʱ���ڻ�δ��ʾ��ע���Զ�����Ϣ�� WM_Create ��ʱ��δ�����ؼ��ͳ�ʼ��ֵ��
mv.Option2.Value=True
End Sub






















'-----------------------------------------------------------------------------
' �� VisualFreeBasic 5.2.8 ���ɵ�Դ����
' ����ʱ�䣺2020��05��11�� 09ʱ00��40��
' ������Ϣ����� www.yfvb.com 
'-----------------------------------------------------------------------------

' ������ȫ�ֶ���Դ�룬����type��ȫ�ֱ������������� ���ڴ˴���
#include Once "Afx/CGdiPlus/CGdiPlus.inc"
#include Once "afx\CWindow.inc"
Type FormControlsPro_TYPE '����ؼ���˽�����ԣ�ÿ���ؼ�����ͬ��ȫ���ڴˣ���ȡ���衣
   hWndParent As HWND   '�����ھ��
   nName As String  '����\1\����������ʶ����������\Command\
   Index As Long   '�ؼ�����������С�����ʾ�ǿؼ�����
   IDC As Long     '
   BigIcon As  HICON     '���ڴ�ͼ�꣬��Ҫ����������
   SmallIcon  As  HICON  '����Сͼ��
   nText as CWSTR     '
   ControlType as Long  '�ؼ����ͣ�Ϊ�˻��ؼ�  >=100 Ϊ����ؼ�  100=LABEL   TEXT=1 Button=2
   nData As String     '���ݴ�ţ����ض����ؼ������Լ���Ҫ����������ݡ�
   Style as UInteger   '��ʽ��ÿ���ؼ������Լ��Ķ���
   TransPer As Long  '͸����\0\����͸���ȣ��ٷֱ�(0--100)��0%��͸�� 100%ȫ͸��\0\
   TransColor As Long =&H197F7F7F  '͸����ɫ\3\͸����ɫ����ʽ��&H01020304  02.03.04Ϊ7Fʱ��01ֵ0��30��ϵͳɫ��25Ϊ��ʹ�ã�����ʱ����Aͨ����GDI+��Ҫ 02 04 ��ֵ�Ե� 
   MousePointer As Long  'ָ��\2\����ڴ����ϵ���״\0 - Ĭ��,1 - ��̨����,2 - ��׼��ͷ,3 - ʮ�ֹ��,4 - ��ͷ���ʺ�,5 - �ı����ֹ��,6 - �����ý�ֹȦ,7 - �ƶ�,8 - ˫��ͷ�L�J,9 - ˫��ͷ����,10 - ˫��ͷ��I�K,11 - ˫��ͷ����,12 - ��ֱ��ͷ,13 - ɳ©,14 - ����
   ForeColor As Long =&H197F7F7F '����ɫ ��ʽ��&H01020304  02.03.04Ϊ7Fʱ��01ֵ0��30��ϵͳɫ��25Ϊ��ʹ�ã�����ʱ����Aͨ����GDI+��Ҫ 02 04 ��ֵ�Ե� 
   BackColor As Long =&H197F7F7F '����ɫ ��ʽ��&H01020304  02.03.04Ϊ7Fʱ��01ֵ0��30��ϵͳɫ��25Ϊ��ʹ�ã�����ʱ����Aͨ����GDI+��Ҫ 02 04 ��ֵ�Ե� 
   hBackBrush As HBRUSH '����ˢ�ӣ����ظ����ںͿؼ���
   ForeColorHot As Long =&H197F7F7F  '�ȵ���ɫ ��ʽ��&H01020304  02.03.04Ϊ7Fʱ��01ֵ0��30��ϵͳɫ��25Ϊ��ʹ�ã�����ʱ����Aͨ����GDI+��Ҫ 02 04 ��ֵ�Ե� 
   BackColorHot As Long =&H197F7F7F' �ȵ��ɫ ��ʽ��&H01020304  02.03.04Ϊ7Fʱ��01ֵ0��30��ϵͳɫ��25Ϊ��ʹ�ã�����ʱ����Aͨ����GDI+��Ҫ 02 04 ��ֵ�Ե� 
   nFont As String  '����\4\���ڴ˶�����ı����塣\΢���ź�,9,0\
   Tag As CWSTR  ' ���� \ 1 \ ˽���Զ����ı���ؼ������� \ \ 
   ToolTip As CWSTR  ' ��ʾ \ 1 \ һ����ʾ�����������ͣ�ڿؼ�ʱ��ʾ���� \ \ 
   ToolTipBalloon  As Long  ' ������ʽ \ 2 \ һ��������ʽ��ʾ������ʾ�� \ False \ True, False
   ToolWnd As HWND       '��ʾ���ھ������������
   PasswordChar As Long  '��������\1\Ϊ�༭�ؼ��м����ÿ���ַ���ʾһ���Ǻţ�*���������ַ����������ڵ��б༭�ؼ���\\
   nCursor As HCURSOR    '���ָ����
   nLeft As Long         '����/��������ڸ����ڵ� X ��ӦDPI��ֵ��Ϊ 100%DPI��ֵ�����أ�
   nTop As Long          '����/��������ڸ����ڵ� Y ��ӦDPI��ֵ��Ϊ 100%DPI��ֵ�����أ�
   nWidth As Long        '����/���ÿؼ����� ��ӦDPI��ֵ��Ϊ 100%DPI��ֵ�����أ�
   nHeight As Long       '����/���ÿؼ��߶� ��ӦDPI��ֵ��Ϊ 100%DPI��ֵ�����أ���
   anchor  AS LONG       '�ؼ����� �Զ�������ʽ
   nRight As Long        '�ؼ����� �ã�����ڴ����ұ߾��� ��ӦDPI��ֵ��Ϊ 100%DPI��ֵ�����أ���
   nBottom As Long       '�ؼ����� �ã�����ڴ��ڵױ߾��� ��ӦDPI��ֵ��Ϊ 100%DPI��ֵ�����أ���
   centerX AS LONG       '�ؼ����� �� �е�  ��ӦDPI��ֵ��Ϊ 100%DPI��ֵ�����أ�
   centerY AS LONG       '�ؼ����� ��
   VrControls As FormControlsPro_TYPE ptr '����������ڴ� ����ؼ� ��������һ������ؼ�����ָ�룬ֱ��Ϊ 0 ��ʾû��
End Type
Declare Function gFLY_GetFontHandles(mFont As String) As HFONT
Declare Function GetCodeColorGDI(coColor As Long) As Long
Declare Function GetCodeColorGDIplue(coColor As Long) As Long
Declare Function FF_AddTooltip(hWndForm AS HWND, strTooltipText AS wString, bBalloon AS Long, X as Long = 0, Y As Long = 0, W As Long = 0, H As Long = 0) As HWND
Declare Sub FLY_VFB_Layout_hWndForm(hWndForm As HWND) 
Declare Sub FLY_VFB_Layout_Handle(fp As FormControlsPro_TYPE ptr, pWidth AS LONG, pHeight AS LONG, nWidth AS LONG, nHeight AS LONG, ByRef x AS LONG, ByRef y AS LONG, ByRef xWidth AS LONG, ByRef yHeight AS LONG)
#include Once "WinClass\yGDI.inc"
#include Once "WinClass\ClsForm.inc"
#include Once "WinClass\ClsControl.inc"
#include Once "WinClass\ClsVirtualCl.inc"

#include Once "WinClass\ClsCheckBox.inc"

#include Once "WinClass\ClsTextBox.inc"

#include Once "WinClass\ClsLabel.inc"

#include Once "WinClass\clsButton.inc"

#include Once "WinClass\ClsOpButton.inc"


Type mv_Class_Form Extends Class_Form
    Check1 As Class_CheckBox
    Text1 As Class_TextBox
    Text2 As Class_TextBox
    Text3 As Class_TextBox
    Check2 As Class_CheckBox
    Label1 As Class_Label
    Label2 As Class_Label
    Label3 As Class_Label
    Text4 As Class_TextBox
    Command1 As Class_Button
    Text5 As Class_TextBox
    Option1 As Class_Option
    Option2 As Class_Option
   Declare Function Show(hWndParent As .hWnd =HWND_DESKTOP,Modal As Boolean = False ,UserData As Integer = 0) As .hWnd '���ش��ڲ�����ʾ, ģ̬��ʾ��True {2.True.False} UserData �Ǵ��ݸ������¼��Ĳ�������������ֵ
End Type
Dim Shared gFLY_FontNames() As String ,gFLY_FontHandles() As HFONT
Dim Shared mv As mv_Class_Form
Declare Function ReplaceASM(TiStr As String, TiFind As String, TiRep As String) As String '[FILE:C:\mlgb\VFB\Projects\makevirus\release64\CODEGEN_makevirus_UTILITY.inc|304]
Declare Function FLY_DoMessagePump(pWindow AS CWindow Ptr,ByVal ShowModalFlag As Long, ByVal hWndForm As HWND, ByVal hWndParent As HWND, ByVal nFormShowState As Long, ByVal IsMDIForm As Long) As HWND
Declare Function mv_FORMPROCEDURE(ByVal hWndForm As HWND, ByVal wMsg As uInteger, ByVal wParam As WPARAM, ByVal lParam As LPARAM) As LResult '[FILE:C:\mlgb\VFB\Projects\makevirus\forms\Form1.frm|-252]
Declare Function mv_CODEPROCEDURE(ByVal hWndControl As HWND, ByVal wMsg As uInteger, ByVal wParam As WPARAM, ByVal lParam As LPARAM) As LRESULT '[FILE:C:\mlgb\VFB\Projects\makevirus\forms\Form1.frm|-41]
Declare Sub mv_Command1_BN_Clicked(hWndForm As hWnd, hWndControl As hWnd) '[FILE:C:\mlgb\VFB\Projects\makevirus\forms\Form1.frm|4]
Declare Sub mv_WM_Create(hWndForm As hWnd,UserData As Integer) '[FILE:C:\mlgb\VFB\Projects\makevirus\forms\Form1.frm|53]
Declare Function FF_PUMPHOOK( uMsg As Msg ) As Long '[FILE:#FF_PumpHook#|0]
Declare Function FF_WINMAIN(ByVal hInstance As HINSTANCE) As Long '[FILE:#FF_WinMain#|0]
Declare Sub FF_WINEND(ByVal hInstance As HINSTANCE) '[FILE:#FF_WinMain#|18]
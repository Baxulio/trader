object Form2: TForm2
  Left = 0
  Top = 0
  AlphaBlend = True
  AlphaBlendValue = 2
  Caption = 'Form2'
  ClientHeight = 452
  ClientWidth = 708
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object CppWebBrowser1: TCppWebBrowser
    Left = 0
    Top = 41
    Width = 708
    Height = 411
    Align = alClient
    TabOrder = 0
    ExplicitLeft = 88
    ExplicitTop = 57
    ControlData = {
      4C0000002D4900007A2A00000000000000000000000000000000000000000000
      000000004C000000000000000000000001000000E0D057007335CF11AE690800
      2B2E126208000000000000004C0000000114020000000000C000000000000046
      8000000000000000000000000000000000000000000000000000000000000000
      00000000000000000100000000000000000000000000000000000000}
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 708
    Height = 41
    Align = alTop
    TabOrder = 1
    ExplicitWidth = 635
    object Button1: TButton
      Left = 368
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Button1'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Edit1: TEdit
      Left = 120
      Top = 8
      Width = 121
      Height = 21
      TabOrder = 1
      Text = 'Edit1'
    end
  end
end

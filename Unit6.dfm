object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Trader->Template Maker'
  ClientHeight = 518
  ClientWidth = 807
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 120
    Top = 96
    Width = 34
    Height = 13
    Caption = 'HELLO '
  end
  object Button1: TButton
    Left = 600
    Top = 408
    Width = 169
    Height = 73
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object frxComboEdit1: TfrxComboEdit
    Left = 224
    Top = 240
    Width = 217
    Height = 21
    Style = csSimple
    TabOrder = 1
    Text = 'frxComboEdit1'
  end
  object frxRuler1: TfrxRuler
    Left = 296
    Top = 56
    Width = 185
    Height = 41
    Caption = 'frxRuler1'
    DoubleBuffered = True
    ParentDoubleBuffered = False
    TabOrder = 2
    Offset = 0
    Scale = 1.000000000000000000
    Start = 0
    Units = ruCM
    Size = 0
  end
  object PrintDialog1: TPrintDialog
    Copies = 1
    Left = 528
    Top = 272
  end
  object frxReport1: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = True
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 42333.040256365740000000
    ReportOptions.LastChange = 42333.040256365740000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 384
    Top = 320
    Datasets = <>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxDMPPage
      PaperWidth = 208.279865485920200000
      PaperHeight = 296.862308276425900000
      PaperSize = 9
      LeftMargin = 2.539998359584393000
      RightMargin = 2.539998359584393000
      TopMargin = 4.497913761764029000
      BottomMargin = 4.497913761764029000
      FontStyle = []
    end
  end
end

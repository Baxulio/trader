object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 416
  ClientWidth = 742
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object frxPreview1: TfrxPreview
    Left = 0
    Top = 0
    Width = 742
    Height = 416
    Align = alClient
    OutlineVisible = True
    OutlineWidth = 121
    ThumbnailVisible = False
    UseReportHints = True
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSource = Form1.DataSource1
    BCDToCurrency = False
    Left = 264
    Top = 240
  end
  object frxReport1: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    Preview = frxPreview1
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 42322.969569120400000000
    ReportOptions.LastChange = 42322.969569120400000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 480
    Top = 240
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      Orientation = poLandscape
      PaperWidth = 297.000000000000000000
      PaperHeight = 210.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Height = 65.354360000000000000
        Top = 18.897650000000000000
        Width = 1046.929810000000000000
        object Memo2: TfrxMemoView
          Left = 347.716760000000000000
          Width = 177.637910000000000000
          Height = 30.236240000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -21
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            'REPORT FROM')
          ParentFont = False
        end
        object SysMemo1: TfrxSysMemoView
          Left = 525.354670000000000000
          Width = 151.181200000000000000
          Height = 30.236240000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -21
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[DATE]')
          ParentFont = False
        end
        object SysMemo2: TfrxSysMemoView
          Left = 676.535870000000000000
          Width = 117.165430000000000000
          Height = 30.236240000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -21
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[TIME]')
          ParentFont = False
        end
        object SysMemo3: TfrxSysMemoView
          Left = 929.764380000000000000
          Top = 37.795300000000000000
          Width = 117.165430000000000000
          Height = 18.897650000000000000
          Visible = False
          Memo.UTF8W = (
            '[COUNT(MasterData1)]')
        end
        object Memo3: TfrxMemoView
          Left = 805.039890000000000000
          Top = 37.795300000000000000
          Width = 124.724490000000000000
          Height = 18.897650000000000000
          Visible = False
          Memo.UTF8W = (
            'Amount of records :')
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Height = 166.299320000000000000
        Top = 200.315090000000000000
        Width = 1046.929810000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object Memo19: TfrxMemoView
          Left = 759.685530000000000000
          Top = 90.708720000000000000
          Width = 279.685220000000000000
          Height = 18.897650000000000000
          DataField = 'E_mail'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."E_mail"]')
        end
        object Memo8: TfrxMemoView
          Left = 536.693260000000000000
          Top = 90.708720000000000000
          Width = 113.385900000000000000
          Height = 18.897650000000000000
          DataField = 'Phone'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."Phone"]')
        end
        object Memo9: TfrxMemoView
          Left = 430.866420000000000000
          Top = 90.708720000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Memo.UTF8W = (
            'Phone number:')
        end
        object Memo20: TfrxMemoView
          Left = 687.874460000000000000
          Top = 90.708720000000000000
          Width = 71.811070000000000000
          Height = 18.897650000000000000
          Memo.UTF8W = (
            'E-Address:')
        end
        object Memo7: TfrxMemoView
          Left = 196.535560000000000000
          Top = 90.708720000000000000
          Width = 340.157700000000000000
          Height = 18.897650000000000000
          DataField = 'Owner'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."Owner"]')
        end
        object Memo6: TfrxMemoView
          Left = 196.535560000000000000
          Top = 64.252010000000000000
          Width = 340.157700000000000000
          Height = 18.897650000000000000
          DataField = 'Address'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."Address"]')
        end
        object Memo5: TfrxMemoView
          Left = 196.535560000000000000
          Top = 37.795300000000000000
          Width = 151.181200000000000000
          Height = 18.897650000000000000
          DataField = 'District'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."District"]')
        end
        object Memo17: TfrxMemoView
          Left = 196.535560000000000000
          Top = 7.559060000000000000
          Width = 400.630180000000000000
          Height = 18.897650000000000000
          DataField = 'Query'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            '[frxDBDataset1."Query"]')
          ParentFont = False
        end
        object Memo18: TfrxMemoView
          Left = 895.748610000000000000
          Top = 7.559060000000000000
          Width = 143.622140000000000000
          Height = 18.897650000000000000
          DataField = 'Reg_data'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            '[frxDBDataset1."Reg_data"]')
          ParentFont = False
        end
        object Memo10: TfrxMemoView
          Left = 347.716760000000000000
          Top = 37.795300000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = 'Rooms'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Rooms"]')
          ParentFont = False
        end
        object Memo11: TfrxMemoView
          Left = 427.086890000000000000
          Top = 37.795300000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = 'Storey'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Storey"]')
          ParentFont = False
        end
        object Memo12: TfrxMemoView
          Left = 506.457020000000000000
          Top = 37.795300000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = 'Storeys'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Storeys"]')
          ParentFont = False
        end
        object Memo13: TfrxMemoView
          Left = 585.827150000000000000
          Top = 37.795300000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = 'Square'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Square"]')
          ParentFont = False
        end
        object Memo14: TfrxMemoView
          Left = 298.582870000000000000
          Top = 120.944960000000000000
          Width = 200.315090000000000000
          Height = 18.897650000000000000
          DataField = 'Cost'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            '[frxDBDataset1."Cost"]')
          ParentFont = False
        end
        object Memo15: TfrxMemoView
          Left = 665.197280000000000000
          Top = 37.795300000000000000
          Width = 204.094620000000000000
          Height = 18.897650000000000000
          DataField = 'Type'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Type"]')
          ParentFont = False
        end
        object Memo16: TfrxMemoView
          Left = 869.291900000000000000
          Top = 37.795300000000000000
          Width = 170.078850000000000000
          Height = 18.897650000000000000
          DataField = 'Status'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Status"]')
          ParentFont = False
        end
        object Shape1: TfrxShapeView
          Top = 30.236240000000000000
          Width = 1045.417322830000000000
          Height = 113.385900000000000000
        end
        object Picture2: TfrxPictureView
          Top = 3.779456770000000000
          Width = 188.976402360000000000
          Height = 162.519790000000000000
          Center = True
          DataField = 'photo1'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HightQuality = True
          Transparent = False
          TransparentColor = clWhite
        end
        object Memo25: TfrxMemoView
          Left = 196.535560000000000000
          Top = 120.944960000000000000
          Width = 102.047310000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            'COST :: $ :')
          ParentFont = False
        end
      end
      object PageFooter1: TfrxPageFooter
        FillType = ftBrush
        Height = 20.000000000000000000
        Top = 427.086890000000000000
        Width = 1046.929810000000000000
        object Memo1: TfrxMemoView
          Left = 971.339210000000000000
          Width = 75.590600000000000000
          Height = 18.897650000000000000
          HAlign = haRight
          Memo.UTF8W = (
            '[Page#]')
        end
      end
      object Header1: TfrxHeader
        FillType = ftBrush
        Fill.BackColor = cl3DDkShadow
        Height = 34.015770000000000000
        Top = 143.622140000000000000
        Width = 1046.929810000000000000
        object Memo4: TfrxMemoView
          Top = 3.779530000000000000
          Width = 347.716760000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = -16
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            'Main INFO')
          ParentFont = False
        end
        object Memo21: TfrxMemoView
          Left = 347.716760000000000000
          Top = 3.779530000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = -16
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            'ROOMS')
          ParentFont = False
        end
        object Memo22: TfrxMemoView
          Left = 427.086890000000000000
          Top = 3.779530000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = -16
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            'STOREY')
          ParentFont = False
        end
        object Memo23: TfrxMemoView
          Left = 506.457020000000000000
          Top = 3.779530000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = -16
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            'STOREYS')
          ParentFont = False
        end
        object Memo24: TfrxMemoView
          Left = 585.827150000000000000
          Top = 3.779530000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = -16
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            'SQUARE')
          ParentFont = False
        end
        object Memo26: TfrxMemoView
          Left = 665.197280000000000000
          Top = 3.779530000000000000
          Width = 204.094620000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = -16
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            'TYPE OF BUILDING')
          ParentFont = False
        end
        object Memo27: TfrxMemoView
          Left = 869.291900000000000000
          Top = 3.779530000000000000
          Width = 177.637910000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWhite
          Font.Height = -16
          Font.Name = '@Yu Gothic UI Light'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8W = (
            'STATUS')
          ParentFont = False
        end
      end
    end
  end
  object frxPDFExport1: TfrxPDFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PrintOptimized = False
    Outline = False
    Background = False
    HTMLTags = True
    Quality = 95
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    Left = 336
    Top = 152
  end
  object frxCSVExport1: TfrxCSVExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    Separator = ';'
    OEMCodepage = False
    UTF8 = False
    NoSysSymbols = True
    ForcedQuotes = False
    Left = 536
    Top = 160
  end
  object frxRTFExport1: TfrxRTFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PictureType = gpPNG
    Wysiwyg = True
    Creator = 'FastReport'
    SuppressPageHeadersFooters = False
    HeaderFooterMode = hfText
    AutoSize = False
    Left = 392
    Top = 152
  end
end

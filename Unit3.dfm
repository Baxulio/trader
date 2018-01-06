object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Trader -> Object'
  ClientHeight = 453
  ClientWidth = 366
  Color = clBtnFace
  Constraints.MaxHeight = 492
  Constraints.MinHeight = 492
  Constraints.MinWidth = 382
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    AlignWithMargins = True
    Left = 5
    Top = 5
    Width = 356
    Height = 402
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    ActivePage = Obj
    Align = alClient
    MultiLine = True
    TabOrder = 0
    object Obj: TTabSheet
      Caption = 'Object INFO'
      object Panel3: TPanel
        AlignWithMargins = True
        Left = 5
        Top = 5
        Width = 117
        Height = 364
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Align = alLeft
        BevelOuter = bvNone
        TabOrder = 0
        object Label5: TLabel
          Left = 0
          Top = 175
          Width = 39
          Height = 13
          Caption = 'Storey :'
        end
        object Label2: TLabel
          Left = 3
          Top = 76
          Width = 43
          Height = 13
          Caption = 'District : '
        end
        object Label7: TLabel
          Left = 0
          Top = 241
          Width = 112
          Height = 13
          Caption = 'Square of the building :'
        end
        object Label4: TLabel
          Left = 0
          Top = 142
          Width = 39
          Height = 13
          Caption = 'Rooms :'
        end
        object Label1: TLabel
          Left = 3
          Top = 10
          Width = 102
          Height = 13
          Caption = 'Type of the building :'
        end
        object Label3: TLabel
          Left = 3
          Top = 109
          Width = 46
          Height = 13
          Caption = 'Address :'
        end
        object Label9: TLabel
          Left = 3
          Top = 45
          Width = 94
          Height = 13
          Caption = 'Type of the query :'
        end
        object Label8: TLabel
          Left = 0
          Top = 274
          Width = 29
          Height = 13
          Caption = 'Cost :'
        end
        object Label6: TLabel
          Left = 0
          Top = 208
          Width = 96
          Height = 13
          Caption = 'Number of storeys :'
        end
        object Label14: TLabel
          Left = 0
          Top = 308
          Width = 85
          Height = 13
          Caption = 'Repairing status :'
        end
        object Label15: TLabel
          Left = 0
          Top = 340
          Width = 85
          Height = 13
          Caption = 'Registratio Data :'
        end
      end
      object Panel4: TPanel
        Left = 127
        Top = 0
        Width = 221
        Height = 374
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 1
        object DBEdit1: TDBEdit
          AlignWithMargins = True
          Left = 0
          Top = 111
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Address'
          DataSource = Form1.DataSource1
          TabOrder = 0
        end
        object DBComboBox1: TDBComboBox
          AlignWithMargins = True
          Left = 0
          Top = 78
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'District'
          DataSource = Form1.DataSource1
          Items.Strings = (
            'Bektemir'
            'Chilanzar'
            'Yashnobod'
            'Mirobod'
            'Mirzo Ulugbek'
            'Sergeli'
            'Shaykhontohur '#9
            'Olmazar'
            'Uchtepa'
            'Yakkasaray'
            'Yunusabad')
          TabOrder = 1
        end
        object DBComboBox2: TDBComboBox
          AlignWithMargins = True
          Left = 0
          Top = 45
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Query'
          DataSource = Form1.DataSource1
          Items.Strings = (
            'Sale'
            'Buy'
            'Giving rent'
            'Taking rent')
          TabOrder = 2
        end
        object DBComboBox3: TDBComboBox
          AlignWithMargins = True
          Left = 0
          Top = 12
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Type'
          DataSource = Form1.DataSource1
          Items.Strings = (
            'Apartment block'
            'Asylum'
            'Condominium'
            'Dormitory'
            'Duplex'
            'House - see List of house types'
            'Nursing home'
            'Townhouse'
            'Villa'
            'Bungalow'
            'Unit')
          TabOrder = 3
        end
        object DBComboBox4: TDBComboBox
          AlignWithMargins = True
          Left = 0
          Top = 210
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Storeys'
          DataSource = Form1.DataSource1
          Items.Strings = (
            '1'
            '2'
            '3'
            '4'
            '5'
            '6'
            '7'
            '8'
            '9'
            '10'
            '11'
            '12'
            '13'
            '14'
            '15'
            '16'
            '17'
            '18'
            '19'
            '20')
          TabOrder = 4
        end
        object DBComboBox5: TDBComboBox
          AlignWithMargins = True
          Left = 0
          Top = 177
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Storey'
          DataSource = Form1.DataSource1
          Items.Strings = (
            '1'
            '2'
            '3'
            '4'
            '5'
            '6'
            '7'
            '8'
            '9'
            '10'
            '11'
            '12'
            '13'
            '14'
            '15'
            '16'
            '17'
            '18'
            '19'
            '20')
          TabOrder = 5
        end
        object DBComboBox6: TDBComboBox
          AlignWithMargins = True
          Left = 0
          Top = 144
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Rooms'
          DataSource = Form1.DataSource1
          Items.Strings = (
            '1'
            '2'
            '3'
            '4'
            '5'
            '6'
            '7'
            '8'
            '9'
            '10'
            '11'
            '12'
            '13'
            '14'
            '15'
            '16'
            '17'
            '18'
            '19'
            '20')
          TabOrder = 6
        end
        object DBEdit3: TDBEdit
          AlignWithMargins = True
          Left = 0
          Top = 243
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Square'
          DataSource = Form1.DataSource1
          TabOrder = 7
        end
        object DBEdit4: TDBEdit
          AlignWithMargins = True
          Left = 0
          Top = 276
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Cost'
          DataSource = Form1.DataSource1
          TabOrder = 8
        end
        object DBEdit2: TDBEdit
          Left = 0
          Top = 359
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          DataField = 'Reg_data'
          DataSource = Form1.DataSource1
          TabOrder = 9
          Visible = False
        end
        object DateTimePicker1: TDateTimePicker
          AlignWithMargins = True
          Left = 0
          Top = 342
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          BevelOuter = bvNone
          CalAlignment = dtaRight
          Date = 42321.574547002320000000
          Time = 42321.574547002320000000
          ShowCheckbox = True
          ParseInput = True
          TabOrder = 10
        end
        object DBComboBox7: TDBComboBox
          AlignWithMargins = True
          Left = 0
          Top = 309
          Width = 216
          Height = 21
          Margins.Left = 0
          Margins.Top = 12
          Margins.Right = 5
          Margins.Bottom = 0
          Align = alTop
          DataField = 'Status'
          DataSource = Form1.DataSource1
          Items.Strings = (
            'Bad'
            'Clean'
            'Cosmetic repairing'
            #1057'apital repair'
            'Euro style')
          TabOrder = 11
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Contact INFO'
      ImageIndex = 1
      ExplicitLeft = 0
      ExplicitTop = 0
      ExplicitWidth = 0
      ExplicitHeight = 0
      object Panel2: TPanel
        Left = 0
        Top = 0
        Width = 348
        Height = 145
        Align = alTop
        BevelOuter = bvNone
        TabOrder = 0
        object Panel5: TPanel
          Left = 0
          Top = 0
          Width = 121
          Height = 145
          Align = alLeft
          BevelOuter = bvNone
          TabOrder = 0
          object Label12: TLabel
            Left = 11
            Top = 81
            Width = 76
            Height = 13
            Caption = 'E-mail address :'
          end
          object Label13: TLabel
            Left = 11
            Top = 118
            Width = 52
            Height = 13
            Caption = 'Comment :'
          end
          object Label10: TLabel
            Left = 11
            Top = 15
            Width = 100
            Height = 13
            Caption = 'Responsible person :'
          end
          object Label11: TLabel
            Left = 11
            Top = 48
            Width = 76
            Height = 13
            Caption = 'Phone number :'
          end
        end
        object Panel6: TPanel
          Left = 121
          Top = 0
          Width = 227
          Height = 145
          Align = alClient
          BevelOuter = bvNone
          TabOrder = 1
          object DBEdit5: TDBEdit
            AlignWithMargins = True
            Left = 0
            Top = 12
            Width = 222
            Height = 21
            Margins.Left = 0
            Margins.Top = 12
            Margins.Right = 5
            Margins.Bottom = 0
            Align = alTop
            DataField = 'Owner'
            DataSource = Form1.DataSource1
            TabOrder = 0
          end
          object DBEdit6: TDBEdit
            AlignWithMargins = True
            Left = 0
            Top = 45
            Width = 222
            Height = 21
            Margins.Left = 0
            Margins.Top = 12
            Margins.Right = 5
            Margins.Bottom = 0
            Align = alTop
            DataField = 'Phone'
            DataSource = Form1.DataSource1
            TabOrder = 1
          end
          object DBEdit7: TDBEdit
            AlignWithMargins = True
            Left = 0
            Top = 78
            Width = 222
            Height = 21
            Margins.Left = 0
            Margins.Top = 12
            Margins.Right = 5
            Margins.Bottom = 0
            Align = alTop
            DataField = 'E_mail'
            DataSource = Form1.DataSource1
            TabOrder = 2
          end
        end
      end
      object DBMemo1: TDBMemo
        Left = 0
        Top = 145
        Width = 348
        Height = 229
        Align = alClient
        BevelOuter = bvNone
        DataField = 'Comment'
        DataSource = Form1.DataSource1
        TabOrder = 1
      end
    end
    object Image: TTabSheet
      Caption = 'Image'
      ImageIndex = 2
      ExplicitLeft = 0
      ExplicitTop = 0
      ExplicitWidth = 0
      ExplicitHeight = 0
      object Image1: TImage
        Left = 0
        Top = 41
        Width = 348
        Height = 333
        Align = alClient
        Center = True
        Proportional = True
        Stretch = True
        ExplicitLeft = 120
        ExplicitTop = 136
        ExplicitWidth = 105
        ExplicitHeight = 105
      end
      object Button3: TButton
        Left = 0
        Top = 0
        Width = 348
        Height = 41
        Align = alTop
        Caption = '+ Add image'
        TabOrder = 0
        OnClick = Button3Click
      end
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 412
    Width = 366
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 1
    object Button1: TButton
      AlignWithMargins = True
      Left = 5
      Top = 5
      Width = 132
      Height = 31
      Margins.Left = 5
      Margins.Top = 5
      Margins.Right = 5
      Margins.Bottom = 5
      Align = alLeft
      Caption = 'OK'
      ModalResult = 1
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      AlignWithMargins = True
      Left = 220
      Top = 5
      Width = 141
      Height = 31
      Margins.Left = 5
      Margins.Top = 5
      Margins.Right = 5
      Margins.Bottom = 5
      Align = alRight
      Caption = 'CANCEL'
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object OpenPictureDialog1: TOpenPictureDialog
    Left = 80
    Top = 160
  end
end

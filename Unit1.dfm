object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 720
  ClientWidth = 1280
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 1280
    Height = 720
    ActivePage = Pila_Cola
    TabOrder = 0
    object TabSheet6: TTabSheet
      Caption = 'TDAMemoria'
      ImageIndex = 5
      object Image2: TImage
        Left = 448
        Top = 3
        Width = 289
        Height = 593
      end
      object Button44: TButton
        Left = 3
        Top = 64
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 0
        OnClick = Button44Click
      end
      object Button45: TButton
        Left = 3
        Top = 112
        Width = 75
        Height = 25
        Caption = 'pedir espacios'
        TabOrder = 1
        OnClick = Button45Click
      end
      object Edit9: TEdit
        Left = 104
        Top = 114
        Width = 57
        Height = 21
        TabOrder = 2
        TextHint = 'espacios'
      end
      object Edit10: TEdit
        Left = 104
        Top = 170
        Width = 58
        Height = 21
        TabOrder = 3
        TextHint = 'direccion'
      end
      object Button46: TButton
        Left = 3
        Top = 168
        Width = 75
        Height = 25
        Caption = 'liberar'
        TabOrder = 4
        OnClick = Button46Click
      end
      object Button47: TButton
        Left = 3
        Top = 232
        Width = 75
        Height = 25
        Caption = 'Poner Dato'
        TabOrder = 5
        OnClick = Button47Click
      end
      object Button48: TButton
        Left = 3
        Top = 280
        Width = 75
        Height = 25
        Caption = 'Button48'
        TabOrder = 6
      end
      object Button49: TButton
        Left = 3
        Top = 311
        Width = 75
        Height = 25
        Caption = 'Button49'
        TabOrder = 7
      end
      object Edit11: TEdit
        Left = 104
        Top = 234
        Width = 65
        Height = 21
        TabOrder = 8
        TextHint = 'direccion'
      end
      object Edit12: TEdit
        Left = 175
        Top = 234
        Width = 66
        Height = 21
        TabOrder = 9
        TextHint = 'lugar'
      end
      object Edit13: TEdit
        Left = 247
        Top = 234
        Width = 58
        Height = 21
        TabOrder = 10
        TextHint = 'dato'
      end
    end
    object TabSheet1: TTabSheet
      Caption = 'TDALista_Vector'
      object Button9: TButton
        Left = 16
        Top = 80
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 0
        OnClick = Button9Click
      end
      object StringGrid4: TStringGrid
        Left = 200
        Top = 72
        Width = 209
        Height = 24
        DefaultColWidth = 40
        RowCount = 1
        FixedRows = 0
        ScrollBars = ssNone
        TabOrder = 1
      end
      object Button10: TButton
        Left = 16
        Top = 128
        Width = 75
        Height = 25
        Caption = 'insertar'
        TabOrder = 2
        OnClick = Button10Click
      end
      object Button11: TButton
        Left = 16
        Top = 168
        Width = 75
        Height = 25
        Caption = 'suprime'
        TabOrder = 3
        OnClick = Button11Click
      end
      object Button31: TButton
        Left = 16
        Top = 216
        Width = 75
        Height = 25
        Caption = 'recupera'
        TabOrder = 4
        OnClick = Button31Click
      end
      object Button34: TButton
        Left = 16
        Top = 264
        Width = 75
        Height = 25
        Caption = 'recupera dir'
        TabOrder = 5
        OnClick = Button34Click
      end
      object Button38: TButton
        Left = 16
        Top = 312
        Width = 75
        Height = 25
        Caption = 'primero'
        TabOrder = 6
        OnClick = Button38Click
      end
      object Button75: TButton
        Left = 16
        Top = 343
        Width = 75
        Height = 25
        Caption = 'Fin'
        TabOrder = 7
        OnClick = Button75Click
      end
    end
    object TabSheet9: TTabSheet
      Caption = 'TDAConjunto_Vector'
      ImageIndex = 8
      object Button60: TButton
        Left = 104
        Top = 184
        Width = 75
        Height = 25
        Caption = 'Button60'
        TabOrder = 0
        OnClick = Button60Click
      end
      object Button72: TButton
        Left = 90
        Top = 56
        Width = 89
        Height = 25
        Caption = 'tama'#241'o de texto'
        TabOrder = 1
      end
      object Edit34: TEdit
        Left = 200
        Top = 58
        Width = 73
        Height = 21
        TabOrder = 2
        Text = 'Edit34'
      end
    end
    object TabSheet7: TTabSheet
      Caption = 'TDALista_Enlazada'
      ImageIndex = 6
      object Image3: TImage
        Left = 402
        Top = 0
        Width = 273
        Height = 553
      end
      object PaintBox1: TPaintBox
        Left = 224
        Top = 217
        Width = 105
        Height = 105
      end
      object Button51: TButton
        Left = 32
        Top = 80
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 0
        OnClick = Button51Click
      end
      object Button52: TButton
        Left = 32
        Top = 136
        Width = 75
        Height = 25
        Caption = 'insertar'
        TabOrder = 1
        OnClick = Button52Click
      end
      object Button53: TButton
        Left = 32
        Top = 167
        Width = 75
        Height = 25
        Caption = 'modifica'
        TabOrder = 2
        OnClick = Button53Click
      end
      object Button54: TButton
        Left = 32
        Top = 210
        Width = 75
        Height = 25
        Caption = 'suprime'
        TabOrder = 3
        OnClick = Button54Click
      end
      object Button55: TButton
        Left = 24
        Top = 297
        Width = 75
        Height = 25
        Caption = 'localiza'
        TabOrder = 4
        OnClick = Button55Click
      end
      object Button56: TButton
        Left = 24
        Top = 328
        Width = 75
        Height = 25
        Caption = 'Button56'
        TabOrder = 5
      end
      object Button57: TButton
        Left = 24
        Top = 376
        Width = 75
        Height = 25
        Caption = 'elimina dato'
        TabOrder = 6
        OnClick = Button57Click
      end
      object Edit14: TEdit
        Left = 129
        Top = 138
        Width = 56
        Height = 21
        TabOrder = 7
        TextHint = 'direccion'
      end
      object Edit15: TEdit
        Left = 208
        Top = 138
        Width = 57
        Height = 21
        TabOrder = 8
        TextHint = 'elemento'
      end
      object Edit16: TEdit
        Left = 129
        Top = 169
        Width = 56
        Height = 21
        TabOrder = 9
        TextHint = 'direccion'
      end
      object Edit17: TEdit
        Left = 208
        Top = 169
        Width = 57
        Height = 21
        TabOrder = 10
        TextHint = 'elemento'
      end
      object Edit18: TEdit
        Left = 129
        Top = 212
        Width = 56
        Height = 21
        TabOrder = 11
        TextHint = 'direccion'
      end
      object Edit19: TEdit
        Left = 129
        Top = 299
        Width = 56
        Height = 21
        TabOrder = 12
        TextHint = 'elemento'
      end
    end
    object TabSheet11: TTabSheet
      Caption = 'TDAConjunto_MemoriaE'
      ImageIndex = 10
      object Image5: TImage
        Left = 294
        Top = 3
        Width = 353
        Height = 649
      end
      object Button65: TButton
        Left = 72
        Top = 88
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 0
        OnClick = Button65Click
      end
      object Button66: TButton
        Left = 40
        Top = 119
        Width = 89
        Height = 25
        Caption = 'poner elemento'
        TabOrder = 1
        OnClick = Button66Click
      end
      object Edit26: TEdit
        Left = 135
        Top = 123
        Width = 121
        Height = 21
        TabOrder = 2
        TextHint = 'elemento'
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'TDAPolinomio_Vector'
      ImageIndex = 2
      object Image1: TImage
        Left = 713
        Top = 111
        Width = 350
        Height = 350
      end
      object Label1: TLabel
        Left = 3
        Top = 128
        Width = 3
        Height = 13
      end
      object Label3: TLabel
        Left = 400
        Top = 29
        Width = 3
        Height = 13
      end
      object Label4: TLabel
        Left = 552
        Top = 235
        Width = 49
        Height = 13
        Caption = 'lim inferior'
      end
      object Label5: TLabel
        Left = 617
        Top = 235
        Width = 54
        Height = 13
        Caption = 'lim superior'
      end
      object Button12: TButton
        Left = 3
        Top = 80
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 0
        OnClick = Button12Click
      end
      object StringGrid5: TStringGrid
        Left = 128
        Top = 56
        Width = 81
        Height = 24
        DefaultColWidth = 40
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        ParentFont = False
        ScrollBars = ssNone
        TabOrder = 1
      end
      object StringGrid6: TStringGrid
        Left = 113
        Top = 78
        Width = 88
        Height = 24
        DefaultColWidth = 40
        RowCount = 1
        FixedRows = 0
        ScrollBars = ssNone
        TabOrder = 2
      end
      object Button13: TButton
        Left = 3
        Top = 159
        Width = 89
        Height = 25
        Caption = 'insertar termino'
        TabOrder = 3
        OnClick = Button13Click
      end
      object Edit3: TEdit
        Left = 98
        Top = 161
        Width = 71
        Height = 21
        TabOrder = 4
        TextHint = 'coeficiente'
      end
      object Edit4: TEdit
        Left = 175
        Top = 161
        Width = 66
        Height = 21
        TabOrder = 5
        TextHint = 'exponente'
      end
      object Button14: TButton
        Left = 3
        Top = 190
        Width = 89
        Height = 25
        Caption = 'num de terminos'
        TabOrder = 6
        OnClick = Button14Click
      end
      object Button15: TButton
        Left = 3
        Top = 221
        Width = 75
        Height = 25
        Caption = 'grado'
        TabOrder = 7
        OnClick = Button15Click
      end
      object Button16: TButton
        Left = 0
        Top = 252
        Width = 75
        Height = 25
        Caption = 'coeficiente'
        TabOrder = 8
        OnClick = Button16Click
      end
      object Edit5: TEdit
        Left = 98
        Top = 254
        Width = 87
        Height = 21
        TabOrder = 9
        TextHint = 'exponente'
      end
      object Button17: TButton
        Left = 3
        Top = 283
        Width = 75
        Height = 25
        Caption = 'exponente'
        TabOrder = 10
        OnClick = Button17Click
      end
      object Edit6: TEdit
        Left = 98
        Top = 285
        Width = 87
        Height = 21
        TabOrder = 11
        TextHint = 'nro Termino'
      end
      object Button18: TButton
        Left = 632
        Top = 80
        Width = 75
        Height = 25
        Caption = 'crear P2'
        TabOrder = 12
        OnClick = Button18Click
      end
      object StringGrid7: TStringGrid
        Left = 375
        Top = 56
        Width = 81
        Height = 24
        DefaultColWidth = 40
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        ParentFont = False
        ScrollBars = ssNone
        TabOrder = 13
      end
      object StringGrid8: TStringGrid
        Left = 359
        Top = 78
        Width = 81
        Height = 24
        DefaultColWidth = 40
        RowCount = 1
        FixedRows = 0
        ScrollBars = ssNone
        TabOrder = 14
      end
      object Button19: TButton
        Left = 448
        Top = 123
        Width = 91
        Height = 25
        Caption = 'insertar termino'
        TabOrder = 15
        OnClick = Button19Click
      end
      object Edit7: TEdit
        Left = 545
        Top = 127
        Width = 66
        Height = 21
        TabOrder = 16
        TextHint = 'coeficiente'
      end
      object Edit8: TEdit
        Left = 617
        Top = 127
        Width = 66
        Height = 21
        TabOrder = 17
        TextHint = 'exponente'
      end
      object StringGrid10: TStringGrid
        Left = 258
        Top = 274
        Width = 83
        Height = 24
        DefaultColWidth = 40
        RowCount = 1
        FixedRows = 0
        ScrollBars = ssNone
        TabOrder = 18
      end
      object StringGrid9: TStringGrid
        Left = 276
        Top = 254
        Width = 83
        Height = 24
        DefaultColWidth = 40
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        ParentFont = False
        ScrollBars = ssNone
        TabOrder = 19
      end
      object Button20: TButton
        Left = 262
        Top = 304
        Width = 89
        Height = 25
        Caption = 'sumar p1 y p2'
        TabOrder = 20
        OnClick = Button20Click
      end
      object Button21: TButton
        Left = 262
        Top = 335
        Width = 75
        Height = 25
        Caption = 'restar p1 - p2'
        TabOrder = 21
        OnClick = Button21Click
      end
      object Button22: TButton
        Left = 181
        Top = 304
        Width = 75
        Height = 25
        Caption = 'crear p3'
        TabOrder = 22
        OnClick = Button22Click
      end
      object Button23: TButton
        Left = 254
        Top = 366
        Width = 97
        Height = 25
        Caption = 'multiplicar p1 y p2'
        TabOrder = 23
        OnClick = Button23Click
      end
      object Button24: TButton
        Left = 448
        Top = 159
        Width = 75
        Height = 25
        Caption = 'derivar'
        TabOrder = 24
        OnClick = Button24Click
      end
      object Button25: TButton
        Left = 632
        Top = 190
        Width = 75
        Height = 25
        Caption = 'graficar'
        TabOrder = 25
        OnClick = Button25Click
      end
      object Button26: TButton
        Left = 448
        Top = 221
        Width = 75
        Height = 25
        Caption = 'calcular F(x)'
        TabOrder = 26
        OnClick = Button26Click
      end
      object Button27: TButton
        Left = 768
        Top = 80
        Width = 75
        Height = 25
        Caption = 'potencia'
        TabOrder = 27
        OnClick = Button27Click
      end
      object Button61: TButton
        Left = 448
        Top = 252
        Width = 98
        Height = 25
        Caption = 'Area bajo la curva'
        TabOrder = 28
        OnClick = Button61Click
      end
      object Button62: TButton
        Left = 448
        Top = 190
        Width = 75
        Height = 25
        Caption = 'integrar'
        TabOrder = 29
        OnClick = Button62Click
      end
      object Edit22: TEdit
        Left = 617
        Top = 254
        Width = 66
        Height = 21
        TabOrder = 30
      end
      object Edit23: TEdit
        Left = 552
        Top = 254
        Width = 59
        Height = 21
        TabOrder = 31
      end
      object StringGrid13: TStringGrid
        Left = 448
        Top = 344
        Width = 95
        Height = 72
        ColCount = 2
        DefaultColWidth = 45
        RowCount = 3
        ScrollBars = ssNone
        TabOrder = 32
      end
      object Button70: TButton
        Left = 1088
        Top = 3
        Width = 75
        Height = 25
        Caption = 'mostrar'
        TabOrder = 33
        OnClick = Button70Click
      end
    end
    object TabSheet10: TTabSheet
      Caption = 'TDAPolinomio_MemoriaE'
      ImageIndex = 9
      object Image4: TImage
        Left = 304
        Top = 24
        Width = 385
        Height = 665
      end
      object Button63: TButton
        Left = 88
        Top = 152
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 0
        OnClick = Button63Click
      end
      object Button64: TButton
        Left = 32
        Top = 216
        Width = 75
        Height = 25
        Caption = 'poner termino'
        TabOrder = 1
        OnClick = Button64Click
      end
      object Edit24: TEdit
        Left = 129
        Top = 218
        Width = 72
        Height = 21
        TabOrder = 2
        TextHint = 'coeficiente'
      end
      object Edit25: TEdit
        Left = 207
        Top = 218
        Width = 66
        Height = 21
        TabOrder = 3
        TextHint = 'exponente'
      end
    end
    object TabSheet8: TTabSheet
      Caption = 'TDAPolinomiio_Lista'
      ImageIndex = 7
      object Label2: TLabel
        Left = 168
        Top = 80
        Width = 3
        Height = 13
      end
      object Image9: TImage
        Left = 0
        Top = 0
        Width = 1269
        Height = 689
      end
      object Button50: TButton
        Left = 24
        Top = 80
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 0
        OnClick = Button50Click
      end
      object Button58: TButton
        Left = 3
        Top = 120
        Width = 96
        Height = 25
        Caption = 'insertar Termino'
        TabOrder = 1
        OnClick = Button58Click
      end
      object Button59: TButton
        Left = 24
        Top = 151
        Width = 75
        Height = 25
        Caption = 'Button59'
        TabOrder = 2
      end
      object Edit20: TEdit
        Left = 105
        Top = 122
        Width = 66
        Height = 21
        TabOrder = 3
        TextHint = 'coeficiente'
      end
      object Edit21: TEdit
        Left = 200
        Top = 122
        Width = 65
        Height = 21
        TabOrder = 4
        TextHint = 'exponente'
      end
      object Button71: TButton
        Left = 103
        Top = 280
        Width = 75
        Height = 25
        Caption = 'mostrar'
        TabOrder = 5
        OnClick = Button71Click
      end
      object Edit32: TEdit
        Left = 184
        Top = 282
        Width = 50
        Height = 21
        TabOrder = 6
        TextHint = 'X'
      end
      object Edit33: TEdit
        Left = 240
        Top = 282
        Width = 50
        Height = 21
        TabOrder = 7
        TextHint = 'Y'
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'TDAPila_Vector'
      ImageIndex = 3
      object Image7: TImage
        Left = 0
        Top = 3
        Width = 1269
        Height = 686
      end
      object StringGrid11: TStringGrid
        Left = 272
        Top = 57
        Width = 40
        Height = 24
        Hint = 'esta es la pila papu'
        ParentCustomHint = False
        ColCount = 1
        DefaultColWidth = 40
        FixedCols = 0
        RowCount = 1
        FixedRows = 0
        ParentShowHint = False
        ScrollBars = ssNone
        ShowHint = True
        TabOrder = 0
      end
      object Button28: TButton
        Left = 24
        Top = 56
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 1
        OnClick = Button28Click
      end
      object Button29: TButton
        Left = 24
        Top = 120
        Width = 75
        Height = 25
        Caption = 'meter'
        TabOrder = 2
        OnClick = Button29Click
      end
      object Button30: TButton
        Left = 160
        Top = 56
        Width = 81
        Height = 25
        Caption = 'mostrar'
        TabOrder = 3
      end
      object Button35: TButton
        Left = 24
        Top = 182
        Width = 75
        Height = 25
        Hint = 'pulsa y te dira si la pila esta vacia o no'
        Caption = 'vacia?'
        ParentShowHint = False
        ShowHint = False
        TabOrder = 4
        OnClick = Button35Click
      end
      object Button36: TButton
        Left = 24
        Top = 151
        Width = 75
        Height = 25
        Caption = 'sacar'
        TabOrder = 5
        OnClick = Button36Click
      end
      object Button37: TButton
        Left = 24
        Top = 213
        Width = 75
        Height = 25
        Caption = 'cima'
        TabOrder = 6
        OnClick = Button37Click
      end
      object Button68: TButton
        Left = 160
        Top = 280
        Width = 89
        Height = 25
        Caption = 'mostrar canvas'
        TabOrder = 7
        OnClick = Button68Click
      end
      object Edit29: TEdit
        Left = 311
        Top = 282
        Width = 50
        Height = 21
        TabOrder = 8
        TextHint = 'Y'
      end
      object Edit28: TEdit
        Left = 255
        Top = 282
        Width = 50
        Height = 21
        TabOrder = 9
        TextHint = 'X'
      end
      object Button77: TButton
        Left = 24
        Top = 244
        Width = 75
        Height = 25
        Caption = 'invertir'
        TabOrder = 10
        OnClick = Button77Click
      end
    end
    object TabSheet5: TTabSheet
      Caption = 'TDAPila_Lista'
      ImageIndex = 4
      object Image8: TImage
        Left = 0
        Top = 0
        Width = 1269
        Height = 689
      end
      object Button39: TButton
        Left = 24
        Top = 72
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 0
        OnClick = Button39Click
      end
      object Button40: TButton
        Left = 24
        Top = 136
        Width = 75
        Height = 25
        Caption = 'meter'
        TabOrder = 1
        OnClick = Button40Click
      end
      object Button41: TButton
        Left = 24
        Top = 167
        Width = 75
        Height = 25
        Caption = 'sacar'
        TabOrder = 2
        OnClick = Button41Click
      end
      object Button42: TButton
        Left = 24
        Top = 198
        Width = 75
        Height = 25
        Caption = 'vacia?'
        TabOrder = 3
        OnClick = Button42Click
      end
      object Button43: TButton
        Left = 24
        Top = 229
        Width = 75
        Height = 25
        Caption = 'cima'
        TabOrder = 4
        OnClick = Button43Click
      end
      object StringGrid12: TStringGrid
        Left = 168
        Top = 72
        Width = 320
        Height = 24
        DefaultColWidth = 40
        RowCount = 1
        FixedRows = 0
        ScrollBars = ssNone
        TabOrder = 5
      end
      object Button69: TButton
        Left = 48
        Top = 336
        Width = 75
        Height = 25
        Caption = 'mostrar'
        TabOrder = 6
        OnClick = Button69Click
      end
      object Edit30: TEdit
        Left = 129
        Top = 338
        Width = 57
        Height = 21
        TabOrder = 7
        TextHint = 'X'
      end
      object Edit31: TEdit
        Left = 192
        Top = 338
        Width = 57
        Height = 21
        TabOrder = 8
        TextHint = 'Y'
      end
    end
    object TabSheet12: TTabSheet
      Caption = 'Polinomio_Pila'
      ImageIndex = 11
      object Image10: TImage
        Left = 544
        Top = 51
        Width = 350
        Height = 350
      end
      object Image11: TImage
        Left = 169
        Top = 232
        Width = 304
        Height = 329
      end
      object Button4: TButton
        Left = 42
        Top = 115
        Width = 75
        Height = 25
        Caption = 'poner termino'
        TabOrder = 0
        OnClick = Button4Click
      end
      object Button5: TButton
        Left = 42
        Top = 160
        Width = 75
        Height = 25
        Caption = 'Mostrar Pila'
        TabOrder = 1
        OnClick = Button5Click
      end
      object Button6: TButton
        Left = 42
        Top = 200
        Width = 97
        Height = 25
        Caption = 'mostrar polinomio'
        TabOrder = 2
      end
      object Button7: TButton
        Left = 904
        Top = 3
        Width = 75
        Height = 25
        Caption = 'Graficar'
        TabOrder = 3
      end
      object Button8: TButton
        Left = 42
        Top = 51
        Width = 75
        Height = 25
        Caption = 'crear'
        TabOrder = 4
        OnClick = Button8Click
      end
      object Edit36: TEdit
        Left = 123
        Top = 117
        Width = 56
        Height = 21
        TabOrder = 5
        Text = 'Edit36'
      end
      object Edit37: TEdit
        Left = 209
        Top = 117
        Width = 58
        Height = 21
        TabOrder = 6
        Text = 'Edit37'
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'TDAConjunto_ListaVector'
      ImageIndex = 1
      object Image6: TImage
        Left = -4
        Top = 0
        Width = 1273
        Height = 689
      end
      object StringGrid1: TStringGrid
        Left = 32
        Top = 32
        Width = 185
        Height = 25
        DefaultColWidth = 40
        ScrollBars = ssNone
        TabOrder = 0
      end
      object Button1: TButton
        Left = 32
        Top = 74
        Width = 75
        Height = 25
        Caption = 'crear a'
        TabOrder = 1
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 32
        Top = 105
        Width = 75
        Height = 25
        Caption = 'insertar a'
        TabOrder = 2
        OnClick = Button2Click
      end
      object Edit1: TEdit
        Left = 120
        Top = 107
        Width = 65
        Height = 21
        TabOrder = 3
        TextHint = 'elemento'
      end
      object Button32: TButton
        Left = 32
        Top = 222
        Width = 75
        Height = 25
        Caption = 'Ordinal'
        TabOrder = 4
        OnClick = Button32Click
      end
      object Button33: TButton
        Left = 32
        Top = 278
        Width = 75
        Height = 25
        Caption = 'suprime'
        TabOrder = 5
        OnClick = Button33Click
      end
      object Button67: TButton
        Left = 32
        Top = 326
        Width = 75
        Height = 25
        Caption = 'mostrar'
        TabOrder = 6
        OnClick = Button67Click
      end
      object Button3: TButton
        Left = 32
        Top = 191
        Width = 75
        Height = 25
        Caption = 'cardinal'
        TabOrder = 7
        OnClick = Button3Click
      end
      object Edit2: TEdit
        Left = 120
        Top = 224
        Width = 65
        Height = 21
        TabOrder = 8
        TextHint = 'elemento'
      end
      object Edit27: TEdit
        Left = 113
        Top = 328
        Width = 56
        Height = 21
        TabOrder = 9
        TextHint = 'X'
      end
      object Edit35: TEdit
        Left = 192
        Top = 328
        Width = 57
        Height = 21
        TabOrder = 10
        TextHint = 'Y'
      end
    end
    object TabSheet13: TTabSheet
      Caption = 'Cola_Lista'
      ImageIndex = 12
      object Label6: TLabel
        Left = 352
        Top = 205
        Width = 31
        Height = 13
        Caption = 'Label6'
      end
      object StringGrid2: TStringGrid
        Left = 352
        Top = 129
        Width = 35
        Height = 24
        ColCount = 1
        DefaultColWidth = 35
        FixedCols = 0
        RowCount = 1
        FixedRows = 0
        ScrollBars = ssNone
        TabOrder = 0
      end
      object Button73: TButton
        Left = 232
        Top = 128
        Width = 75
        Height = 25
        Caption = 'Crear'
        TabOrder = 1
        OnClick = Button73Click
      end
      object Button74: TButton
        Left = 232
        Top = 159
        Width = 75
        Height = 25
        Caption = 'Meter'
        TabOrder = 2
        OnClick = Button74Click
      end
      object Edit38: TEdit
        Left = 352
        Top = 159
        Width = 73
        Height = 21
        TabOrder = 3
        TextHint = 'Elemento'
      end
      object Button76: TButton
        Left = 232
        Top = 200
        Width = 75
        Height = 25
        Caption = 'Sacar'
        TabOrder = 4
        OnClick = Button76Click
      end
    end
    object Pila_Cola: TTabSheet
      Caption = 'Pila_Cola'
      ImageIndex = 13
      object Label7: TLabel
        Left = 184
        Top = 131
        Width = 31
        Height = 13
        Caption = 'Label7'
      end
      object Edit39: TEdit
        Left = 184
        Top = 90
        Width = 121
        Height = 21
        TabOrder = 0
        Text = 'Edit39'
      end
      object Button79: TButton
        Left = 64
        Top = 88
        Width = 75
        Height = 25
        Caption = 'Button79'
        TabOrder = 1
        OnClick = Button79Click
      end
      object Button80: TButton
        Left = 64
        Top = 125
        Width = 75
        Height = 28
        Caption = 'Button80'
        TabOrder = 2
        OnClick = Button80Click
      end
    end
  end
end

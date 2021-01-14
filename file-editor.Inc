
include windows.inc
include kernel32.inc
include user32.inc
include Comctl32.inc
include shell32.inc
include comdlg32.inc

includelib kernel32.lib
includelib user32.lib
includelib Comctl32.lib
includelib shell32.lib
includelib comdlg32.lib

DlgProc			PROTO	:HWND,:UINT,:WPARAM,:LPARAM

.const

;file-editor.dlg
IDD_DIALOG1						equ 101
IDC_EDT1						equ 1001
IDC_BTN1						equ 1002
IDC_BTN2						equ 1003

;file-editor.Rc


;#########################################################################

.data
	pmem dd 0
	readed dd 0

	filename db 260 dup(0)
	initdir db 260 dup(0)
	
	ofn OPENFILENAME <0>
;#########################################################################

.data?

hInstance		dd ?
hText			dd ?
hFile			dd ?

;#########################################################################

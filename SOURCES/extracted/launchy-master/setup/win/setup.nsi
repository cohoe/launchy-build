!include "MUI2.nsh"

Name "Launchy"
Outfile "..\..\bin\Launchy-setup.exe"

InstallDir $PROGRAMFILES\Launchy
InstallDirRegKey HKLM "Software\Launchy" "Install_Dir"

RequestExecutionLevel admin

;  !insertmacro MUI_PAGE_LICENSE "${NSISDIR}\Docs\Modern UI\License.txt"
  !insertmacro MUI_PAGE_COMPONENTS
  !insertmacro MUI_PAGE_DIRECTORY
  !insertmacro MUI_PAGE_INSTFILES
  
  !insertmacro MUI_UNPAGE_CONFIRM
  !insertmacro MUI_UNPAGE_INSTFILES

  !insertmacro MUI_LANGUAGE "English"

Section "Core files (required)"

	SectionIn RO

	SetOutPath $INSTDIR

	File "..\..\bin\app\Launchy.exe"
	File "..\..\bin\app\*.dll"

	SetOutPath $INSTDIR\plugins
	File /r "..\..\bin\app\plugins\*"
	SetOutPath $INSTDIR\skins
	File /r "..\..\bin\app\skins\*"
	SetOutPath $INSTDIR\tr
	File /r "..\..\bin\app\tr\*"

	WriteRegStr HKLM SOFTWARE\Launchy "Install_Dir" "$INSTDIR"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Launchy" "DisplayName" "Launchy"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Launchy" "UninstallString" '"$INSTDIR\uninstall.exe"'
	WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Launchy" "NoModify" 1
	WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Launchy" "NoRepair" 1
	WriteUninstaller "uninstall.exe"

	Exec '"$INSTDIR\Launchy.exe"'

SectionEnd


Section "Start Menu Shortcuts"

	CreateDirectory "$SMPROGRAMS\Launchy"
	CreateShortcut "$SMPROGRAMS\Launchy\Uninstall.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
	CreateShortcut "$SMPROGRAMS\Launchy\Launchy.lnk" "$INSTDIR\Launchy.exe" "" "$INSTDIR\Launchy.exe" 0
	CreateShortcut "$SMSTARTUP\Launchy.lnk" "$INSTDIR\Launchy.exe" "" "$INSTDIR\Launchy.exe" 0

SectionEnd


Section "Uninstall"
  
	; Remove registry keys
	DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Launchy"
	DeleteRegKey HKLM SOFTWARE\Launchy

	; Remove files and uninstaller
	Delete $INSTDIR\plugins\controly.dll"
	Delete $INSTDIR\plugins\runner.dll"
	Delete $INSTDIR\plugins\verby.dll"
	Delete $INSTDIR\plugins\weby.dll"
	Delete $INSTDIR\skins\*"
	Delete $INSTDIR\Launchy.exe
	Delete $INSTDIR\uninstall.exe

	; Remove shortcuts, if any
	Delete "$SMSTARTUP\Launchy.lnk"
	Delete "$SMPROGRAMS\Launchy\*.*"

	Delete $APPDATA\Launchy\*.*
	RmDir /r $APPDATA\Launchy\

	; Remove directories used
	RMDir "$SMPROGRAMS\Launchy\plugins"
	RMDir "$SMPROGRAMS\Launchy\skins"
	RMDir "$SMPROGRAMS\Launchy"
	RMDir "$INSTDIR"

SectionEnd

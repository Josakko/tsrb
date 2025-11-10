@echo off
echo Changing Office 2021 Product Key

set ProductKey=NCY7X-WW378-JGRXW-BHX3W-VH9J9

cd "%ProgramFiles%\Microsoft Office\Office16"

cscript ospp.vbs /unpkey:XXXXX

cscript ospp.vbs /inpkey:%ProductKey%

echo Activating Office over the internet...

cscript ospp.vbs /act

echo Activation complete

pause
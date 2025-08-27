# 打包脚本，替换xxx为实际位置或名称
@echo Setting up environment for Qt usage . . . 
set PATH=F:\Qt\qt_6.5.3\6.5.3\mingw_64\bin;F:\Qt\qt_6.5.3\Tools\mingw1120_64\bin;%PATH%
cd E:\
mkdir E:\Xxx
copy E:\XXXX\xxx\build\Desktop_Qt_6_5_3_MinGW_64_bit-Release\xxx.exe E:\Xxx
cd/d E:\Xxx
windeployqt xxx.exe
pause 

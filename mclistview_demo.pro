######################################################################
# Automatically generated by qmake (2.01a) ?? ?? 12 15:10:14 2016
######################################################################

TEMPLATE = app
TARGET = mclistview_demo
CONFIG(x64){
TARGET = $$TARGET"64"
}
include($$(SOUI3PATH)/demo_com.pri)

CONFIG(debug,debug|release){
	LIBS += utilitiesd.lib soui3d.lib
}
else{
	LIBS += utilities.lib soui3.lib
}

PRECOMPILED_HEADER = stdafx.h

# Input
HEADERS += resource.h \
           SSearchDropdownList.h \
           StudentSmsDlg.h \
           res/resource.h

SOURCES += mclistview_demo.cpp \
           SSearchDropdownList.cpp \
           StudentSmsDlg.cpp

RC_FILE += mclistview_demo.rc

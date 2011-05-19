# Add files and directories to ship with the application 
# by adapting the examples below.
# file1.source = myfile
# dir1.source = mydir
DEPLOYMENTFOLDERS = # file1 dir1

# Avoid auto screen rotation
#DEFINES += ORIENTATIONLOCK

# Needs to be defined for Symbian
DEFINES += NETWORKACCESS
INCLUDEPATH += /home/hardaker/src/dnssec/dnssec-tools.git/dnssec-tools/validator/include
INCLUDEPATH += /opt/maemo/usr/include/
LIBS        += -lval-threads -lsres -lnsl -lcrypto -lpthread


symbian:TARGET.UID3 = 0xECD7BC68

# If your application uses the Qt Mobility libraries, uncomment
# the following lines and add the respective components to the 
# MOBILITY variable. 
# CONFIG += mobility
# MOBILITY +=

SOURCES += main.cpp mainwindow.cpp \
    dnssec_checks.cpp \
    QStatusLight.cpp
HEADERS += mainwindow.h \
    QStatusLight.h \
    dnssec_checks.h

# Please do not modify the following two lines. Required for deployment.
include(deployment.pri)
qtcAddDeployment()

RESOURCES += \
    dnssec-check.qrc
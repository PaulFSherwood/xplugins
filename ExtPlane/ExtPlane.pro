TEMPLATE = subdirs

SUBDIRS = extplane-server \
    clients/extplane-client-qt
CONFIG += ordered

include(common.pri)

defined(XPLANE_SDK_PATH, var) {
    message("Building X-Plane plugin with SDK in $$XPLANE_SDK_PATH")
    SUBDIRS += extplane-plugin
} else {
    warning("No X-Plane SDK found in ../XPlaneSDK or ~/SDK - not building X-Plane plugin")
}

versionAtLeast(QT_VERSION, 5.8.0) {
    SUBDIRS += extplane-transformer
} else {
    warning(Qt 5.8.0 needed to build extplane-transformer - skipping $$QT_VERSION)
}

OTHER_FILES += README.md clients/extplane-client-qt/README

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/clients/extplane-client-qt/release/ -lextplane-client-qt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/clients/extplane-client-qt/debug/ -lextplane-client-qt

INCLUDEPATH += $$PWD/../XPlaneSDK/Libraries/Win
DEPENDPATH += $$PWD/../XPlaneSDK/Libraries/Win

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/clients/extplane-client-qt/release/libextplane-client-qt.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/clients/extplane-client-qt/debug/libextplane-client-qt.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/clients/extplane-client-qt/release/extplane-client-qt.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/clients/extplane-client-qt/debug/extplane-client-qt.lib

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/clients/extplane-client-qt/release/ -lextplane-client-qt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/clients/extplane-client-qt/debug/ -lextplane-client-qt

INCLUDEPATH += $$PWD/../XPlaneSDK/CHeaders/XPLM
DEPENDPATH += $$PWD/../XPlaneSDK/CHeaders/XPLM

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/clients/extplane-client-qt/release/libextplane-client-qt.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/clients/extplane-client-qt/debug/libextplane-client-qt.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/clients/extplane-client-qt/release/extplane-client-qt.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/clients/extplane-client-qt/debug/extplane-client-qt.lib

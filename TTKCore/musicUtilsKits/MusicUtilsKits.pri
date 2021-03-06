# =================================================
# * This file is part of the TTK Music Player project
# * Copyright (c) 2015 - 2017 Greedysky Studio
# * All rights reserved!
# * Redistribution and use of the source code or any derivative
# * works are strictly forbiden.
# =================================================

INCLUDEPATH += $$PWD

!contains(CONFIG, TTK_NO_MSVC_LINK_NEED){
HEADERS  += \
    $$PWD/musiccoreutils.h \
    $$PWD/musicwidgetutils.h \
    $$PWD/musicnumberutils.h \
    $$PWD/musicstringutils.h \
    $$PWD/musicalgorithmutils.h

}

contains(CONFIG, TTK_BUILD_LIB){
SOURCES += \
    $$PWD/musiccoreutils.cpp \
    $$PWD/musicwidgetutils.cpp \
    $$PWD/musicnumberutils.cpp \
    $$PWD/musicstringutils.cpp \
    $$PWD/musicalgorithmutils.cpp

}

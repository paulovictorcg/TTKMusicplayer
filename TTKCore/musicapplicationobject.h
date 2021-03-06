#ifndef MUSICAPPLICATIONOBJECT_H
#define MUSICAPPLICATIONOBJECT_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicobject.h"
#include "musicglobaldefine.h"

class QDeviceWatcher;
class MusicTimerAutoObject;
class MusicMobileDevicesWidget;
class QPropertyAnimation;

/*! @brief The class of the app object widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_GUI_EXPORT MusicApplicationObject : public QObject
{
    Q_OBJECT
public:
    explicit MusicApplicationObject(QObject *parent = 0);
    /*!
     * Object contsructor.
     */
    ~MusicApplicationObject();

    static QString getClassName();
    /*!
     * Get class object name.
     */
    static MusicApplicationObject *instance();
    /*!
     * Get class object instance.
     */
    bool getWindowToTop() const {return m_setWindowToTop;}
    /*!
     * Get current window is to top.
     */
    void getParameterSetting();
    /*!
     * Get settings parameters.
     */
    void windowCloseAnimation();
    /*!
     * Window close animation.
     */
    void soureUpdateCheck();
    /*!
     * Soure update check.
     */

    void sideAnimationByOn();
    /*!
     * Side animation by on.
     */
    void sideAnimationByOff();
    /*!
     * Side animation by off.
     */
    void sideAnimationReset();
    /*!
     * Side animation reset.
     */

Q_SIGNALS:
    void enhancedMusicChanged(int type);
    /*!
     * Set enhanced music config changed.
     */

public Q_SLOTS:
    void windowCloseAnimationFinished();
    /*!
     * Window close animation finished.
     */
    void musicAboutUs();
    /*!
     * Show about us widget.
     */
    void musicVersionUpdate();
    /*!
     * Show version update widget.
     */
    void musicTimerWidget();
    /*!
     * Show timer widget.
     */
    void musicSetWindowToTop();
    /*!
     * Set current window to top.
     */
    void musicResetWindow();
    /*!
     * Reset current window geometry.
     */
    void musicToolSetsParameter();
    /*!
     * Tools sets parameter changed.
     */
    void musicDeviceNameChanged(const QString &name);
    /*!
     * Detect mobile devices name changed.
     */
    void musicDeviceChanged(bool state);
    /*!
     * Detect mobile devices changed.
     */
    void musicSetEqualizer();
    /*!
     * Show set equalizer widget.
     */
    void musicSetSoundEffect();
    /*!
     * Show set sound effect widget.
     */
    void musicEffectChanged();
    /*!
     * Sound effect changed.
     */

protected:
    bool closeCurrentEqualizer();
    /*!
     * Close current equalizer.
     */
    void cleanUp();
    /*!
     * Something temp clean up.
     */

    bool m_setWindowToTop;
    bool m_leftSideByOn, m_rightSideByOn;
    QPropertyAnimation *m_quitAnimation, *m_sideAnimation;
    MusicTimerAutoObject *m_musicTimerAutoObj;
    MusicMobileDevicesWidget *m_mobileDeviceWidget;
    QDeviceWatcher *m_deviceWatcher;
    QWidget *m_quitContainer;

    static MusicApplicationObject *m_instance;
};

#endif // MUSICAPPLICATIONOBJECT_H

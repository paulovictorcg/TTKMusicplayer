#ifndef MUSICFILEINFORMATIONWIDGET_H
#define MUSICFILEINFORMATIONWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QDialog>
#include "musicabstractmovedialog.h"

namespace Ui {
class MusicFileInformationWidget;
}

/*! @brief The class of the file information widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOLSET_EXPORT MusicFileInformationWidget : public MusicAbstractMoveDialog
{
    Q_OBJECT
public:
    explicit MusicFileInformationWidget(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    virtual ~MusicFileInformationWidget();

    static QString getClassName();
    /*!
     * Get class object name.
     */
    void setFileInformation(const QString &name);
    /*!
     * Set music file song path name.
     */

public Q_SLOTS:
    void musicOpenFileDir();
    /*!
     * Open the music at local path.
     */
    void musicOpenImageFileDir();
    /*!
     * Open the selected user pixmap.
     */
    void musicAdvanceClicked();
    /*!
     * Music advance clicked.
     */
    void musicEditTag();
    /*!
     * Music modify tag start.
     */
    void musicSaveTag();
    /*!
     * Music modify tag save.
     */
    virtual int exec();
    /*!
     * Override exec function.
     */

protected:
    void setEditLineEnable(bool enable);
    /*!
     * Eet editLine enable.
     */

    Ui::MusicFileInformationWidget *m_ui;
    QString m_path, m_imagePath;
    bool m_advanceOn;

};

#endif // MUSICFILEINFORMATIONWIDGET_H

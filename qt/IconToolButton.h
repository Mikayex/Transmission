/*
 * This file Copyright (C) 2009-2015 Mnemosyne LLC
 *
 * It may be used under the GNU GPL versions 2 or 3
 * or any future license endorsed by Mnemosyne LLC.
 *
 */

#pragma once

#include <QToolButton>

class IconToolButton: public QToolButton
{
    Q_OBJECT

  public:
    IconToolButton (QWidget * parent = nullptr);

    // QWidget
    virtual QSize sizeHint () const;

  protected:
    // QWidget
    virtual void paintEvent (QPaintEvent * event);
};


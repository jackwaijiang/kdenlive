/***************************************************************************
 *   Copyright (C) 2010 by Till Theato (root@ttill.de)                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA          *
 ***************************************************************************/


#ifndef ABSTRACTONMONITORITEM_H
#define ABSTRACTONMONITORITEM_H

#include <QtCore>
#include <QGraphicsItem>


class MonitorScene;

class AbstractOnMonitorItem : public QObject
{
    Q_OBJECT
public:
    AbstractOnMonitorItem(MonitorScene *scene);
    //virtual ~AbstractOnMonitorItem() = 0;

protected slots:
    virtual void slotMousePressed(QGraphicsSceneMouseEvent *event) = 0;
    /** @brief emits actionFinished signal if item was modified. */
    virtual void slotMouseReleased(QGraphicsSceneMouseEvent *event);
    virtual void slotMouseMoved(QGraphicsSceneMouseEvent *event) = 0;

protected:
    bool m_modified;

signals:
    void actionFinished();
    void requestCursor(const QCursor &);
    //void modified();
};

#endif

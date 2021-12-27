#ifndef QBOOK_H
#define QBOOK_H

#include <QObject>
#include <QWidget>
#include <QImage>
#include <QPainter>
#include <QPaintEvent>

class QBook : public QWidget
{
    Q_OBJECT
public:
    explicit QBook(QWidget *parent = nullptr);

signals:

};

#endif // QBOOK_H

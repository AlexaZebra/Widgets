#ifndef WIN_H
#define WIN_H

#include <QObject>
#include <QWidget>

class Win : public QObject
{
    Q_OBJECT
public:
    explicit Win(QObject *parent = nullptr);

signals:

};

#endif // WIN_H

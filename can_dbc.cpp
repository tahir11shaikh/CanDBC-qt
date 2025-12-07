#include "can_dbc.h"

#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include <QDebug>

struct CanDBC::Impl {
    QList<CanDBC::Message> messages;
};

CanDBC::CanDBC()  : d(new Impl) {}
CanDBC::~CanDBC() { delete d; }

bool CanDBC::loadDBC(const QString &dbcFilePath)
{
    return true;
}

const QList<CanDBC::Message>& CanDBC::msgList() const
{
    return d->messages;
}

QList<QPair<QString,double>> CanDBC::decodeFrame(int messageId, const QByteArray &rawData) const
{
    QList<QPair<QString,double>> out;

    return out;
}

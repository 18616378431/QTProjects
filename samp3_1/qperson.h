#ifndef QPERSON_H
#define QPERSON_H

#include <QObject>
#include <QString>

class QPerson : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author","Wang")
    Q_CLASSINFO("company","UPC")
    Q_CLASSINFO("version","1.0.0")
    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString name MEMBER m_name)
    Q_PROPERTY(int score MEMBER m_score)

public:
    explicit QPerson(QString fname,QObject *parent = nullptr);
    int age();
    void setAge(int value);
    void incAge();

private:
    int m_age = 10;
    QString m_name;
    int m_score = 79;

signals:
    void ageChanged(int value);

public slots:
};

#endif // QPERSON_H

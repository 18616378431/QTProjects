#ifndef QWFLOATDELEGATE_H
#define QWFLOATDELEGATE_H

#include <QStyledItemDelegate>

class QWFloatDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    QWFloatDelegate(QObject *parent = 0);
    //自定义代理组件必须继承以下四个函数
    QWidget *createEditor(QWidget *parent,
                          const QStyleOptionViewItem &option,
                          const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setEditorData(QWidget *editor,
                       const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setModelData(QWidget *editor,
                      QAbstractItemModel *model,
                      const QModelIndex &index) const Q_DECL_OVERRIDE;
    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const Q_DECL_OVERRIDE;
};

#endif // QWFLOATDELEGATE_H

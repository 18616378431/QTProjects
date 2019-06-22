#include "qwintspindelegate.h"
#include <QSpinBox>

QWIntSpinDelegate::QWIntSpinDelegate(QObject *parent)
{

}

QWidget *QWIntSpinDelegate::createEditor(QWidget *parent,
                                         const QStyleOptionViewItem &option,
                                         const QModelIndex &index) const
{
    //创建代理编辑组件
    QSpinBox *editor = new QSpinBox(parent);
    editor->setFrame(false);
    editor->setMinimum(0);
    editor->setMaximum(10000);
    return editor;
}

//双击单元格时触发
void QWIntSpinDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    //从数据模型获取数据显示到代理组件上
    int value = index.model()->data(index,Qt::EditRole).toInt();
    QSpinBox *spinbox = static_cast<QSpinBox *>(editor);
    spinbox->setValue(value);
}

//将视图的值更新到数据模型
void QWIntSpinDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    //将代理组件的数据保存到数据模型中
    QSpinBox *spinbox = static_cast<QSpinBox *>(editor);
    spinbox->interpretText();
    int value = spinbox->value();
    model->setData(index,value,Qt::EditRole);
}

//设置代理组件为合适的大小
void QWIntSpinDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    //设置组件大小
    editor->setGeometry(option.rect);
}

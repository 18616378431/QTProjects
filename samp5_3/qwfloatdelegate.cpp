#include "qwfloatdelegate.h"
#include <QDoubleSpinBox>

QWFloatDelegate::QWFloatDelegate(QObject *parent)
{

}

QWidget *QWFloatDelegate::createEditor(QWidget *parent,
                                         const QStyleOptionViewItem &option,
                                         const QModelIndex &index) const
{
    //创建代理编辑组件
    QDoubleSpinBox *editor = new QDoubleSpinBox(parent);
    editor->setFrame(false);
    editor->setMinimum(0);
    editor->setMaximum(10000);
    return editor;
}

//双击单元格时触发
void QWFloatDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    //从数据模型获取数据显示到代理组件上
    double value = index.model()->data(index,Qt::EditRole).toDouble();
    QDoubleSpinBox *doubleSpinbox = static_cast<QDoubleSpinBox *>(editor);
    doubleSpinbox->setValue(value);
}

//将视图的值更新到数据模型
void QWFloatDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    //将代理组件的数据保存到数据模型中
    QDoubleSpinBox *doubleSpinbox = static_cast<QDoubleSpinBox *>(editor);
    doubleSpinbox->interpretText();
    double value = doubleSpinbox->value();
    model->setData(index,value,Qt::EditRole);
}

//设置代理组件为合适的大小
void QWFloatDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    //设置组件大小
    editor->setGeometry(option.rect);
}

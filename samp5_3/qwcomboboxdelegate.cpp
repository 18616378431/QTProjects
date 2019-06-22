#include "qwcomboboxdelegate.h"
#include <QComboBox>

QWComboBoxDelegate::QWComboBoxDelegate(QObject *parent)
{

}

QWidget *QWComboBoxDelegate::createEditor(QWidget *parent,
                                         const QStyleOptionViewItem &option,
                                         const QModelIndex &index) const
{
    //创建代理编辑组件
    QComboBox *editor = new QComboBox(parent);
    editor->addItem("优");
    editor->addItem("良");
    editor->addItem("一般");
    editor->addItem("不合格");
    return editor;
}

//双击单元格时触发
void QWComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    //从数据模型获取数据显示到代理组件上
    QString value = index.model()->data(index,Qt::EditRole).toString();
    QComboBox *combobox = static_cast<QComboBox *>(editor);
    combobox->setCurrentText(value);
}

//将视图的值更新到数据模型
void QWComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    //将代理组件的数据保存到数据模型中
    QComboBox *combobox = static_cast<QComboBox *>(editor);
    QString str = combobox->currentText();
    model->setData(index,str,Qt::EditRole);
}

//设置代理组件为合适的大小
void QWComboBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    //设置组件大小
    editor->setGeometry(option.rect);
}

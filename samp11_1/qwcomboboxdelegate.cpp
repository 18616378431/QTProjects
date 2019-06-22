#include "qwcomboboxdelegate.h"

QWComboBoxDelegate::QWComboBoxDelegate(QWidget *parent):QStyledItemDelegate(parent)
{

}

void QWComboBoxDelegate::setItems(QStringList items, bool isEdit)
{
    m_ItemList = items;
    m_isEdit = isEdit;
}

QWidget *QWComboBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);

    //创建代理编辑组件
    QComboBox *editor = new QComboBox(parent);
    //字符串列表初始化下拉列表
    for(int i = 0;i < m_ItemList.length();i++)
    {
        editor->addItem(m_ItemList.at(i));
    }
    //是否可编辑
    editor->setEditable(m_isEdit);

    return editor;
}

void QWComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    //从数据模型中获取数据显示到代理组件上
    QString value = index.model()->data(index,Qt::EditRole).toString();
    QComboBox *comboBox = static_cast<QComboBox *>(editor);
    comboBox->setCurrentText(value);
}

void QWComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    //将代理组件的数据保存到模型中
    QComboBox *comboBox = static_cast<QComboBox *>(editor);
    QString str = comboBox->currentText();
    model->setData(index,str,Qt::EditRole);
}

void QWComboBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    //设置组件大小
    editor->setGeometry(option.rect);
}

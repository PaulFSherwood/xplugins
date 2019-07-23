/********************************************************************************
** Form generated from reading UI file 'panelsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELSDIALOG_H
#define UI_PANELSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PanelsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonMoveUp;
    QPushButton *buttonMoveDown;
    QPushButton *buttonRemove;
    QPushButton *buttonCopy;
    QPushButton *buttonAddNew;
    QPushButton *buttonSelect;

    void setupUi(QDialog *PanelsDialog)
    {
        if (PanelsDialog->objectName().isEmpty())
            PanelsDialog->setObjectName(QString::fromUtf8("PanelsDialog"));
        PanelsDialog->resize(400, 350);
        horizontalLayout = new QHBoxLayout(PanelsDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(PanelsDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);

        widget = new QWidget(PanelsDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonMoveUp = new QPushButton(widget);
        buttonMoveUp->setObjectName(QString::fromUtf8("buttonMoveUp"));

        verticalLayout->addWidget(buttonMoveUp);

        buttonMoveDown = new QPushButton(widget);
        buttonMoveDown->setObjectName(QString::fromUtf8("buttonMoveDown"));

        verticalLayout->addWidget(buttonMoveDown);

        buttonRemove = new QPushButton(widget);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        verticalLayout->addWidget(buttonRemove);

        buttonCopy = new QPushButton(widget);
        buttonCopy->setObjectName(QString::fromUtf8("buttonCopy"));

        verticalLayout->addWidget(buttonCopy);

        buttonAddNew = new QPushButton(widget);
        buttonAddNew->setObjectName(QString::fromUtf8("buttonAddNew"));

        verticalLayout->addWidget(buttonAddNew);

        buttonSelect = new QPushButton(widget);
        buttonSelect->setObjectName(QString::fromUtf8("buttonSelect"));

        verticalLayout->addWidget(buttonSelect);


        horizontalLayout->addWidget(widget);


        retranslateUi(PanelsDialog);

        QMetaObject::connectSlotsByName(PanelsDialog);
    } // setupUi

    void retranslateUi(QDialog *PanelsDialog)
    {
        PanelsDialog->setWindowTitle(QApplication::translate("PanelsDialog", "Manage Panels", nullptr));
        buttonMoveUp->setText(QApplication::translate("PanelsDialog", "Move Up", nullptr));
        buttonMoveDown->setText(QApplication::translate("PanelsDialog", "Move Down", nullptr));
        buttonRemove->setText(QApplication::translate("PanelsDialog", "Remove", nullptr));
        buttonCopy->setText(QApplication::translate("PanelsDialog", "Copy", nullptr));
        buttonAddNew->setText(QApplication::translate("PanelsDialog", "Add New", nullptr));
        buttonSelect->setText(QApplication::translate("PanelsDialog", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PanelsDialog: public Ui_PanelsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELSDIALOG_H

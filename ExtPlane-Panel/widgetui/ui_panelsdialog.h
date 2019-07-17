/********************************************************************************
** Form generated from reading UI file 'panelsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELSDIALOG_H
#define UI_PANELSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            PanelsDialog->setObjectName(QStringLiteral("PanelsDialog"));
        PanelsDialog->resize(400, 350);
        horizontalLayout = new QHBoxLayout(PanelsDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(PanelsDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        widget = new QWidget(PanelsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonMoveUp = new QPushButton(widget);
        buttonMoveUp->setObjectName(QStringLiteral("buttonMoveUp"));

        verticalLayout->addWidget(buttonMoveUp);

        buttonMoveDown = new QPushButton(widget);
        buttonMoveDown->setObjectName(QStringLiteral("buttonMoveDown"));

        verticalLayout->addWidget(buttonMoveDown);

        buttonRemove = new QPushButton(widget);
        buttonRemove->setObjectName(QStringLiteral("buttonRemove"));

        verticalLayout->addWidget(buttonRemove);

        buttonCopy = new QPushButton(widget);
        buttonCopy->setObjectName(QStringLiteral("buttonCopy"));

        verticalLayout->addWidget(buttonCopy);

        buttonAddNew = new QPushButton(widget);
        buttonAddNew->setObjectName(QStringLiteral("buttonAddNew"));

        verticalLayout->addWidget(buttonAddNew);

        buttonSelect = new QPushButton(widget);
        buttonSelect->setObjectName(QStringLiteral("buttonSelect"));

        verticalLayout->addWidget(buttonSelect);


        horizontalLayout->addWidget(widget);


        retranslateUi(PanelsDialog);

        QMetaObject::connectSlotsByName(PanelsDialog);
    } // setupUi

    void retranslateUi(QDialog *PanelsDialog)
    {
        PanelsDialog->setWindowTitle(QApplication::translate("PanelsDialog", "Manage Panels", Q_NULLPTR));
        buttonMoveUp->setText(QApplication::translate("PanelsDialog", "Move Up", Q_NULLPTR));
        buttonMoveDown->setText(QApplication::translate("PanelsDialog", "Move Down", Q_NULLPTR));
        buttonRemove->setText(QApplication::translate("PanelsDialog", "Remove", Q_NULLPTR));
        buttonCopy->setText(QApplication::translate("PanelsDialog", "Copy", Q_NULLPTR));
        buttonAddNew->setText(QApplication::translate("PanelsDialog", "Add New", Q_NULLPTR));
        buttonSelect->setText(QApplication::translate("PanelsDialog", "Select", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PanelsDialog: public Ui_PanelsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELSDIALOG_H

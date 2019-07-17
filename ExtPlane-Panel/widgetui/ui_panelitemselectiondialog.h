/********************************************************************************
** Form generated from reading UI file 'panelitemselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELITEMSELECTIONDIALOG_H
#define UI_PANELITEMSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PanelItemSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *itemList;
    QGraphicsView *itemPreview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PanelItemSelectionDialog)
    {
        if (PanelItemSelectionDialog->objectName().isEmpty())
            PanelItemSelectionDialog->setObjectName(QStringLiteral("PanelItemSelectionDialog"));
        PanelItemSelectionDialog->resize(798, 525);
        verticalLayout = new QVBoxLayout(PanelItemSelectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(PanelItemSelectionDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        itemList = new QListWidget(splitter);
        itemList->setObjectName(QStringLiteral("itemList"));
        splitter->addWidget(itemList);
        itemPreview = new QGraphicsView(splitter);
        itemPreview->setObjectName(QStringLiteral("itemPreview"));
        splitter->addWidget(itemPreview);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(PanelItemSelectionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PanelItemSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PanelItemSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PanelItemSelectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PanelItemSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *PanelItemSelectionDialog)
    {
        PanelItemSelectionDialog->setWindowTitle(QApplication::translate("PanelItemSelectionDialog", "Add item", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PanelItemSelectionDialog: public Ui_PanelItemSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELITEMSELECTIONDIALOG_H

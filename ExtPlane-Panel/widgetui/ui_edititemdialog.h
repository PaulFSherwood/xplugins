/********************************************************************************
** Form generated from reading UI file 'edititemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEMDIALOG_H
#define UI_EDITITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditItemDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGridLayout *itemPropertiesGrid;
    QSpinBox *angleSpinBox;
    QLabel *label_3;
    QDial *rotationDial;
    QLabel *label;
    QSlider *zSlider;
    QLabel *label_2;
    QDoubleSpinBox *itemFontsizeSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditItemDialog)
    {
        if (EditItemDialog->objectName().isEmpty())
            EditItemDialog->setObjectName(QStringLiteral("EditItemDialog"));
        EditItemDialog->resize(446, 380);
        verticalLayout_2 = new QVBoxLayout(EditItemDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new QScrollArea(EditItemDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 426, 325));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        itemPropertiesGrid = new QGridLayout();
        itemPropertiesGrid->setObjectName(QStringLiteral("itemPropertiesGrid"));
        angleSpinBox = new QSpinBox(scrollAreaWidgetContents);
        angleSpinBox->setObjectName(QStringLiteral("angleSpinBox"));
        angleSpinBox->setMinimum(-179);
        angleSpinBox->setMaximum(179);

        itemPropertiesGrid->addWidget(angleSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        itemPropertiesGrid->addWidget(label_3, 2, 0, 1, 1);

        rotationDial = new QDial(scrollAreaWidgetContents);
        rotationDial->setObjectName(QStringLiteral("rotationDial"));
        rotationDial->setMinimumSize(QSize(100, 100));
        rotationDial->setMinimum(-179);
        rotationDial->setMaximum(180);
        rotationDial->setWrapping(true);
        rotationDial->setNotchTarget(5);
        rotationDial->setNotchesVisible(true);

        itemPropertiesGrid->addWidget(rotationDial, 0, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        itemPropertiesGrid->addWidget(label, 0, 0, 1, 1);

        zSlider = new QSlider(scrollAreaWidgetContents);
        zSlider->setObjectName(QStringLiteral("zSlider"));
        zSlider->setMinimum(-10);
        zSlider->setMaximum(10);
        zSlider->setOrientation(Qt::Horizontal);
        zSlider->setTickPosition(QSlider::TicksAbove);

        itemPropertiesGrid->addWidget(zSlider, 2, 1, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        itemPropertiesGrid->addWidget(label_2, 3, 0, 1, 1);

        itemFontsizeSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        itemFontsizeSpinBox->setObjectName(QStringLiteral("itemFontsizeSpinBox"));
        itemFontsizeSpinBox->setDecimals(1);
        itemFontsizeSpinBox->setMinimum(-20);
        itemFontsizeSpinBox->setMaximum(20);

        itemPropertiesGrid->addWidget(itemFontsizeSpinBox, 3, 1, 1, 1);


        verticalLayout->addLayout(itemPropertiesGrid);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        deleteButton = new QPushButton(EditItemDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(EditItemDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(EditItemDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), EditItemDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), EditItemDialog, SLOT(accept()));
        QObject::connect(rotationDial, SIGNAL(valueChanged(int)), angleSpinBox, SLOT(setValue(int)));
        QObject::connect(angleSpinBox, SIGNAL(valueChanged(int)), rotationDial, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(EditItemDialog);
    } // setupUi

    void retranslateUi(QDialog *EditItemDialog)
    {
        EditItemDialog->setWindowTitle(QApplication::translate("EditItemDialog", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("EditItemDialog", "Z-value (Bottom<->Top)", Q_NULLPTR));
        label->setText(QApplication::translate("EditItemDialog", "Rotation", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditItemDialog", "Relative font size", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("EditItemDialog", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditItemDialog: public Ui_EditItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEMDIALOG_H

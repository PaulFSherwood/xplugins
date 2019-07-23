/********************************************************************************
** Form generated from reading UI file 'hardwaredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARDWAREDIALOG_H
#define UI_HARDWAREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HardwareDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout_4;
    QCheckBox *enableSB;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLabel *sbWorkingLabel;
    QCheckBox *enablePololu;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QLabel *pololuWorkingLabel;
    QLabel *label_12;
    QLineEdit *pololuPort;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_5;
    QLabel *label_13;
    QLabel *chromaWorkingLabel;
    QLabel *label_14;
    QLineEdit *chromaPort;
    QCheckBox *enableChroma;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *bindingListWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *newBindingButton;
    QPushButton *deleteBindingButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *bindingPropertiesGroupBox;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *bindingNameLineEdit;
    QLabel *label;
    QLineEdit *bindingRefNameEdit;
    QLabel *label_9;
    QDoubleSpinBox *refAccuracySpinBox;
    QLabel *label_2;
    QDoubleSpinBox *inputMinSpinbox;
    QLabel *label_3;
    QDoubleSpinBox *inputMaxSpinbox;
    QLabel *label_7;
    QComboBox *outputDeviceComboBox;
    QLabel *label_4;
    QSpinBox *outputNumSpinbox;
    QPushButton *outputCurvesButton;
    QLabel *label_15;
    QDoubleSpinBox *interpolationSpeedSpinbox;
    QPushButton *saveChangesButton;
    QSpinBox *outputSpeedSpinbox;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HardwareDialog)
    {
        if (HardwareDialog->objectName().isEmpty())
            HardwareDialog->setObjectName(QString::fromUtf8("HardwareDialog"));
        HardwareDialog->resize(955, 583);
        verticalLayout_3 = new QVBoxLayout(HardwareDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(HardwareDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout_4 = new QFormLayout(tab);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        enableSB = new QCheckBox(tab);
        enableSB->setObjectName(QString::fromUtf8("enableSB"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, enableSB);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        sbWorkingLabel = new QLabel(groupBox_2);
        sbWorkingLabel->setObjectName(QString::fromUtf8("sbWorkingLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sbWorkingLabel);


        formLayout_4->setWidget(0, QFormLayout::FieldRole, groupBox_2);

        enablePololu = new QCheckBox(tab);
        enablePololu->setObjectName(QString::fromUtf8("enablePololu"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, enablePololu);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        pololuWorkingLabel = new QLabel(groupBox_3);
        pololuWorkingLabel->setObjectName(QString::fromUtf8("pololuWorkingLabel"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pololuWorkingLabel);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        pololuPort = new QLineEdit(groupBox_3);
        pololuPort->setObjectName(QString::fromUtf8("pololuPort"));
        pololuPort->setEnabled(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, pololuPort);


        formLayout_4->setWidget(1, QFormLayout::FieldRole, groupBox_3);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_5 = new QFormLayout(groupBox_4);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_13);

        chromaWorkingLabel = new QLabel(groupBox_4);
        chromaWorkingLabel->setObjectName(QString::fromUtf8("chromaWorkingLabel"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, chromaWorkingLabel);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_14);

        chromaPort = new QLineEdit(groupBox_4);
        chromaPort->setObjectName(QString::fromUtf8("chromaPort"));
        chromaPort->setEnabled(false);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, chromaPort);


        formLayout_4->setWidget(2, QFormLayout::FieldRole, groupBox_4);

        enableChroma = new QCheckBox(tab);
        enableChroma->setObjectName(QString::fromUtf8("enableChroma"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, enableChroma);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bindingListWidget = new QListWidget(groupBox);
        bindingListWidget->setObjectName(QString::fromUtf8("bindingListWidget"));

        horizontalLayout->addWidget(bindingListWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        newBindingButton = new QPushButton(groupBox);
        newBindingButton->setObjectName(QString::fromUtf8("newBindingButton"));

        verticalLayout->addWidget(newBindingButton);

        deleteBindingButton = new QPushButton(groupBox);
        deleteBindingButton->setObjectName(QString::fromUtf8("deleteBindingButton"));

        verticalLayout->addWidget(deleteBindingButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addWidget(groupBox);

        bindingPropertiesGroupBox = new QGroupBox(tab_2);
        bindingPropertiesGroupBox->setObjectName(QString::fromUtf8("bindingPropertiesGroupBox"));
        formLayout = new QFormLayout(bindingPropertiesGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_8 = new QLabel(bindingPropertiesGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        bindingNameLineEdit = new QLineEdit(bindingPropertiesGroupBox);
        bindingNameLineEdit->setObjectName(QString::fromUtf8("bindingNameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, bindingNameLineEdit);

        label = new QLabel(bindingPropertiesGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        bindingRefNameEdit = new QLineEdit(bindingPropertiesGroupBox);
        bindingRefNameEdit->setObjectName(QString::fromUtf8("bindingRefNameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, bindingRefNameEdit);

        label_9 = new QLabel(bindingPropertiesGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_9);

        refAccuracySpinBox = new QDoubleSpinBox(bindingPropertiesGroupBox);
        refAccuracySpinBox->setObjectName(QString::fromUtf8("refAccuracySpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, refAccuracySpinBox);

        label_2 = new QLabel(bindingPropertiesGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        inputMinSpinbox = new QDoubleSpinBox(bindingPropertiesGroupBox);
        inputMinSpinbox->setObjectName(QString::fromUtf8("inputMinSpinbox"));
        inputMinSpinbox->setMinimum(-99999.000000000000000);
        inputMinSpinbox->setMaximum(99999.990000000005239);

        formLayout->setWidget(3, QFormLayout::FieldRole, inputMinSpinbox);

        label_3 = new QLabel(bindingPropertiesGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        inputMaxSpinbox = new QDoubleSpinBox(bindingPropertiesGroupBox);
        inputMaxSpinbox->setObjectName(QString::fromUtf8("inputMaxSpinbox"));
        inputMaxSpinbox->setMinimum(-99999.000000000000000);
        inputMaxSpinbox->setMaximum(99999.000000000000000);
        inputMaxSpinbox->setValue(100.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, inputMaxSpinbox);

        label_7 = new QLabel(bindingPropertiesGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        outputDeviceComboBox = new QComboBox(bindingPropertiesGroupBox);
        outputDeviceComboBox->addItem(QString());
        outputDeviceComboBox->addItem(QString());
        outputDeviceComboBox->addItem(QString());
        outputDeviceComboBox->addItem(QString());
        outputDeviceComboBox->setObjectName(QString::fromUtf8("outputDeviceComboBox"));
        outputDeviceComboBox->setEnabled(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, outputDeviceComboBox);

        label_4 = new QLabel(bindingPropertiesGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        outputNumSpinbox = new QSpinBox(bindingPropertiesGroupBox);
        outputNumSpinbox->setObjectName(QString::fromUtf8("outputNumSpinbox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, outputNumSpinbox);

        outputCurvesButton = new QPushButton(bindingPropertiesGroupBox);
        outputCurvesButton->setObjectName(QString::fromUtf8("outputCurvesButton"));

        formLayout->setWidget(8, QFormLayout::FieldRole, outputCurvesButton);

        label_15 = new QLabel(bindingPropertiesGroupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_15);

        interpolationSpeedSpinbox = new QDoubleSpinBox(bindingPropertiesGroupBox);
        interpolationSpeedSpinbox->setObjectName(QString::fromUtf8("interpolationSpeedSpinbox"));

        formLayout->setWidget(9, QFormLayout::FieldRole, interpolationSpeedSpinbox);

        saveChangesButton = new QPushButton(bindingPropertiesGroupBox);
        saveChangesButton->setObjectName(QString::fromUtf8("saveChangesButton"));

        formLayout->setWidget(10, QFormLayout::FieldRole, saveChangesButton);

        outputSpeedSpinbox = new QSpinBox(bindingPropertiesGroupBox);
        outputSpeedSpinbox->setObjectName(QString::fromUtf8("outputSpeedSpinbox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, outputSpeedSpinbox);

        label_5 = new QLabel(bindingPropertiesGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);


        verticalLayout_2->addWidget(bindingPropertiesGroupBox);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(HardwareDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(HardwareDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HardwareDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HardwareDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HardwareDialog);
    } // setupUi

    void retranslateUi(QDialog *HardwareDialog)
    {
        HardwareDialog->setWindowTitle(QApplication::translate("HardwareDialog", "Hardware devices", nullptr));
        enableSB->setText(QApplication::translate("HardwareDialog", "Enable", nullptr));
        groupBox_2->setTitle(QApplication::translate("HardwareDialog", "Raspberry Pi ServoBlaster", nullptr));
        label_10->setText(QApplication::translate("HardwareDialog", "Status:", nullptr));
        sbWorkingLabel->setText(QApplication::translate("HardwareDialog", "?", nullptr));
        enablePololu->setText(QApplication::translate("HardwareDialog", "Enable", nullptr));
        groupBox_3->setTitle(QApplication::translate("HardwareDialog", "Pololu SSC04A", nullptr));
        label_11->setText(QApplication::translate("HardwareDialog", "Status:", nullptr));
        pololuWorkingLabel->setText(QApplication::translate("HardwareDialog", "?", nullptr));
        label_12->setText(QApplication::translate("HardwareDialog", "Port", nullptr));
        pololuPort->setText(QApplication::translate("HardwareDialog", "/dev/ttyUSB0", nullptr));
        groupBox_4->setTitle(QApplication::translate("HardwareDialog", "Chroma USB Servo Board", nullptr));
        label_13->setText(QApplication::translate("HardwareDialog", "Status:", nullptr));
        chromaWorkingLabel->setText(QApplication::translate("HardwareDialog", "?", nullptr));
        label_14->setText(QApplication::translate("HardwareDialog", "Port", nullptr));
        chromaPort->setText(QApplication::translate("HardwareDialog", "/dev/ttyUSB0", nullptr));
        enableChroma->setText(QApplication::translate("HardwareDialog", "Enable", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("HardwareDialog", "Devices", nullptr));
        groupBox->setTitle(QApplication::translate("HardwareDialog", "Bindings", nullptr));
        newBindingButton->setText(QApplication::translate("HardwareDialog", "New", nullptr));
        deleteBindingButton->setText(QApplication::translate("HardwareDialog", "Delete", nullptr));
        bindingPropertiesGroupBox->setTitle(QApplication::translate("HardwareDialog", "Binding properties", nullptr));
        label_8->setText(QApplication::translate("HardwareDialog", "Binding name", nullptr));
        label->setText(QApplication::translate("HardwareDialog", "Input dataref", nullptr));
        label_9->setText(QApplication::translate("HardwareDialog", "Dataref accuracy", nullptr));
        label_2->setText(QApplication::translate("HardwareDialog", "Input min", nullptr));
        label_3->setText(QApplication::translate("HardwareDialog", "Input max", nullptr));
        label_7->setText(QApplication::translate("HardwareDialog", "Output device", nullptr));
        outputDeviceComboBox->setItemText(0, QApplication::translate("HardwareDialog", "Null output for testing", nullptr));
        outputDeviceComboBox->setItemText(1, QApplication::translate("HardwareDialog", "RPi Servoblaster", nullptr));
        outputDeviceComboBox->setItemText(2, QApplication::translate("HardwareDialog", "Pololu serial", nullptr));
        outputDeviceComboBox->setItemText(3, QApplication::translate("HardwareDialog", "Chroma USB Servo Board", nullptr));

        label_4->setText(QApplication::translate("HardwareDialog", "Output num", nullptr));
        outputCurvesButton->setText(QApplication::translate("HardwareDialog", "Output curve..", nullptr));
        label_15->setText(QApplication::translate("HardwareDialog", "Interpolation speed", nullptr));
#ifndef QT_NO_TOOLTIP
        interpolationSpeedSpinbox->setToolTip(QApplication::translate("HardwareDialog", "Set to 0 for no interpolation", nullptr));
#endif // QT_NO_TOOLTIP
        saveChangesButton->setText(QApplication::translate("HardwareDialog", "Save changes", nullptr));
#ifndef QT_NO_TOOLTIP
        outputSpeedSpinbox->setToolTip(QApplication::translate("HardwareDialog", "<html><head/><body><p>Hardware-dependent maximum speed.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("HardwareDialog", "Output speed", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("HardwareDialog", "Bindings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HardwareDialog: public Ui_HardwareDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARDWAREDIALOG_H

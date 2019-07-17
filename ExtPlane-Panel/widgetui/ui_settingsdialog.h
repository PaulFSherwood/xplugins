/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *serverAddressEdit;
    QLabel *label_2;
    QDial *panelRotationDial;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QCheckBox *fullscreenCheckbox;
    QCheckBox *simulateCheckbox;
    QCheckBox *interpolateCheckbox;
    QCheckBox *antialiasCheckbox;
    QComboBox *updateIntervalComboBox;
    QComboBox *panelUpdateComboBox;
    QDoubleSpinBox *fontSizeSpinBox;
    QCheckBox *rememberSizeAndPositionCheckBox;
    QCheckBox *autoPanelsCheckbox;
    QCheckBox *adjustPowerCheckbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(712, 522);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(SettingsDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 678, 484));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        serverAddressEdit = new QLineEdit(scrollAreaWidgetContents);
        serverAddressEdit->setObjectName(QStringLiteral("serverAddressEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, serverAddressEdit);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        panelRotationDial = new QDial(scrollAreaWidgetContents);
        panelRotationDial->setObjectName(QStringLiteral("panelRotationDial"));
        panelRotationDial->setMinimumSize(QSize(100, 100));
        panelRotationDial->setMinimum(-179);
        panelRotationDial->setMaximum(180);
        panelRotationDial->setSingleStep(5);
        panelRotationDial->setWrapping(true);
        panelRotationDial->setNotchTarget(5);
        panelRotationDial->setNotchesVisible(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, panelRotationDial);

        spinBox = new QSpinBox(scrollAreaWidgetContents);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(-179);
        spinBox->setMaximum(180);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label);

        fullscreenCheckbox = new QCheckBox(scrollAreaWidgetContents);
        fullscreenCheckbox->setObjectName(QStringLiteral("fullscreenCheckbox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, fullscreenCheckbox);

        simulateCheckbox = new QCheckBox(scrollAreaWidgetContents);
        simulateCheckbox->setObjectName(QStringLiteral("simulateCheckbox"));

        formLayout->setWidget(8, QFormLayout::FieldRole, simulateCheckbox);

        interpolateCheckbox = new QCheckBox(scrollAreaWidgetContents);
        interpolateCheckbox->setObjectName(QStringLiteral("interpolateCheckbox"));
        interpolateCheckbox->setChecked(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, interpolateCheckbox);

        antialiasCheckbox = new QCheckBox(scrollAreaWidgetContents);
        antialiasCheckbox->setObjectName(QStringLiteral("antialiasCheckbox"));
        antialiasCheckbox->setChecked(true);

        formLayout->setWidget(10, QFormLayout::FieldRole, antialiasCheckbox);

        updateIntervalComboBox = new QComboBox(scrollAreaWidgetContents);
        updateIntervalComboBox->setObjectName(QStringLiteral("updateIntervalComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, updateIntervalComboBox);

        panelUpdateComboBox = new QComboBox(scrollAreaWidgetContents);
        panelUpdateComboBox->setObjectName(QStringLiteral("panelUpdateComboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, panelUpdateComboBox);

        fontSizeSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
        fontSizeSpinBox->setObjectName(QStringLiteral("fontSizeSpinBox"));
        fontSizeSpinBox->setDecimals(1);
        fontSizeSpinBox->setMinimum(5);
        fontSizeSpinBox->setValue(15);

        formLayout->setWidget(6, QFormLayout::FieldRole, fontSizeSpinBox);

        rememberSizeAndPositionCheckBox = new QCheckBox(scrollAreaWidgetContents);
        rememberSizeAndPositionCheckBox->setObjectName(QStringLiteral("rememberSizeAndPositionCheckBox"));

        formLayout->setWidget(11, QFormLayout::FieldRole, rememberSizeAndPositionCheckBox);

        autoPanelsCheckbox = new QCheckBox(scrollAreaWidgetContents);
        autoPanelsCheckbox->setObjectName(QStringLiteral("autoPanelsCheckbox"));

        formLayout->setWidget(12, QFormLayout::FieldRole, autoPanelsCheckbox);

        adjustPowerCheckbox = new QCheckBox(scrollAreaWidgetContents);
        adjustPowerCheckbox->setObjectName(QStringLiteral("adjustPowerCheckbox"));

        formLayout->setWidget(13, QFormLayout::FieldRole, adjustPowerCheckbox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));
        QObject::connect(panelRotationDial, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), panelRotationDial, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("SettingsDialog", "X-Plane + ExtPlane IP", Q_NULLPTR));
        serverAddressEdit->setText(QApplication::translate("SettingsDialog", "127.0.0.1", Q_NULLPTR));
        label_2->setText(QApplication::translate("SettingsDialog", "Panel rotation", Q_NULLPTR));
        label_4->setText(QApplication::translate("SettingsDialog", "ExtPlane update rate limit (Hz)", Q_NULLPTR));
        label_5->setText(QApplication::translate("SettingsDialog", "Panel repaint rate (FPS)", Q_NULLPTR));
        label_6->setText(QApplication::translate("SettingsDialog", "Default font size", Q_NULLPTR));
        label->setText(QApplication::translate("SettingsDialog", "Other options", Q_NULLPTR));
        fullscreenCheckbox->setText(QApplication::translate("SettingsDialog", "Fullscreen", Q_NULLPTR));
        simulateCheckbox->setText(QApplication::translate("SettingsDialog", "Simulated connection (requires restart)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        interpolateCheckbox->setToolTip(QApplication::translate("SettingsDialog", "<html><head/><body><p>Makes movement of needles smoother on some instruments.</p><p><br/></p><p>Use with high update interval or disable on slow devices if needed.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        interpolateCheckbox->setText(QApplication::translate("SettingsDialog", "Interpolate values", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        antialiasCheckbox->setToolTip(QApplication::translate("SettingsDialog", "<html><head/><body><p>Smooths edges of moving parts for visual clarity. Disable on slow devices.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        antialiasCheckbox->setText(QApplication::translate("SettingsDialog", "Antialias", Q_NULLPTR));
        updateIntervalComboBox->clear();
        updateIntervalComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "Don't change", Q_NULLPTR)
         << QApplication::translate("SettingsDialog", "10", Q_NULLPTR)
         << QApplication::translate("SettingsDialog", "15", Q_NULLPTR)
         << QApplication::translate("SettingsDialog", "30", Q_NULLPTR)
         << QApplication::translate("SettingsDialog", "60", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        updateIntervalComboBox->setToolTip(QApplication::translate("SettingsDialog", "<html><head/><body><p>How often X-Plane should send updates (at maximum). Set to as low value as possible for best preformance.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        panelUpdateComboBox->clear();
        panelUpdateComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "Update only when refs change", Q_NULLPTR)
         << QApplication::translate("SettingsDialog", "10", Q_NULLPTR)
         << QApplication::translate("SettingsDialog", "15", Q_NULLPTR)
         << QApplication::translate("SettingsDialog", "30", Q_NULLPTR)
         << QApplication::translate("SettingsDialog", "60", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        panelUpdateComboBox->setToolTip(QApplication::translate("SettingsDialog", "<html><head/><body><p>How often the panel should be redrawn. Set to lower value on slow devices. Has effect only if interpolation is enabled.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rememberSizeAndPositionCheckBox->setText(QApplication::translate("SettingsDialog", "Remember panel size and position", Q_NULLPTR));
        autoPanelsCheckbox->setText(QApplication::translate("SettingsDialog", "Automatically create and load panels for each aircraft", Q_NULLPTR));
        adjustPowerCheckbox->setText(QApplication::translate("SettingsDialog", "Adjust panel power and brightness", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'bindingcurvedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINDINGCURVEDIALOG_H
#define UI_BINDINGCURVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BindingCurveDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QSlider *verticalSlider_3;
    QSlider *verticalSlider_4;
    QSlider *verticalSlider_5;
    QSlider *verticalSlider_6;
    QSlider *verticalSlider_7;
    QSlider *verticalSlider_8;
    QPushButton *resetButton;
    QTableWidget *tableWidget;
    QGraphicsView *outputGraphView;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDoubleSpinBox *outputMinSpinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *outputMaxSpinBox;
    QCheckBox *invertCheckbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BindingCurveDialog)
    {
        if (BindingCurveDialog->objectName().isEmpty())
            BindingCurveDialog->setObjectName(QString::fromUtf8("BindingCurveDialog"));
        BindingCurveDialog->resize(666, 594);
        verticalLayout_4 = new QVBoxLayout(BindingCurveDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSlider = new QSlider(BindingCurveDialog);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider);

        verticalSlider_2 = new QSlider(BindingCurveDialog);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider_2);

        verticalSlider_3 = new QSlider(BindingCurveDialog);
        verticalSlider_3->setObjectName(QString::fromUtf8("verticalSlider_3"));
        verticalSlider_3->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider_3);

        verticalSlider_4 = new QSlider(BindingCurveDialog);
        verticalSlider_4->setObjectName(QString::fromUtf8("verticalSlider_4"));
        verticalSlider_4->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider_4);

        verticalSlider_5 = new QSlider(BindingCurveDialog);
        verticalSlider_5->setObjectName(QString::fromUtf8("verticalSlider_5"));
        verticalSlider_5->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider_5);

        verticalSlider_6 = new QSlider(BindingCurveDialog);
        verticalSlider_6->setObjectName(QString::fromUtf8("verticalSlider_6"));
        verticalSlider_6->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider_6);

        verticalSlider_7 = new QSlider(BindingCurveDialog);
        verticalSlider_7->setObjectName(QString::fromUtf8("verticalSlider_7"));
        verticalSlider_7->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider_7);

        verticalSlider_8 = new QSlider(BindingCurveDialog);
        verticalSlider_8->setObjectName(QString::fromUtf8("verticalSlider_8"));
        verticalSlider_8->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider_8);

        resetButton = new QPushButton(BindingCurveDialog);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        horizontalLayout->addWidget(resetButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(BindingCurveDialog);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem11);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(55);
        tableWidget->horizontalHeader()->setMinimumSectionSize(5);

        verticalLayout_3->addWidget(tableWidget);


        verticalLayout_4->addLayout(verticalLayout_3);

        outputGraphView = new QGraphicsView(BindingCurveDialog);
        outputGraphView->setObjectName(QString::fromUtf8("outputGraphView"));

        verticalLayout_4->addWidget(outputGraphView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(BindingCurveDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        outputMinSpinBox = new QDoubleSpinBox(BindingCurveDialog);
        outputMinSpinBox->setObjectName(QString::fromUtf8("outputMinSpinBox"));
        outputMinSpinBox->setMinimum(-99999.000000000000000);
        outputMinSpinBox->setMaximum(99999.000000000000000);

        verticalLayout->addWidget(outputMinSpinBox);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(BindingCurveDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        outputMaxSpinBox = new QDoubleSpinBox(BindingCurveDialog);
        outputMaxSpinBox->setObjectName(QString::fromUtf8("outputMaxSpinBox"));
        outputMaxSpinBox->setMinimum(-99999.000000000000000);
        outputMaxSpinBox->setMaximum(99999.000000000000000);

        verticalLayout_2->addWidget(outputMaxSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        invertCheckbox = new QCheckBox(BindingCurveDialog);
        invertCheckbox->setObjectName(QString::fromUtf8("invertCheckbox"));

        horizontalLayout_2->addWidget(invertCheckbox);

        buttonBox = new QDialogButtonBox(BindingCurveDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(BindingCurveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BindingCurveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BindingCurveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BindingCurveDialog);
    } // setupUi

    void retranslateUi(QDialog *BindingCurveDialog)
    {
        BindingCurveDialog->setWindowTitle(QApplication::translate("BindingCurveDialog", "Dialog", nullptr));
        resetButton->setText(QApplication::translate("BindingCurveDialog", "Reset", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BindingCurveDialog", "Header", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("BindingCurveDialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("BindingCurveDialog", "In", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("BindingCurveDialog", "Out", nullptr));
        label->setText(QApplication::translate("BindingCurveDialog", "Output min", nullptr));
        label_2->setText(QApplication::translate("BindingCurveDialog", "Output max", nullptr));
        invertCheckbox->setText(QApplication::translate("BindingCurveDialog", "Invert output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BindingCurveDialog: public Ui_BindingCurveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINDINGCURVEDIALOG_H

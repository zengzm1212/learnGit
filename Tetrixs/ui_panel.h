/********************************************************************************
** Form generated from reading UI file 'panel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANEL_H
#define UI_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Panel
{
public:
    QHBoxLayout *horizontalLayout_4;
    QGraphicsView *GraphicsView;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_gameLevel;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_score;
    QSpacerItem *horizontalSpacer;
    QLCDNumber *LCDNum_Score;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pbt_startGame;
    QPushButton *pbt_pauseGame;
    QPushButton *pbt_restart;
    QPushButton *pbt_stopGame;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Panel)
    {
        if (Panel->objectName().isEmpty())
            Panel->setObjectName(QStringLiteral("Panel"));
        Panel->resize(680, 470);
        Panel->setMinimumSize(QSize(680, 470));
        Panel->setMaximumSize(QSize(680, 470));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Image/icon/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Panel->setWindowIcon(icon);
        Panel->setStyleSheet(QLatin1String("QGraphicsView{\n"
"	background:transparent;\n"
"	border:2px solid white;\n"
"}\n"
"\n"
"QLabel#label_score,#label_gameLevel{\n"
"	font:38px 75;\n"
"	color:yellow;\n"
"}\n"
""));
        horizontalLayout_4 = new QHBoxLayout(Panel);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 10, 10, 10);
        GraphicsView = new QGraphicsView(Panel);
        GraphicsView->setObjectName(QStringLiteral("GraphicsView"));
        GraphicsView->setMinimumSize(QSize(350, 450));
        GraphicsView->setMaximumSize(QSize(350, 450));

        horizontalLayout_4->addWidget(GraphicsView);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_gameLevel = new QLabel(Panel);
        label_gameLevel->setObjectName(QStringLiteral("label_gameLevel"));
        label_gameLevel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_gameLevel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_score = new QLabel(Panel);
        label_score->setObjectName(QStringLiteral("label_score"));
        label_score->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_score);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        LCDNum_Score = new QLCDNumber(Panel);
        LCDNum_Score->setObjectName(QStringLiteral("LCDNum_Score"));
        LCDNum_Score->setMinimumSize(QSize(0, 80));
        LCDNum_Score->setMaximumSize(QSize(16777215, 80));
        LCDNum_Score->setFrameShape(QFrame::Box);
        LCDNum_Score->setFrameShadow(QFrame::Raised);
        LCDNum_Score->setProperty("intValue", QVariant(0));

        verticalLayout_2->addWidget(LCDNum_Score);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pbt_startGame = new QPushButton(Panel);
        pbt_startGame->setObjectName(QStringLiteral("pbt_startGame"));
        pbt_startGame->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(pbt_startGame);

        pbt_pauseGame = new QPushButton(Panel);
        pbt_pauseGame->setObjectName(QStringLiteral("pbt_pauseGame"));
        pbt_pauseGame->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(pbt_pauseGame);

        pbt_restart = new QPushButton(Panel);
        pbt_restart->setObjectName(QStringLiteral("pbt_restart"));
        pbt_restart->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(pbt_restart);

        pbt_stopGame = new QPushButton(Panel);
        pbt_stopGame->setObjectName(QStringLiteral("pbt_stopGame"));
        pbt_stopGame->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(pbt_stopGame);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        retranslateUi(Panel);

        QMetaObject::connectSlotsByName(Panel);
    } // setupUi

    void retranslateUi(QWidget *Panel)
    {
        Panel->setWindowTitle(QApplication::translate("Panel", "\344\277\204\347\275\227\346\226\257\346\226\271\345\235\227", Q_NULLPTR));
        label_gameLevel->setText(QApplication::translate("Panel", "\344\277\204\347\275\227\346\226\257\346\226\271\345\235\227", Q_NULLPTR));
        label_score->setText(QApplication::translate("Panel", "\345\276\227\345\210\206", Q_NULLPTR));
        pbt_startGame->setText(QApplication::translate("Panel", "\345\274\200\345\247\213", Q_NULLPTR));
        pbt_pauseGame->setText(QApplication::translate("Panel", "\346\232\202\345\201\234", Q_NULLPTR));
        pbt_restart->setText(QApplication::translate("Panel", "\351\207\215\346\226\260\345\274\200\345\247\213", Q_NULLPTR));
        pbt_stopGame->setText(QApplication::translate("Panel", "\347\273\223\346\235\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Panel: public Ui_Panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANEL_H

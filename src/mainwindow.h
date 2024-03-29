#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionTransfer_triggered();

    void on_actionSettings_triggered();

    void on_actionAdd_triggered();

    void on_actionCalender_triggered();

    void on_actionFilter_triggered();

private:
    Ui::MainWindow *ui;
    int page_state, filter_state;
};
#endif // MAINWINDOW_H

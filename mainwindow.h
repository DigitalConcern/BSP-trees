#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QTimer>

class MainWindow: public QGLWidget
{
public:
    MainWindow();

protected:
    int geese_size; // Сторона квадрата
    int point; // набранные очки
    int gdx, gdy; // Координаты квадрата
    int cax, cay, cbx, cby; // Координаты курсора (текущие и начальные(при зажатии клавиши мыши) для выделение области)
    int wax ,way; // Размеры окна нашей программы
    bool singling; // Для выделение области, если true то рисуем прямоугольник по координатам cax, cay, cbx, cby
    void self_cursor(); // метод для рисования своего курсора
    void initializeGL(); // Метод для инициализирования opengl
    void resizeGL(int nWidth, int nHeight); // Метод вызываемый после каждого изменения размера окна
    void paintGL(); // Метод для вывода изображения на экран
    void keyPressEvent(QKeyEvent *ke); // Для перехвата нажатия клавиш на клавиатуре
    void mouseMoveEvent(QMouseEvent *me); // Метод реагирует на перемещение указателя, но по умолчанию setMouseTracking(false)
    void mousePressEvent(QMouseEvent *me); // Реагирует на нажатие кнопок мыши
    void mouseReleaseEvent(QMouseEvent *me); // Метод реагирует на "отжатие" кнопки мыши
    void singling_lb(); // Рисуем рамку выделенной области
    void geese(); // Рисуем квадрат по которому кликать для получения очков
};

#endif // MAINWINDOW_H

#include "tableprinter.h"
#include <QAbstractItemModel>
#include <QPainter>
#include <QPrinter>


TablePrinter::TablePrinter(QPainter* painter, QPrinter* printer)
{
    painter(painter),
    printer(printer) {
    topMargin = 5;
    bottomMargin = 5;
    leftMargin = 10;
    rightMargin = 5;
    headerHeight = 0;
    bottomHeight = 0;
    leftBlank = 0;
    rightBlank = 0;
    maxRowHeight = 1000;
    pen = painter->pen();
    headersFont = painter->font();
    contentFont = painter->font();
    headerColor = painter->pen().color();
    contentColor = painter->pen().color();
    prepare = NULL;
    error = "No error";
}



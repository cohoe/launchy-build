//#include "commandlineparser.specs.h"
//#include "singleapplication.specs.h"
#include <QCoreApplication>
#include <QtTest>

int main(int argc, char** argv) 
{
    QCoreApplication app(argc, argv);

    bool success = true;

    CommandLineParserSpecs commandLineParserSpecs;
    success |= QTest::qExec(&commandLineParserSpecs, argc, argv)==0;

    SingleApplicationSpecs singleApplicationSpecs;
    success |= QTest::qExec(&singleApplicationSpecs, argc, argv)==0;

    return success;
}

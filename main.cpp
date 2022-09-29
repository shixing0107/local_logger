#include <QCoreApplication>
#include "rslog.h"
#include "rslogging.h"

int main(int argc, char *argv[])
{
    // QCoreApplication a(argc, argv);
    g_RsLog.setLogLevel(ERsLogLevel::DEBUG);
    g_RsLog.debug(__RS_FILE__, __LINE__, __FUNCTION__, "%s,%d", "adadsasfasd", "555");
    g_RsLog.info(__RS_FILE__, __LINE__, __FUNCTION__, "%s,%d", "adadsasfasd", "555");
    g_RsLog.error(__RS_FILE__, __LINE__, __FUNCTION__, "%s,%d", "adadsasfasd", "555");
    g_RsLog.fatal(__RS_FILE__, __LINE__, __FUNCTION__, "%s,%d", "adadsasfasd", "555");

    RSLOG_ERROR << "adfjaskdjflkasjdf" << "23421341234";
    RSLOG_INFO << "WERUOWEORUOWQER" << "242424243";
    RSLOG_DEBUG << "WERUOWEORUOWQER" << "242424243";

    RSLOG_WARN_F7("%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY");
    RSLOG_WARN_F8("%s-%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY", "776766");

    // g_RsLog.setLogPath("/home/xxxx/Documents/LogTest");
    RSLOG_DEBUG_F2("%s", "adfasdfiweriywe");
    RSLOG_DEBUG_F5("%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "asdfasdfasd", "11212312");

    RSLOG_INFO_F2("%s", "454654564");
    RSLOG_INFO_F3("%s-%s","adfasdfiweriywe", "454654564");


    // g_RsLog.setBaseLogName("KingSoft");
    RSLOG_ERROR_F2("adfasdfiweriywe", "454654564");
    RSLOG_ERROR_F5("%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "asdfasdfasd", "11212312");


    RSLOG_WARN_F7("%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY");
    RSLOG_WARN_F8("%s-%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY", "776766");

    RSLOG_WARN_F7("%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY");
    RSLOG_WARN_F8("%s-%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY", "776766");

    RSLOG_WARN_F7("%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY");
    RSLOG_WARN_F8("%s-%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY", "776766");

    RSLOG_WARN_F7("%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY");
    RSLOG_WARN_F8("%s-%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY", "776766");

    RSLOG_WARN_F7("%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY");
    RSLOG_WARN_F8("%s-%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY", "776766");

    RSLOG_WARN_F7("%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY");
    RSLOG_WARN_F8("%s-%s-%s-%s-%s-%s-%s", "adfasdfiweriywe", "454654564", "UUUU", "PPPP", "8899", "YYYY", "776766");

    return 0;
}

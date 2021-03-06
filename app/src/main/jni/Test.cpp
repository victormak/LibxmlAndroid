//
// Created by victor on 16-1-8.
//

#include <stdio.h>
#include <stdlib.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <jni.h>
#include <android/log.h>
#include "com_gdc_libxmlandroid_LibManager.h"

JNIEXPORT jstring JNICALL Java_com_gdc_libxmlandroid_LibManager_test(JNIEnv *env, jobject)
{

    char *szDocName="/mnt/sdcard/yy.xml";
    FILE *fp;
    fp=fopen(szDocName,"a+");
//    if(fp == NULL)
//    {
//        fclose(fp);
//        return 0;
//    }
//    printf("test");
    __android_log_print(ANDROID_LOG_INFO,"FILE_OPT","file create");
    xmlDocPtr pdoc = NULL;
    xmlNodePtr proot_node = NULL,pnode = NULL,pnode1 = NULL;
//
    pdoc = xmlNewDoc (BAD_CAST "1.0");
    proot_node = xmlNewNode (NULL, BAD_CAST "root node");
    xmlNewProp (proot_node, BAD_CAST "version", BAD_CAST "1.0");
    xmlDocSetRootElement (pdoc, proot_node);

    pnode = xmlNewNode (NULL, BAD_CAST "child node 1");
    xmlNewChild (pnode, NULL, BAD_CAST "child child node 1", BAD_CAST "info");
    xmlAddChild (proot_node, pnode);
    __android_log_print(ANDROID_LOG_INFO,"FILE_OPT"," fi inin");
    pnode1 = xmlNewNode (NULL, BAD_CAST "child child node 1");
    xmlAddChild (pnode, pnode1);
    xmlAddChild (pnode1,xmlNewText (BAD_CAST "this will lower node, child child child node 1"));

    xmlNewTextChild (proot_node, NULL, BAD_CAST "child node 2", BAD_CAST "child node 2 info");
    xmlNewTextChild (proot_node, NULL, BAD_CAST "child node 3", BAD_CAST "child node info 3");

//xmlSaveFormatFileEnc (argc > 1 ? argv[1]:"-", pdoc, "UTF-8", 1);
    xmlSaveFormatFileEnc(szDocName,pdoc, "UTF-8", 1);
    xmlFreeDoc (pdoc);
    xmlCleanupParser ();
    xmlMemoryDump ();
    fclose(fp);
    return env->NewStringUTF("test");
}
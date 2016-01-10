package com.gdc.libxmlandroid;

/**
 * Created by victor on 16-1-8.
 */
public class LibManager {

    static {
        System.loadLibrary("xml2");
    }

    public native String test();

}

package com.gdc.libxmlandroid;

import android.util.Log;

/**
 * Created by victor on 16-1-8.
 */
public class LibManager {

    static {
//        System.loadLibrary("icuuc");
        System.loadLibrary("iconvx");
        System.loadLibrary("xml2x");
        System.loadLibrary("myLibxml2");
        Log.i("LibManager", "android loadLibary done");
    }

    public native String test();

}

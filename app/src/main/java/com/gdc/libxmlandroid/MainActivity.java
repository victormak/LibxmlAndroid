package com.gdc.libxmlandroid;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        String str = new LibManager().test();
        Toast.makeText(this,str,Toast.LENGTH_SHORT).show();
    }

}

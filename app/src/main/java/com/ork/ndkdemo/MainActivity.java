package com.ork.ndkdemo;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

    // A native method that returns a Java String to be displayed on the
    // TextView
    public native String add();

    public native String add2(int i,int j);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = (TextView) findViewById(R.id.result);
        tv.setText(add2(3,4));
    }

    static {
        System.loadLibrary("hello-jni");
    }

}

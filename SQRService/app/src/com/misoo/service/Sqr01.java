
// sqr01.java

package com.misoo.service;

public class Sqr01 {

    static {
        System.loadLibrary("libSQRS01_jni");
    }

    public static native int execute(int x);

    public static void main(String[] args) {

        int num = Sqr01.execute(2);

        System.out.println("2 * 2 = " + num);
		
    }


}

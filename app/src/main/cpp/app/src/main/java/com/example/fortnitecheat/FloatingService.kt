package com.example.fortnitecheat

import android.app.Service
import android.content.Intent
import android.os.IBinder

class FloatingService : Service() {
    external fun initializeCheat(): Boolean

    override fun onBind(intent: Intent?): IBinder? = null

    override fun onCreate() {
        super.onCreate()
        System.loadLibrary("cheat")
        initializeCheat()
    }
}

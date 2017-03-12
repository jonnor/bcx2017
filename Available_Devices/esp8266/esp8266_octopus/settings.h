#ifndef SETTINGS_H
#define SETTINGS_H

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

#include "ArduinoJson.h" // Make sure you have the ArduinoJson library installed
#include "RestClient.h" // Make sure you have the ESP8266RestClient library installed

// ---- Hono Configuration ----
const char *hono_host = "hono.bosch-iot-suite.com";
const int hono_http_port = 8080;
const char *hono_tenant = "bcx";

// ---- Wifi Configuration ----

const char *wifi_ssid = "BCX17 OpenHack";
const char *wifi_pass = "BCX17.opnh";

// ---- Hardware Configuration ----

ADC_MODE(ADC_VCC); // enable reading in VCC of ESP8266

const int sensorUpdateRateMS = 10000; // Send updated sensor value every 10 seconds

#define PIN_BUTTON        0    // Use GPIO0 for button input
#define PIN_LED           1

// ---- Types ----

enum Hono_message_type {
    TELEMETRY,
    EVENT 
};

// ----- Functions ----

const char * getDeviceId();

#endif


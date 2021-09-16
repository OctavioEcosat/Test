#include <HTTPClient.h>
#include "WiFi.h"

#define RC 1000 //Resistance Value
#define VCC 3.3 //Voltage Common
#define DELAY_TIME 250
#define tiempoEnvioCompletado  5000
#define tiempoSensorCompletado  1000

//Steinhart–Hart coefficients
#define CONST_A  2.229674985e-3
#define CONST_B  1.211871252e-4
#define CONST_C  8.713435086e-7
#define CONST_K  2.5 //Dissipation factor mW/C

// Sensor Pins
char estadoInputPin[] = {27, 17};
char ledInputPin[] = {26, 16};
char sensorInputPin[] = {33, 34};
char relayOutPin[] = {1, 2, 3};

float sensorsValues[] = {0, 0};
char estadoAnterior[] = {1, 1};


/*CREDENTIALS*/
char const *ssid = "Ecosat";
char const *password = "ECOSAT2021";
// char const *ipServer = "ecosat.com.mx";
char const *ipServer = "127.0.0.1";
char const *puertoServer = "80";


short tiempoSensor = 0;


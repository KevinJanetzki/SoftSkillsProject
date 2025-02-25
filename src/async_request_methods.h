void sendRequests() {
  //Startseite
  server.on("/", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/index.php", String(tmpValue));
  });
  
  //Info-Seite
  server.on("/infopage.php", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/infopage.php", String(tmpValue));
  });

  //Impressum
  server.on("/imprint.php", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/imprint.php", String(tmpValue));
  });

  //Nutzungsbedingungen
  server.on("/policy.php", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/policy.php", String(tmpValue));
  });

  //Datenschutz
  server.on("/privacy.php", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/privacy.php", String(tmpValue));
  });

  //CSS-Dateien
  server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/style.css", "text/css");
  });

  server.on("/button.css", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/button.css", "text/css");
  });

  //Daten-Anzeige auf der Startseite
  server.on("/currentWeight", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(getWeight()));
  });
  
  server.on("/maxWeight", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(maxWeight()));
  });

  server.on("/lastDrankAmount", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(lastDrankAmount()));
  });

  server.on("/lastDrankDateHour", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(lastSessionTimestamp[0]));
  }

  server.on("/lastDrankDateMinute", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(lastSessionTimestamp[1]));
  }

  server.on("/lastDrankDateSecond", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(lastSessionTimestamp[2]));
  }

  server.on("/DrankDay1", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(consumptionWeek[0]));
  }

  server.on("/DrankDay2", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(consumptionWeek[1]));
  }

  server.on("/DrankDay3", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(consumptionWeek[2]));
  }

  server.on("/DrankDay4", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(consumptionWeek[3]));
  }

  server.on("/DrankDay5", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(consumptionWeek[4]));
  }

  server.on("/DrankDay6", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(consumptionWeek[5]));
  }

  server.on("/DrankDay7", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(200, "text/plain", String(consumptionWeek[6]));
  }
}

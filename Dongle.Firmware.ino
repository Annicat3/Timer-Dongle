const int timeBtn = 14;
const int startBtn = 12;
const int buzzer = 15; 
const int LED_COUNT = 6;
const int leds[LED_COUNT] = {30, 31, 33, 34, 16, 17};
const unsigned long MINUTE = 60000UL;
int selectedMinutes = 10;
bool timerRunning = false;
bool alarmActive = false;

unsigned long startTime;
unsigned long duration;

bool lastTimeBtn = HIGH;
bool lastStartBtn = HIGH;


void setup() {
  for (int i = 0; i < LED_COUNT; i++) {
    pinMode(leds[i], OUTPUT);
  }

  pinMode(timeBtn, INPUT);
  pinMode(startBtn, INPUT);
  pinMode(buzzer, OUTPUT);
  showLEDs(selectedMinutes / 10);
}


void loop() {
  checkButtons();

  if (timerRunning) {
    updateTimer();
  }

  if (alarmActive) {
    updateAlarm();
  }
}


void checkButtons() {
  bool timeState = digitalRead(timeBtn);
  bool startState = digitalRead(startBtn);

  if (lastTimeBtn == HIGH && timeState == LOW) {
    delay(20);

    if (digitalRead(timeBtn) == LOW) {
      if (alarmActive) {
        stopAlarm();
      }
      else if (!timerRunning) {
        selectedMinutes += 10;

        if (selectedMinutes > 60) {
          selectedMinutes = 10;
        }

        showLEDs(selectedMinutes / 10);
      }
    }
  }

  if (lastStartBtn == HIGH && startState == LOW) {
    delay(20);

    if (digitalRead(startBtn) == LOW && !timerRunning && !alarmActive) {
      startTimer();
    }
  }
  lastTimeBtn = timeState;
  lastStartBtn = startState;
}


void startTimer() {
  timerRunning = true;
  duration = selectedMinutes * MINUTE;
  startTime = millis();
}


void updateTimer() {
  unsigned long elapsed = millis() - startTime;
  if (elapsed >= duration) {
    timerRunning = false;
    alarmActive = true;
    return;
  }

  unsigned long remaining = duration - elapsed;
  int ledsToShow = (remaining * 6 + duration - 1) / duration;
  showLEDs(ledsToShow);
}


void showLEDs(int amount) {
  for (int i = 0; i < LED_COUNT; i++) {
    digitalWrite(leds[i], i < amount ? HIGH : LOW);
  }
}


void updateAlarm() {
  bool blink = (millis() / 500) % 2;
  bool beep = (millis() / 250) % 2;

  for (int i = 0; i < LED_COUNT; i++) {
    digitalWrite(leds[i], blink);
  }
  digitalWrite(buzzer, beep);
}


void stopAlarm() {
  alarmActive = false;
  digitalWrite(buzzer, LOW);

  selectedMinutes = 10;
  showLEDs(selectedMinutes / 10);
}
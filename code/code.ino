// Length of the array.
int LENGTH = 3;

// Button pins.
int BUTTONS[] = {
  11, 12, 13
};

// Tones for each button.
float TONES[] = {
  261.6, 293.6, 329.6
};

// Buzzer pin.
int BUZZER = 10;

// Setup
void setup () {

  // Initialize each button.
  for (int button = 0; button < LENGTH; button++) {

    // Set the pinmode for the button.
    pinMode(BUTTONS[button], INPUT_PULLUP);
  }

  // Set the pinmode for the buzzer.
  pinMode(BUZZER, OUTPUT);
}

// Loop
void loop () {

  // Loop through each button.
  for (int button = 0; button < LENGTH; button++) {

    // Read the value of the button.
    int value = digitalRead(BUTTONS[button]);

    // Check if the value is low.
    if (value == LOW) {

      // Play the tone.
      tone(BUZZER, TONES[button], 200);
    }
  }
}


#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the library with the I2C address found for your display
LiquidCrystal_I2C lcd(0x27, 16, 4);

byte customChar[] = {
    B00000,
    B00000,
    B00000,
    B11000,
    B11000,
    B00000,
    B00000,
    B00000
};

int xVal = 0;
int yVal = 0;
String displayArray[] = {
    "10000000000000000000",
    "00000000000000000000",
    "00000000000000000000",
    "00000000000000000000"
};


void setup() {
    Serial.begin(9600);

    lcd.init();
    lcd.backlight();

    pinMode(7, INPUT_PULLUP);

    // Print a message to the LCD
    lcd.setCursor(0, 0); // Set the cursor to column 0, row 0
    lcd.print("Hello, World!");
    lcd.setCursor(0, 1); // Move to the second row
    lcd.print("LCD 16x4 I2C");

    lcd.createChar(1, customChar);
    lcd.setCursor(0, 2);
    lcd.write(1);
    printArray();

}

void loop() {
    // Main loop - nothing to do here
    int x = analogRead(A1);
    int y = analogRead(A0);
    // Serial.print(x);
    // Serial.print("\t");
    // Serial.println(y);
    if(x>900) {
        moveRight();
        printArray();
    }
    if (x<150) {
        moveLeft();
        printArray();

    }


}

void moveRight() {
    displayArray[xVal][yVal] = '0';
    if(yVal<19) {
        yVal++;
    }
    displayArray[xVal][yVal] = '1';
}

void moveLeft() {
    displayArray[xVal][yVal] = '0';
    if(yVal>0) {
        yVal--;
    }
    displayArray[xVal][yVal] = '1';
}

void printArray() {
    for(int r=0; r<4; r++) {
        for(int c=0; c<20; c++) {
            lcd.setCursor(c, r);
            if (displayArray[r][c]=='1') {
                lcd.write(1);
            } else {
                lcd.print(" ");
            }
        }
    }
}
